#include <stdio.h>

int main() {
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;
    
    // requiredGrade = (preGrede + gpa) / (preCredit + credit)
    // requiredGrade * (preCredit + credit) = preGrade + gpa
    // requiredGrade * (preCredit + credit) - preGrade = gpa
    float credits = preCredit + credit;
    float gpa = requiredGrade * (preCredit + credit) - preGrade;
    printf("The GPA this semester should be %.2f", gpa);
    return 0;
}