#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
//#include <sys/resource.h>

using namespace std;

//Basic Matrix
//generate matrix
//Enable tick
//calculate matrix
//finish tick
//store the data of n, tick vector
//change the size of array
//enable tick
//calculate matrix
//finish tick
//generate matrix
#define TEN 10

void generateMatrix(int** matrix, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
				matrix[i][j] = rand() % 101;
		}
	}
}

void basicMatrix(int** A, int** B, int** result, int matrixSize){
	for(int i = 0; i < matrixSize; i++){
    for(int j = 0; j < matrixSize; j++){
      for(int k = 0; k < matrixSize; k++){
        result[i][j] = result[i][j] + A[i][k] * B[k][j];
      }
    }
	}
}




int** addMatrix(int** A, int** B, int matrixSize){
  int** result;
  for(int i = 0; i < matrixSize; i++){
    for(int j = 0; j < matrixSize; j++){
      result[i][j] = A[i][j] + B[i][j];
    }
  }
  return result;
}

int** subMatrix(int** A, int** B, int matrixSize){
  int** result;
  for(int i = 0; i < matrixSize; i++){
    for(int j = 0; j < matrixSize; j++){
      result[i][j] = A[i][j] - B[i][j];
    }
  }
  return result;
}

void split(int** parent, int** child, int from, int to, int matrixSize){
  for(int i1 = 0, i2 = from; i1 < matrixSize; i1++, i2++){
    for(int j1 = 0, j2 = to; j1 < matrixSize; j1++, j2++){
      child[i1][j1] = parent[i2][j2];
    }
  }
}

void insertResult(int** parent, int** child, int from, int to, int matrixSize){
  for(int i1 = 0, i2 = from; i1 < matrixSize; i1++, i2++){
    for(int j1 = 0, j2 = to; j1 < matrixSize; j1++, j2++){
      parent[i2][j2] = child[i1][j1];
    }
  }
}

void StrassenMatrix(int** A, int** B, int** result, int matrixSize){
  
  //Divide 
  //Initalize
  int** A11 = new int*[matrixSize/2];
  int** A12 = new int*[matrixSize/2];
  int** A21 = new int*[matrixSize/2];
  int** A22 = new int*[matrixSize/2];
  int** B11 = new int*[matrixSize/2];
  int** B12 = new int*[matrixSize/2];
  int** B21 = new int*[matrixSize/2];
  int** B22 = new int*[matrixSize/2];
  for(int i = 0; i < matrixSize/2; i++){
    A11[i] = new int[matrixSize/2];
    A12[i] = new int[matrixSize/2];
    A21[i] = new int[matrixSize/2];
    A22[i] = new int[matrixSize/2];
    B11[i] = new int[matrixSize/2];
    B12[i] = new int[matrixSize/2];
    B21[i] = new int[matrixSize/2];
    B22[i] = new int[matrixSize/2];
  }
  if(matrixSize > 2){
    split(A, A11, 0, matrixSize/2, matrixSize/2);
    split(A, A12, matrixSize/2, matrixSize, matrixSize/2);
    split(A, A21, 0, matrixSize/2, matrixSize/2);
    split(A, A22, matrixSize/2, matrixSize, matrixSize/2);
  }
  
  //M1 = (A11 + A22) * (B11 + B22)
  int** M1 = new int*[matrixSize];
  StrassenMatrix((addMatrix(A11, A22, matrixSize/2)), addMatrix(B11, B22, matrixSize/2), M1, matrixSize/2);

  //M2 = (A21 + A22) * B11
  int** M2 = new int*[matrixSize];
  StrassenMatrix((addMatrix(A21, A22, matrixSize/2)), B11, M2, matrixSize/2);

  //M3 = A11 * (B12-B22)
  int** M3 = new int*[matrixSize];
  StrassenMatrix(A11, subMatrix(B11, B22, matrixSize/2), M3, matrixSize/2);

  //M4 = A22 * (B21 - B11)
  int** M4 = new int*[matrixSize];
  StrassenMatrix(A22, addMatrix(B21, B11, matrixSize/2), M4, matrixSize/2);

  //M5 = (A11 + A12) * B22
  int** M5 = new int*[matrixSize];
  StrassenMatrix(addMatrix(A11, A12, matrixSize/2), B22, M5, matrixSize/2);

  //M6 = (A21- A11) * (B11 + B12)
  int** M6 = new int*[matrixSize];
  StrassenMatrix((subMatrix(A21, A11, matrixSize/2)), addMatrix(B11, B12, matrixSize/2), M6, matrixSize/2);

  //M7 = (A12 - A22) * (B21 + B22)
  int** M7 = new int*[matrixSize];
  StrassenMatrix(subMatrix(A12, A22, matrixSize/2), addMatrix(B21, B22, matrixSize/2), M7, matrixSize/2);


  //C11 = M1 + M4 - M5 + M7
  //C12 = M3 + M5
  //C21 = M2 + M4
  //C22 = M1 - M2 + M3 + M6
  int** C11 = subMatrix(addMatrix(M1, M4, matrixSize/2), addMatrix(M5, M7, matrixSize/2), matrixSize/2);
  int** C12 = addMatrix(M3, M5, matrixSize/2);
  int** C21 = addMatrix(M2, M4, matrixSize/2);
  int** C22 = addMatrix(subMatrix(M1, M2, matrixSize/2), addMatrix(M3, M6, matrixSize/2), matrixSize/2);
  insertResult(result, C11, 0, matrixSize/2, matrixSize/2);
  insertResult(result, C12, 0, matrixSize/2, matrixSize/2);
  insertResult(result, C21, 0, matrixSize/2, matrixSize/2);
  insertResult(result, C22, 0, matrixSize/2, matrixSize/2);

  //Delete pointers
  for(int i = 0; i < matrixSize; i++){
    delete[] A11[i];
  }
  delete[] A11;
}

//Print data in table
void printData(double* data[]){
	cout << setw(6) << "Size" << setw(16) << "BasicT" << setw(16) << "StarssenT" << setw(16) << "BasicM" << setw(16) << "StarssenM" << endl;
  for(int i = 0; i < TEN; i++){
  	cout << setw(6) << data[i][0] << setw(16) << data[i][1] << setw(16) << data[i][2] << setw(16) << data[i][3] << setw(16) << data[i][4] << endl;
  }
}

//Main
int main() {
  clock_t start, stop;
  double timeTaken = 0.0;
  double** dataTable;
  dataTable = new double*[10];
  for(int i = 0; i < TEN; i++){
    dataTable[i] = new double[5];
  }
  int matrixSize = 0;


  //Iteration to make data in different sizes;
  for(int count = 0; count < TEN; count++){
    //increase the size
    matrixSize = pow(2, count+1);

    //declare the matrixA, matrixB, result
    int** matrixA = new int*[matrixSize];
    int** matrixB = new int*[matrixSize];
    int** resultBasic = new int*[matrixSize];
    int** resultStrassen = new int*[matrixSize];
    for(int i = 0; i < matrixSize; i++){
      matrixA[i] = new int[matrixSize];
      matrixB[i] = new int[matrixSize];
      resultBasic[i] = new int[matrixSize];
      resultStrassen[i] = new int[matrixSize];
    }

    //Size of matrices into data table.
    dataTable[count][0] = matrixSize;
    //Genrating the random numbers in matrixA and matrixB
    generateMatrix(matrixA, matrixSize);
    generateMatrix(matrixB, matrixSize);
    //Store the result of basic matrix multiplication
    start = clock();
    basicMatrix(matrixA, matrixB, resultBasic, matrixSize);
    stop = clock();
    timeTaken = stop - start;
    dataTable[count][1] = timeTaken;
    
    //store the memory data for basic matrix multiplication

    //Store the result of Strassen matrix multiplciation
    start = clock();
    //StrassenMatrix(matrixA, matrixB, resultStrassen, matrixSize);
    stop = clock();
    timeTaken = stop - start;
    dataTable[count][2] = timeTaken;
    
    //store the memory data for Strassen matrix multiplication
    
    //delete the matrices
    for(int i = 0; i < matrixSize; i++){
      delete[] matrixA[i];
      delete[] matrixB[i];
      delete[] resultBasic[i];
      delete[] resultStrassen[i];
    }
    delete[] matrixA;
    delete[] matrixB;
    delete[] resultBasic;
    delete[] resultStrassen;
  }
   
  //print out data table;
  // ----------------------------------------------
  //|size|B.M.R.	| S.M.R		| B.M.M.	| S.M.M.
  //|10  |			  |			    |			    |
  //|100 |			  |			    |			    |
  //|200 |			  |			    |			    |
  //|500 |			  |			    |			    |
  
  printData(dataTable);
  for(int i =0; i < TEN; i++){
    delete[] dataTable[i];
  }
  delete[] dataTable;
	return 0;
}