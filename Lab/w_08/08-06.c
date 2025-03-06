#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex add_complex(struct complex c, struct complex d) {
    struct complex e;
    e.real = c.real + d.real;
    e.imag = c.imag + d.imag;
    return e;
}

struct complex multiply_complex(struct complex c, struct complex d) {
    struct complex f;
    f.real = c.real * d.real - c.imag * d.imag; // ac - bd
    f.imag = c.real * d.imag + c.imag * d.real; // ad + bc
    return f;
}

/*
C: 1.0 2.0 
D: 2 3 
(+) = 3.0 + 5.0i
(x) = -4.0 + 7.0i

C: 0 2 
D: 0 3 
(+) = 5.0i
(x) = -6.0

C: 1 2 
D: 0 -3 
(+) = 1.0 - 1.0i
(x) = 6.0 - 3.0i
*/

void print_complex(const char* c, struct complex cp) {
    printf("%s", c);
    if (cp.real == 0 && cp.imag == 0) {
        printf("0.0\n");
    } else if (cp.real == 0) {
        printf("%.1fi\n", cp.imag);
    } else if (cp.imag == 0) {
        printf("%.1f\n", cp.real);
    } else if (cp.imag > 0) {
        printf("%.1f + %.1fi\n", cp.real, cp.imag);
    } else {
        printf("%.1f - %.1fi\n", cp.real, -cp.imag);
    }
}

int main() {

    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.real, &C.imag);
    printf("Enter D: ");
    scanf("%f %f", &D.real, &D.imag);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}