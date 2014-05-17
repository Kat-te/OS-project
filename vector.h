#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <iostream>

#include "config.h"

class Vector{
public:
    Vector(){}
    Vector( int _n ){
        // -------------------------------
        n = _n;
        vect = new double[n];
        // -------------------------------
    }
    Vector( istream &in ){
        // -------------------------------
        in >> n;
        cout << n << endl;
        vect = new double[n];
        int i=0;
        for(i; i<n;i++ ){
            in >> vect[i];
        }
        // -------------------------------
    }

    ~Vector(){
        delete[]vect;
    }

    void show( void ){
        // -------------------------------
        for( int i=0; i<n;i++)
            cout << vect[i] << " ";
        cout << endl;
        // -------------------------------
    }

    double operator[]( int i ){
        // -------------------------------
        if( i >=0 && i < n )
            return vect[i];
        else
            throw InvalidVectorKey();
        // -------------------------------
    }

protected:
    int n;
    double *vect;
};


#endif // VECTOR_H_INCLUDED


