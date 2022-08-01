#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    
    char name[30];
    int basic;
    int con_allwnc;
    int bon_per;
    int loan_det;

    printf("\nName : ");
    scanf("%s", &name);
    printf("\nBasic : ");
    scanf("%d", &basic);
    printf("\nConveyance Allowance : ");
    scanf("%d", &con_allwnc);
    printf("\nBonus Percentage : ");
    scanf("%d", &bon_per);
    printf("\nLoan Amount : ");
    scanf("%d", &loan_det);


    double salary;

    salary = basic + (basic*con_allwnc/100.0) + (basic*bon_per/100.0) - loan_det;

    printf("\n\n Name : %s", name);
    printf("\n Basic : %d", basic);
    printf("\n Salary : %.2lf", salary);


    printf("\n\n");
        

    system("pause");
    return 0;

}