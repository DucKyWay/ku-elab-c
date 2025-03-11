#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {

    int amount, last = 0;
    cin >> amount;

    vector<int> prisoner(amount);
    for(int i = 0; i < amount; i++) {
        cin >> prisoner[i];
        if(last < prisoner[i])
            last = prisoner[i];
    }

    vector<int> check(last + 1, 0);
    for(int i = 0; i < amount; i++) {  
        if (prisoner[i] <= last) {
            check[prisoner[i]] = 1;
        }
    }

    for(int i = 1; i <= last; i++) { // เลขคี่
        if(check[i] == 0 && (i % 2 != 0)) {
            cout << i << " ";
        }
    }
    cout << "\n";

    for(int i = 1; i <= last; i++) { // เลขคู่
        if(check[i] == 0 && (i % 2 == 0)) {
            cout << i << " ";
        }
    }

    return 0;
}
