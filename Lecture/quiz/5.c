#include <stdio.h>

// int main() {
//     char ans = 'y';
//     int cnt, score = 0;

//     cnt = 0;
//     if(ans == 'y') 
//         int score = 1;
//     else 
//         int score = 0;

//     cnt += score; 
//     printf("%d", cnt);
// }

// int main() {
//     short buf[] = {21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
//                32, 35, 36, 37, 38, 39, 42, 46, 47, 48};
//     int l, m = 0, n = 19;

//     do {
//         l = m;
//         l += n;
//         l /= 2;  

//         if (buf[l] == 44) 
//             break;
//         else if (buf[l] > 44)
//             n = --l;  
//         else 
//             m = ++l;  
        
//         putchar('*');
//     } while (m <= n);

// }

int bar(char buf[], int x, int a, int b) {
    int c;

    if (a > b)
        return -1;

    c = (a + b) / 2;

    if (x == buf[c])
        return c;

    else
        return (x > buf[c]) ? bar(buf, x, a, c - 1) : bar(buf, x, c + 1, b);
}

int main() {
    char w[] = {96, 94, 91, 86, 81, 75, 72, 66, 60, 58, 46, 43, 39, 32, 27, 13};

    printf("%d", bar(w, 46, 0, 15));;
}