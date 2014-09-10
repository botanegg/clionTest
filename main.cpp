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


int main() {
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