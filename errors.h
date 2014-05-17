#ifndef ERRORS_H_INCLUDED
#define ERRORS_H_INCLUDED

class InvalidVectorKey{
public:
    InvalidVectorKey(){}
    char *getInfo(){
        return "Vector element doesn't exists.\n";
    }
};


class IncorrectDataFile{
public:
    IncorrectDataFile(){}
    char *getInfo(){
        return "Incorrect datafile\n";
    }

};

#endif // ERRORS_H_INCLUDED
