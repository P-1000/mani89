#include<stdio.h>
int main(){
  //Write a script that accepts two command line arguments and displays their sum.
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  printf("Sum of %d and %d is %d\n",a,b,a+b);
  return 0;
}
