#include <iostream>
using namespace std;

int main() {
    char name[50];
    double salary, sold;
    char buf[100];

    cin >> name >> salary;
    salary *= 12;
    for(int i = 0; i < 12; i++) {
        cin >> sold;
        salary += (sold * 0.15);
    }

    sprintf(buf, "%s %.2f",name , salary);
    cout << buf;

    return 0;
}