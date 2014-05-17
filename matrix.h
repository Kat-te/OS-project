#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <iostream>


class Matrix{
public:
    Matrix();
    Matrix( int a, int b ){
        // -------------------------------
        n = a;
        m = b;
        matrix = new double*[n];
        for( int i=0;i<m;i++ )
            matrix[i] = new double[m];
        // -------------------------------
    }
    Matrix( std::istream &in ){
        // -------------------------------
        in >> n >> m;

        matrix = new double*[n];
        for( int i=0; i<n; i++ )
            matrix[i] = new double[m];

        for( int i=0; i<n; i++ ){
            for(int j=0; j<m; j++)
                in >> matrix[i][j];
        }

        // -------------------------------
    }

    void show( void ){
        //--------------------------------
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
        // --------------------------------
    }
    ~Matrix(){
        for(int i=0;i<m;i++)
            delete [] matrix[i];
        delete [] matrix;

    }
protected:
    double **matrix;
    int n,m;
};







#endif // MATRIX_H_INCLUDED
