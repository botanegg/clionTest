#include <iostream>

using namespace std;

class Clazz {
private:
    int intValue;

public:

    bool operator<(const Clazz &other) const {
        return this->intValue < other.intValue;
    }

    bool operator>=(const Clazz &other) const {
        return !(*this < other); //wrong OCSimplifyInspection
    }

};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}