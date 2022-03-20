#include "matrix.h"
using namespace std;


int main(){
    //To check data change the iteration
    int iteration = 6;
    clock_t start, stop;
    double timeTaken = 0.0;    
    matrix dataTable(iteration, 5);
    int count = 0;

    int memoryUsage = 0;
    int matrixSize = 10;
    while(count < iteration){
        cout << matrixSize << endl;
        matrix A(matrixSize, matrixSize);
        matrix B(matrixSize, matrixSize);
        matrix C(matrixSize, matrixSize);
        matrix D(matrixSize, matrixSize);
        A.generateRandomMatrix();
        B.generateRandomMatrix();

        dataTable.setData(count, 0, matrixSize);
        
        //Operation

        //When trying print the C after basicMatrix it occur errors. but data is printed
        start = clock();
        C.basicMatrix(&A, &B);
        stop = clock();
        memoryUsage = A.getMemory() + B.getMemory() + C.getMemory();
        timeTaken = stop - start;

        //Insert the simulation data into table
        dataTable.setData(count, 1, timeTaken);
        dataTable.setData(count, 3, memoryUsage);

        //Opeartions

        start = clock();
        D.strassenMatrix(&A, &B);
        stop = clock();
        timeTaken = stop - start;
        memoryUsage = A.getMemory() + B.getMemory() + D.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 2, timeTaken);
        dataTable.setData(count, 4, memoryUsage);

        //increase table size and count
        matrixSize = matrixSize*3;
        count++;
    }
    dataTable.printMatrix();

    return 0;
}