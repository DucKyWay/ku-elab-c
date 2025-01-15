#include <stdio.h>
#include <stdlib.h>

struct account {
    int number;
    float balance;
};

struct customer {
    int national_id;
    struct account account;
};

struct person {
    int id;
    char name[15];
    float height;
    double weight;
};

int main() {
    int size = sizeof(struct person);
    printf("%d\n", size);
}


int account_customer() {
    struct customer mark = {
        99102, {1, 100.00}
    };

    printf("%d, %d, %.2f\n", mark.national_id, mark.account.number, mark.account.balance);

    struct customer bill;
    bill.national_id = 82375;
    bill.account.number = 2;
    bill.account.balance = 800.00;

    printf("%d, %d, %.2f\n", bill.national_id, bill.account.number, bill.account.balance);

    struct customer donald;
    donald.national_id = 14573;
    donald.account = {3 , 500.00};

    printf("%d, %d, %.2f\n", donald.national_id, donald.account.number, donald.account.balance);

    struct account julia_act = {4, 200.00};
    struct customer julia;
    julia.national_id = 2354635;
    julia.account = julia_act;
    
    printf("%d, %d, %.2f\n", julia.national_id, julia.account.number, julia.account.balance);

    return 0;
}
