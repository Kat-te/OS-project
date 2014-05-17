#include <iostream>

#include "config.h"

using namespace std;

int main()
{
    ifstream vec("vector.txt");
    ifstream mtx("matrix.txt");

    try{
        Matrix mtrx(mtx);
        cout << " -------------\n";
        cout << "A: \n";
        mtrx.show();
        cout << endl;
        Vector vect(vec);
        cout << "b: \n";
        vect.show();
        cout << " --------------\n";
    }

    catch( InvalidVectorKey e ){
        cout << e.getInfo();
    }




    return 0;
}
