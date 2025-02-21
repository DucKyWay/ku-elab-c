#include <iostream>
using namespace std;

int main() {
    int amount, last = 0;
    cin >> amount;

    int *prisoner = malloc(sizeof(int) * amount);
    for(int i = 0; i < amount; i++) {
        cin >> prisoner[i];
        if(last < prisoner[i])
            last = prisoner[i];
    }

    return ;
}o9