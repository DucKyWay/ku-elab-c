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

    gcd = mc % nc;
    while (gcd > 0) {
        mc = nc;
        nc = gcd;
        gcd = mc % nc;
    }
    lcm = (m / nc) * n;

    if(n/nc != 1) 
        printf("= %lld/%lld", m/nc, n/nc);
    else
        printf("= %lld", m/nc);

    return 0;
}