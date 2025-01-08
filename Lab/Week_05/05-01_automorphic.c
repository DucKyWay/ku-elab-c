#include <stdio.h>
#include <stdlib.h>

int check(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count += 1;
    }
    return count;
}

int main() {    

    long long int num, result;
    long long int h_num, h_result;
    int len_num;

    printf("Input n = "); scanf("%lld", &num);
    len_num = check(num);

    result = num * num;

    h_num = num; h_result = result;

    printf("n^2 = %lld\n", h_result);
    for (int i = 0; i < len_num; i++) {

        if (h_num % 10 == h_result % 10) {
            h_num /= 10;
            h_result /= 10;
        } else {
            printf("No. %d is not automorphic number.", num);
            break; 
        }
        if(i == len_num - 1) printf("Yes. %d is automorphic number.", num); 
    }
    
    return 0;
}
