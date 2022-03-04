#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
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

#define TEN 10
#define SIZE 100
typedef vector<vector<int>> Matrix;

//generate matrix
Matrix generateMatrix(int);
Matrix basicMatrix(Matrix, Matrix);
void printData(Matrix);
Matrix addMatrix(Matrix, Matrix);

Matrix generatMatrix(int n) {
  Matrix matrix;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
				matrix[i][j] = rand() % 101;
		}
	}
  return matrix;
}

Matrix basicMatrix(Matrix A, Matrix B){
	Matrix result;
	for(int i = 0; i < A.size(); i++){
    for(int j = 0; j < A.size(); j++){
      for(int k = 0; k < A.size(); k++){
        result[i][j] = result[i][j] + A[i][k] * B[k][j];
      }
    }
	}
	return result;
}

Matrix StrassenMatirx(Matrix A, Matrix B){
  Matrix result;

  if(size > 2){
    divide()
  }
  A11 = A[0];
  A12;
  A21;
  A22;
  B11;
  B12;
  B21;
  B22;

  M1 = (A11 + A22) * (B11 + B22);
  M2 = (A21 + A22) * B11;
  M3 = A11 * (B12 - B22);
  M4 = A22 * (B21 - B11);
  M5 = (A11 + A12) * B22;
  M6 = (A21 - A11) * (B11 + B12);
  M7 = (A12 - A22) * (B21 + B22);

  C11 = subMatrix(addMatrix(M1 + M4), addMatrix(M5 + M7));
  C12 = addMatrix(M3, M5);
  C21 = addMatrix(M2, M4);
  C22 = addMatrix(subMatrix(M1, M2), addMatrix(M3, M6));
  insert(C11, result, 0, (n/2)-1));
  insert(C12, result, 0, (n/2)-1));
  insert(C21, result, 0, (n/2)-1));
  insert(C22, result, 0, (n/2)-1));

  return result;
}

void printData(Matrix data){
	cout << setw(6) << "Size" << setw(8) << "Basic" << setw(8) << "Starssen";
  for(int i = 0; i < data.size(); i++){
  	cout << setw(6) << data[i][0] << setw(8) << data[i][1] << setw(8) << data[i][2] << setw(8) << data[i][3] << setw(8) << data[i][4];
  }
}

Matrix addMatrix(Matrix A, Matrix B){
  Matrix sum;
  for(int i = 0; i < TEN; i++){
    for(int j = 0; j < TEN; j++);
      sum[i][j] = A[i][j] + B[i][j];
  }
}

Matrix subMatrix(Matrix A, Matrix B){
  Matrix sum;
  for(int i = 0; i < TEN; i++){
    for(int j = 0; j < TEN; j++);
      sum[i][j] = A[i][j] - B[i][j];
  }
}

void split(Matrix parent, Matrix child, int from, int to){
  for(int i1 = 0; i2 = from; i1 < child.size(); i1++, i2++){
    for(int j1 = 0; j2 = to; j1 < child.size(); j1++, j2++){
      child[i1][j1] = parent[i2][j2];
    }
  }
}

void insertResult(Matrix parent, Matrix child, int from, int to){
  for(int i1 = 0; i2 = from; i1 < child.size(); i1++, i2++){
    for(int j1 = 0; j2 = to; j1 < child.size(); j1++, j2++){
      parent[i2][j2] = child[i1][j1];
    }
  }
}

int main() {
  clock_t start, stop;
  double timeTaken = 0;
  Matrix data[3][10];
  // for(int i = 0; i < number of inputs; i++){
  int n = TEN;
  int matrix[n][n];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
				matrix[i][j] = rand() % 101;
		}
	}


  for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
				cout << matrix[i][j] << " ";
		}
    cout << endl;
	}
  cout << "Size of matrix A: " << sizeof(**matrix) << endl;

  //enable tick time to measure runing time
  
  start = clock();
  
  //calculate function
  
  stop = clock();
  //finish tick time and store the data into table;
  
  timeTaken = stop - start;
  //data[][] = timeTaken;
  
  //Strassen's algorithm
  
  //enable the timer
  
  //finish the timer store data
  
  //print out data table;
  // ----------------------------------------------
  //|size|B.M.R.	| S.M.R		| B.M.M.	| S.M.M.
  //|10  |			  |			    |			    |
  //|100 |			  |			    |			    |
  //|200 |			  |			    |			    |
  //|500 |			  |			    |			    |
	return 0;
}