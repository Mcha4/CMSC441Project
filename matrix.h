#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
#include <unistd.h>
using namespace std;

class matrix{
    public:
        matrix();
        matrix(int row, int col);
        ~matrix();
        void generateRandomMatrix();
        int getRows();
        int getCols();
        double** getData();
        void setData(int row, int col, double input);
        void printMatrix();
        int getMemory();
        
        matrix* addMatrix(matrix* A, matrix* B);
        matrix* subMatrix(matrix* A, matrix* B);
        
        matrix* basicMatrix(matrix* A, matrix* B);
        matrix* strassenMatrix(matrix* A, matrix* B);
        matrix* strassenMatrixk(matrix* A, matrix* B, int k);
    private:
        int rows;
        int cols;
        double **data;
        int memoryUsage;
};