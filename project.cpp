#include <iostream>
#include <vector>
#include <time>
#include <stdlib.h>
#include <resource.h>

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

int main() {
	clock_t start, stop;
  double timeTaken = 0;
  vector<vector<int>> data[3][10];
  // for(int i = 0; i < number of inputs; i++){
  vector< vector<int> > matrixA = loadArray(3);
  vector< vector<int> > matrixB = loadArray(3);
  //enable tick time to measure runing time
  
  start = clock();
  
  //calculate function
  calculate_matrix(matrixA, matrixB);
  
  stop = clock();
  //finish tick time and store the data into table;
  
  timeTaken = stop - start;
  //data[][] = timeTaken;
  
  //Strassen's algorithm
  
  //enable the timer
  
  //finish the timer store data
  
  //print out data table;
  // ----------------------
  //|size|B.M.R.	| S.M.R | B.M.M. | S.M.M.
  //|10  |        |				|				 |
  //|100 |			  |			  |				 |
  //|200 |			  |				|				 |
  //|500 |			  |				|				 |
	return 0;
}

vector loadArray(int n) {
  vector <vector<int> matrix;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
    		
				matrix[i][j] = rand() % 101;
		}
	}
  return matrix;
}


vector calculate_matrix(vector A, vector B){

	vector<vector<int>> result;
  
  for(int i = 0; i < A[].size(); i++){
  	for(int j = 0; j < A[].size(); j++){
    	for(int k = 0; k < A[].size(); k++){
      	result[i][j] = result[i][j] + A[i][k] * B[k][j]
      }
    }
  }
	return result;
}

void printData(vector<vector<int>> data){
	cout << setw(6) << "Size" << setw(8) << "Basic" << setw(8) << "Starssen";
  for(int i = 0; i < data.col(); i++){
  	cout << setw(6) << data[i][0] << setw(8) << data[i][1] << setw(8) << data[i][2] << setw(8) << data[i][3] << setw(8) << data[i][4];
  }
}


struct matrix
{
	int col;
  int row;
}
