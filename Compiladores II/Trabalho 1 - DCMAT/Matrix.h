#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
    public:
        Matrix(char *matrix);

        char *asString(int float_precision);

        float determinant();

        char *linearSystem();

        Matrix add(Matrix m2);

        Matrix sub(Matrix m2);

        Matrix mul(Matrix m2);

        Matrix mul(float num);

        ~Matrix();
    
    private:
        int lines, cols;
        char ***matrix;

        char ***createMatrix(char *matrix);

        void formatMatrix(int float_precision);
};

#endif