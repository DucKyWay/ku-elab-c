#include <iostream>
using namespace std;

int main() {

    int num, count = 0;
    cin >> num;
    while(1) {
        if(num == 0) {
            cout << count << endl;
            return 0;
        }
        else if(num % 2 != 0) {
            num -= 1;
            count++;
        }
        else if(num % 2 == 0) {
            num /= 2;
            count++;
        }
    }
}