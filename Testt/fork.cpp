#include<stdio.h>
#include<sys/types.h>

void main(){
    
    int num = fork();

    if (num == 0) 
        fork(); 

    else  
        printf ("Reached here! \n");

    printf ("Hello! \n"); 
}