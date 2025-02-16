#include <stdio.h>

struct complex {
    float real;
    float imagine;
};

 add_complex(struct complex c, struct complex d) {

}

 multiply_complex(struct complex c, struct complex d) {

}

void print_complex(struct complex c, struct complex d) {

}

int main() {

    struct complex C, D;

  printf("Enter C: ");
  scanf("%f %f", &C.real, &C.imagine);

    printf("Enter D: ");
    scanf("%f %f", &D.real, &D.imagine);

  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}
