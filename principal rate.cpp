#include<stdio.h>
int main() {
	float principal, rate, time, simpleInterest;
	
	printf("Enter Principal Ammount: \n");
	scanf("%f", &principal);
	
	printf("Enter rate: \n");
	scanf("%f", &rate);
	
	printf("Enter time: \n");
	scanf("%f", &time);
	
	simpleInterest= (principal*rate*time)/100;
	
	printf("Simple Interest is : ", simpleInterest);
	
	return 0;
	
}