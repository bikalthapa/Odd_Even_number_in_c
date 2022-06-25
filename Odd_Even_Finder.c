#include<stdio.h>
int main(){
	// A program to find odd and even numbers
	int input;
	
	// Inputs and Outputs
	printf("A Program to Find Odd and Even Numbers \n");
	printf("Enter The Number To Test Odd And Even : ");
	scanf("%d",&input);
	
	int equation = input % 2;
	if(equation==0){
		printf("You Enter %d and it is even number",input);
	}else{
		printf("You Enter %d and it is odd number",input);
	};
	return(0);
}
