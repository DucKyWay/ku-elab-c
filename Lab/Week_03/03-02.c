#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

int main() {
    long long int m, n;
    char m_in[100], n_in[100];
    long long int gcd = 0, lcm = 0, mc, nc;
    
    m = atoll(fgets(m_in, 100, stdin));
    n = atoll(fgets(n_in, 100, stdin));
    mc = m, nc = n; 
    // printf("%d, %d, %d, %d\n", mc,  nc, gcd, lcm);
    
    gcd = mc % nc;
    while (gcd > 0) {
        mc = nc;
        nc = gcd;
        gcd = mc % nc;
        // printf("%d, %d, %d, %d\n", mc, nc, gcd, lcm);
    }
    lcm = (m / nc) * n;

    printf("GCD: %lld\n", nc);
    printf("LCM: %lld", lcm);

    return 0;
}