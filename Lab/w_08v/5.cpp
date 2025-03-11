#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr, long *minSum, long &maxSum) {
    sort(arr.begin(), arr.end());
    
    long totalSum = 0;
    
    for (int i = 0; i < 5; i++) {
        totalSum += arr[i];
    }

    *minSum = totalSum - arr[4];
    maxSum = totalSum - arr[0];
}

int main() {
    int n = 5;
    long min, max;
    vector<int> ar;

    for (int i = 0; i < n; ++i) {
        long temp;
        cin >> temp;
        ar.push_back(temp);
    }

    miniMaxSum(ar, &min, max);
    cout << min << " " << max << endl;
    return 0;
}