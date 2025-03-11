#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>
using namespace std;

void signedRatio(vector<int> arr) {

    double a = 0, b = 0, c = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > 0) a++;
        else if(arr[i] < 0) b++;
        else if(arr[i] == 0) c++;
    }
    
    printf("%6f\n%6f\n%6f", a/arr.size(), b/arr.size(), c/arr.size());
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

    signedRatio(ar);
    return 0;
}
