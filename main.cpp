#include <iostream>

#include "staticClazz.h"

using namespace std;

class Clazz {
private:
    int intValue;

public: // additional block created after CLion generation getter/setter
    int getIntValue() const {
        return intValue;
    }

    void setIntValue(int intValue) {
        Clazz::intValue = intValue;
    }

public: // additional block created after CLion generation constructor
    Clazz(int intValue) : intValue(intValue) {
    }

public:

    bool operator<(const Clazz &other) const {
        return this->intValue < other.intValue;
    }

    bool operator>=(const Clazz &other) const {
        return !(*this < other); //wrong OCSimplifyInspection
    }

};

//преобразует строковый код языка или страны в числовой; возвращает 0 в случае ошибки
int ConvertISOLangCode(const char *code) {
    union {
        char s[4];
        int c;
    };
    c = 0;
    unsigned i;
    for (i = 0; *code; i++) {
        if (i == 3)
            return 0;
        s[i] = tolower(*code++);
    }
    return i > 1 ? c : 0;
}


int main() {

    cout << "langcode" << endl;
    cout << ConvertISOLangCode("en") << endl;
    cout << ConvertISOLangCode("ru") << endl << endl;

    Clazz a(1);
    Clazz b(2);

    staticClazz sa0;
    staticClazz sa1;

    cout << "sa0 " << sa0.getA() << endl;
    cout << "sa1 " << sa1.getA() << endl;
    cout << endl;

    int i = 0;
    int brk = 10;
    for(;;) {
        if (brk) { //change this expression leads to a change in the inspection below (e.g. "if (true)" )
            if(i == 0) { // inspection depends of the level of nesting
                cout << "i==0 is " << ((i == 0) ? "true" : "false") << endl; //it inspection works true i think
            }
        }
        ++i;
        if (i > brk) break;
        cout << i << endl;
    }

    cout << (a >= b) << endl;
    cout << Clazz(42).getIntValue() << endl;
    return 0;
}