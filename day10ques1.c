//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter a\n");
    printf("enter b\n");
    printf("enter c\n");
    scanf("%f",&a);\
      scanf("%f",&b);
        scanf("%f",&c);
if((a+b>c) && (a+c>b) && (b+c>a)){
  if(a==b && b==c){
    printf("equilateral triangle");
 }
 else if(a==b || b==c ||a==c){
    printf("isoceles triangle");
 }
 else{
    printf("scalene triangle");
 }
 return 0;
}
}
