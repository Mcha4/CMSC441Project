#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
#include <unistd.h>
using namespace std;

static unsigned int minStackLocation;

class matrix{
    public:
        matrix();
        matrix(int row, int col);
        ~matrix();
        void generateRandomMatrix();
        int getRows();
        int getCols();
        int getMemory();
        double** getData();
        void setData(int row, int col, double input);
        void printMatrix();
        
        matrix* addMatrix(matrix* A, matrix* B);
        matrix* subMatrix(matrix* A, matrix* B);
        
        matrix* basicMatrix(matrix* A, matrix* B);
        matrix* strassenMatrix(matrix* A, matrix* B);
    private:
        int rows;
        int cols;
        double **data;
        int memoryUsage;
};