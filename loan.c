#include<stdio.h>
int main() {
  int age;
  double income;
  printf("enter users age:\n");
  scanf("%d",&age);
  printf("enter users annual income:\n");
  scanf("%f",&income);
  if (age>=21 && income>=21000)
  
  {printf("congratulations you have qualified for a loan.\n");} else
  {printf("unfortunately,we are unable to offer you a loan at this time.\n");}
  return 0;
  }