//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
 if(n>=0){
     if(n==0){
    printf("n is zero");
     }
         else{
             printf("n is positive");
         }
     }
    elseif(n<0){
      printf("n is negative number");  
    }
 return 0;

}

