#include <iostream>
using namespace std;

class People {
public:
    People(char *name, int age) : name(name), age(age) {}
    void display() {
        cout << name <<" "<< age << endl;
    }
private:
    char *name;
    int age;
};
    return 0;
}
