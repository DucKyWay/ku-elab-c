#include <stdio.h>
#include <stdlib.h>

int main() {
    float salary, amount;
    float tax = 0;
    char salary_in[10];
    
    salary = atof(fgets(salary_in, sizeof(salary_in), stdin));
    if(salary < 0) { printf("Error: Salary must be greater or equal to 0"); }
    else { 
        if(salary <= 300000) { 
            tax += salary*0.05; 
        } 
        else if(salary > 300000) { 
            tax += 15000;
            tax += (salary-300000)*0.1; 
        }
        printf("%.2f", tax);
    }

    return 0;
}