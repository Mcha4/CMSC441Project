#include "matrix.h"

matrix::matrix(){
    rows = 0;
    cols = 0;

    data = new double*[rows];
    for(int i = 0; i < rows; i++){
        data[i] = new double[cols];
    }

    memoryUsage = 0;
}

matrix::matrix(int row, int col){
    rows = row;
    cols = col;

    data = new double*[rows];
    for(int i = 0; i < rows; i++){
        data[i] = new double[cols];
    }

    memoryUsage = rows * cols * sizeof(int);
}

matrix::~matrix(){
    if(data != nullptr){
        for(int i = 0; i < rows; i++){
            delete[] data[i];
        }
        delete[] data;
    }
}

int matrix::getRows(){
    return rows;
}
int matrix::getCols(){
    return cols;
}
double** matrix::getData(){
    return data;
}
int matrix::getMemory(){
    return memoryUsage;
}

void matrix::setData(int row, int col, double input){
    data[row][col] = input;
}


void matrix::generateRandomMatrix(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            data[i][j] = rand() % 10;
        }
    }
}

matrix* matrix::addMatrix(matrix* A, matrix* B){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            data[i][j] = A->data[i][j] + B->data[i][j];
        }
    }
    return this;
}


matrix* matrix::subMatrix(matrix* A, matrix* B){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            data[i][j] = A->data[i][j] - B->data[i][j];
        }
    }
    return this;
}

matrix* matrix::basicMatrix(matrix* A, matrix* B){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            for(int k = 0; k < cols; k++){
                data[i][j] = data[i][j] + A->data[i][k] * B->data[k][j];
            }
        }
    }
    return this;
}

matrix* matrix::strassenMatrix(matrix* A, matrix* B){
    if(A->getRows() > 2){
        int matrixSize = A->getRows()/2;
        matrix A11(matrixSize, matrixSize), A12(matrixSize, matrixSize);
        matrix A21(matrixSize, matrixSize), A22(matrixSize, matrixSize);
        matrix B11(matrixSize, matrixSize), B12(matrixSize, matrixSize);
        matrix B21(matrixSize, matrixSize), B22(matrixSize, matrixSize);
        matrix C11(matrixSize, matrixSize), C12(matrixSize, matrixSize);
        matrix C21(matrixSize, matrixSize), C22(matrixSize, matrixSize);

        matrix M1(matrixSize, matrixSize);
        matrix M2(matrixSize, matrixSize);
        matrix M3(matrixSize, matrixSize);
        matrix M4(matrixSize, matrixSize);
        matrix M5(matrixSize, matrixSize);
        matrix M6(matrixSize, matrixSize);
        matrix M7(matrixSize, matrixSize);
        
        for(int i = 0; i < matrixSize; i++){
            for(int j = 0; j < matrixSize; j++) {
                A11.data[i][j] = A->data[i][j];
                A12.data[i][j] = A->data[i][matrixSize+j];
                A21.data[i][j] = A->data[matrixSize+i][j];
                A22.data[i][j] = A->data[matrixSize+i][matrixSize+j];
                B11.data[i][j] = B->data[i][j];
                B12.data[i][j] = B->data[i][matrixSize+j];
                B21.data[i][j] = B->data[matrixSize+i][j];
                B22.data[i][j] = B->data[matrixSize+i][matrixSize+j];
            }
        }

        matrix temp1(matrixSize, matrixSize);
        matrix temp2(matrixSize, matrixSize);

        M1.strassenMatrix(temp1.addMatrix(&A11, &A22), temp2.addMatrix(&B11, &B22));
        M2.strassenMatrix(temp1.addMatrix(&A11, &A22), &B11);
        M3.strassenMatrix(&A11, temp2.subMatrix(&B12, &B22));
        M4.strassenMatrix(&A22, temp2.subMatrix(&B21, &B11));        
        M5.strassenMatrix(temp1.addMatrix(&A11, &A12), &B22);
        M6.strassenMatrix(temp1.subMatrix(&A21, &A11), temp2.addMatrix(&B11, &B12));
        M7.strassenMatrix(temp1.subMatrix(&A12, &A22), temp2.addMatrix(&B21, &B22));

        memoryUsage += M1.getMemory() + M2.getMemory() + M3.getMemory() + M4.getMemory() + M5.getMemory() + M6.getMemory() + M7.getMemory();

        C11.subMatrix(temp1.addMatrix(&M1, &M4), temp2.addMatrix(&M5, &M7));
            C12.addMatrix(&M3, &M5);
            C21.addMatrix(&M2, &M4);
            C22.addMatrix(temp1.subMatrix(&M1, &M2), temp2.addMatrix(&M3, &M6));

        for(int i=0; i< matrixSize; i++){
            for(int j=0; j< matrixSize; j++) {
                data[i][j] = C11.data[i][j];
                data[i][j+matrixSize] = C12.data[i][j];
                data[matrixSize+i][j] = C21.data[i][j];
                data[matrixSize+i][matrixSize+j] = C22.data[i][j];
            }
        }
        basicMatrix(A, B);
    }
    return this;
}

matrix* matrix::strassenMatrixk(matrix* A, matrix* B, int k ){
    if(A->getRows() > k){
        int matrixSize = A->getRows()/2;

        matrix A11(matrixSize, matrixSize), A12(matrixSize, matrixSize);
        matrix A21(matrixSize, matrixSize), A22(matrixSize, matrixSize);

        matrix B11(matrixSize, matrixSize), B12(matrixSize, matrixSize);
        matrix B21(matrixSize, matrixSize), B22(matrixSize, matrixSize);

        matrix C11(matrixSize, matrixSize), C12(matrixSize, matrixSize);
        matrix C21(matrixSize, matrixSize), C22(matrixSize, matrixSize);

        matrix M1(matrixSize, matrixSize);
        matrix M2(matrixSize, matrixSize);
        matrix M3(matrixSize, matrixSize);
        matrix M4(matrixSize, matrixSize);
        matrix M5(matrixSize, matrixSize);
        matrix M6(matrixSize, matrixSize);
        matrix M7(matrixSize, matrixSize);
        
        for(int i = 0; i < matrixSize; i++){
            for(int j = 0; j < matrixSize; j++) {
                A11.data[i][j] = A->data[i][j];
                A12.data[i][j] = A->data[i][matrixSize+j];
                A21.data[i][j] = A->data[matrixSize+i][j];
                A22.data[i][j] = A->data[matrixSize+i][matrixSize+j];
                B11.data[i][j] = B->data[i][j];
                B12.data[i][j] = B->data[i][matrixSize+j];
                B21.data[i][j] = B->data[matrixSize+i][j];
                B22.data[i][j] = B->data[matrixSize+i][matrixSize+j];
            }
        }

        matrix temp1(matrixSize, matrixSize);
        matrix temp2(matrixSize, matrixSize);

        M1.strassenMatrixk(temp1.addMatrix(&A11, &A22), temp2.addMatrix(&B11, &B22), k);
        M2.strassenMatrixk(temp1.addMatrix(&A11, &A22), &B11, k);
        M3.strassenMatrixk(&A11, temp2.subMatrix(&B12, &B22), k);
        M4.strassenMatrixk(&A22, temp2.subMatrix(&B21, &B11), k);        
        M5.strassenMatrixk(temp1.addMatrix(&A11, &A12), &B22, k);
        M6.strassenMatrixk(temp1.subMatrix(&A21, &A11), temp2.addMatrix(&B11, &B12), k);
        M7.strassenMatrixk(temp1.subMatrix(&A12, &A22), temp2.addMatrix(&B21, &B22), k);

        memoryUsage += M1.getMemory() + M2.getMemory() + M3.getMemory() + M4.getMemory() + M5.getMemory() + M6.getMemory() + M7.getMemory();

        C11.subMatrix(temp1.addMatrix(&M1, &M4), temp2.addMatrix(&M5, &M7));
        C12.addMatrix(&M3, &M5);
        C21.addMatrix(&M2, &M4);
        C22.addMatrix(temp1.subMatrix(&M1, &M2), temp2.addMatrix(&M3, &M6));

        for(int i=0; i< matrixSize; i++){
            for(int j=0; j< matrixSize; j++) {
                data[i][j] = C11.data[i][j];
                data[i][j+matrixSize] = C12.data[i][j];
                data[matrixSize+i][j] = C21.data[i][j];
                data[matrixSize+i][matrixSize+j] = C22.data[i][j];
            }
        }
    } else {
        basicMatrix(A, B);
    }
    return this;
}

void matrix::printMatrix(){

    if(rows == cols){
        cout << "Matrix" << endl << endl;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "| " << "Size" << "| " << "BasicTime(s)" << "| " << "StarssenTime(s)" << "| " << "BasicM(bytes)" << "| " << "StarssenM(bytes)" << " | " << endl;
        cout << "| -: | -: | -: | -: | -: |" << endl;
        //cout << setw(6) << "Size" << setw(16) << "BasicT" << setw(16) << "StarssenT" << setw(16) << "BasicM" << setw(16) << "StarssenM" << endl;
        for(int i = 0; i < rows; i++){
            cout << "| " << data[i][0];
            cout << "| " << data[i][1];
            cout << "| " << data[i][2];
            cout << "| " << data[i][3];
            cout << "| " << data[i][4] << "| " << endl;
        }

    }
}