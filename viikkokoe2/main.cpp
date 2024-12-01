#ifndef MYCLASS_H
#define MYCLASS_H
#include <string>

using namespace std;

class myClass {
private:
    string privateTextToPrint;
    void privateFunction();
protected:
    string protectedTestToPrint;
    void protectedFunction();
public:
    string publicTextToPrint;
    myClass();
    ~myClass();

    void publicFunction();
};

#endif
