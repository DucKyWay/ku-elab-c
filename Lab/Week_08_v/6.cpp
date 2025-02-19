#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int count = 1;
    int maxH = candles[0];
    
    for (int i = 1; i < candles.size(); i++) {
        if (candles[i] > maxH) {
            maxH = candles[i];
            count = 1;
        } else if (candles[i] == maxH) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    int result = birthdayCakeCandles(ar);
    cout << result << endl;
    return 0;
}