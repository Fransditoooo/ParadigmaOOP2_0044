#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class";
    }
};

class darivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya Function dari base class";
    }
};

int main() {
    darivedClass a;


    a.perkenalan();

    return 0;
}