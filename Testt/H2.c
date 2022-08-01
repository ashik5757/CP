#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    
    float p,q,r,s;

    printf("Enter four float numbers : ");
    scanf("%f%f%f%f",&p,&q,&r,&s);

    if(p<=0 || q<=0 || r<=0 || s<=0)
        printf("All inputs are not positive \n");

    
    else if((p*p)<=r)
        printf("All inputs are positive but P2>/R \n");

    else if((p*p)>r) {
        
        float result = (pow(q,3)+(sqrt(r)*M_PI*p*q)-(4.5*s)) / (p-(3*q));

        printf("All inputs are positive but P2>R \n");
        printf("Output = %.2f \n", result);
    }
        
        

    system("pause");
    return 0;

}