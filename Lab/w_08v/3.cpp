#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {

    int res = 0, res_r = 0;
    for(int i = 0; i < arr.size(); i++) {
        res += arr[i][i];
        res_r += arr[i][arr.size() - 1 - i];
    }
    return (res > res_r) ? (res - res_r) : (res_r - res); 
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i].resize(n);
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    int result = diagonalDifference(arr);
    cout << result << endl;
    return 0;
}