#include "matrix.h"
#include <sys/resource.h>
using namespace std;

int main(){
    //To check data change the iteration and matrixSize
    int iteration = 11;
    clock_t start, stop;
    double timeTaken = 0.0;    
    matrix dataTable(iteration, 19);
    int count = 0;
    int matrixSize = 2;

    while(count < iteration){
        matrix A(matrixSize, matrixSize);//Default 
        matrix B(matrixSize, matrixSize);//Default 
        matrix C(matrixSize, matrixSize);//Basic
        matrix D(matrixSize, matrixSize);//SAM
        matrix E(matrixSize, matrixSize);//4
        matrix F(matrixSize, matrixSize);//8
        matrix G(matrixSize, matrixSize);//16
        matrix H(matrixSize, matrixSize);//32
        matrix I(matrixSize, matrixSize);//64
        matrix J(matrixSize, matrixSize);//128
        matrix K(matrixSize, matrixSize);//256
        
        A.generateRandomMatrix();
        B.generateRandomMatrix();
        dataTable.setData(count, 0, matrixSize);

        //Operation
        //When trying print the C after basicMatrix it occur errors. but data is printed
        //Time
        start = clock();
        C.basicMatrix(&A, &B);
        stop = clock();
        timeTaken = stop - start;
        //Space
        double memoryBasic = (double)A.getMemory() + (double)B.getMemory() + (double)C.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 1, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 10, memoryBasic); //memoryBasic

        // Opeartions
        // Time
        
        start = clock();
        D.strassenMatrix(&A, &B);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        double memoryStarssen = (double)A.getMemory() + (double)B.getMemory() + (double)D.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 2, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 11, memoryStarssen); //memoryStarssen

        
        // Opeartions
        // Time
        
        start = clock();
        E.strassenMatrixk(&A, &B, 4);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        memoryStarssen = (double)A.getMemory() + (double)B.getMemory() + (double)E.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 3, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 12, memoryStarssen); //memoryStarssen

        // Opeartions
        // Time
        
        start = clock();
        F.strassenMatrixk(&A, &B, 8);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        memoryStarssen = (double)A.getMemory() + (double)B.getMemory() + (double)F.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 4, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 13, memoryStarssen); //memoryStarssen

        // Opeartions
        // Time
        
        start = clock();
        G.strassenMatrixk(&A, &B, 16);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        memoryStarssen = (double)A.getMemory() + (double)B.getMemory() + (double)G.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 5, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 14, memoryStarssen); //memoryStarssen

        // Opeartions
        // Time
        
        start = clock();
        H.strassenMatrixk(&A, &B, 32);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        memoryStarssen = (double)A.getMemory() + (double)B.getMemory() + (double)H.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 6, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 15, memoryStarssen); //memoryStarssen

        // Opeartions
        // Time
        
        start = clock();
        I.strassenMatrixk(&A, &B, 64);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        memoryStarssen = (double)A.getMemory() + (double)B.getMemory() + (double)I.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 7, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 16, memoryStarssen); //memoryStarssen

        // Opeartions
        // Time
        
        start = clock();
        J.strassenMatrixk(&A, &B, 128);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        memoryStarssen = (double)A.getMemory() + (double)B.getMemory() + (double)J.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 8, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 17, memoryStarssen); //memoryStarssen

        // Opeartions
        // Time
        
        start = clock();
        K.strassenMatrixk(&A, &B, 256);
        stop = clock();
        timeTaken = stop - start;        

        //Space
        memoryStarssen = (double)A.getMemory() + (double)B.getMemory() + (double)K.getMemory();
        //Insert the simulation data into table
        dataTable.setData(count, 9, timeTaken/CLOCKS_PER_SEC); //timeTaken/CLOCKS_PER_SEC
        dataTable.setData(count, 18, memoryStarssen); //memoryStarssen

        matrixSize = matrixSize * 2;
        // //increase table size and count        
        // if(matrixSize < 100){
        //     matrixSize += 10;
        // } else if(matrixSize < 2000) {
        //     matrixSize += 100;
        // } else if(matrixSize < 5000){
        //     matrixSize += 500;
        // }
        count++;
    }
    dataTable.printMatrix();

    return 0;
}