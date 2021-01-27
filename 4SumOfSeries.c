/*  
This program will find the sum of Natural 
Number/Factorial of Number of all natural numbers from 1 to N.
*/

#include<stdio.h>
    
/*function to find factorial of the number*/
unsigned long factorial(int num)
{
	int i;
	/*always assign 1, if variable multiplies with values*/
	unsigned long fact=1;
	
	/*multiply num*num-1*num-2*..1*/
	for(i=num; i>=1; i--)
		fact= fact*i;
	
	/*return factorial*/
	return fact;
}

int main()
{   system("cls");
	int i,N;
	float sum;
	
	/*read value of N*/
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	/*set sum by 0*/
	sum=0.0f;
	
	/*calculate sum of the series*/
	for(i=1;i<=N;i++)
		sum = sum + ( (float)(i) / (float)(factorial(i)) );
	
	/*print the sum*/
	
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}
