#include "matrix.h"
#include <sys/resource.h>
using namespace std;

int main(){
    //To check data change the iteration and matrixSize
    int iteration = 30;
    clock_t start, stop;
    double timeTaken = 0.0;    
    matrix dataTable(iteration, 5);
    int count = 0;
    int matrixSize = 10;

    while(count < iteration){
        matrix A(matrixSize, matrixSize);
        matrix B(matrixSize, matrixSize);
        matrix C(matrixSize, matrixSize);
        matrix D(matrixSize, matrixSize);
        A.generateRandomMatrix();
        B.generateRandomMatrix();
        dataTable.setData(count, 0, matrixSize);

        //Operation
        //When trying print the C after basicMatrix it occur errors. but data is printed
        //Time
        // start = clock();
        // C.basicMatrix(&A, &B);
        // stop = clock();
        // timeTaken = stop - start;
        //Space
        double memoryBasic = A.getMemory() + B.getMemory() + C.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 1, 0); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 3, 0); //memoryBasic

        // Opeartions
        // Time
        
        start = clock();
        D.strassenMatrixk(&A, &B, 64);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        double memoryStarssen = A.getMemory() + B.getMemory() + D.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 2, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 4, memoryStarssen); //memoryStarssen
        //increase table size and count        
        if(matrixSize < 100){
            matrixSize += 10;
        } else if(matrixSize < 3000) {
            matrixSize += 100;
        } else if(matrixSize < 8000){
            matrixSize += 500;
        }
        count++;
    }
    dataTable.printMatrix();

    return 0;
}