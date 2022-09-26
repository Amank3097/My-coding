#include<stdio.h>
#include<conio.h>

int main()
{
	char opt;
	int n1,n2;
	float res;
	printf("Choose the operator (+,-,*,/) \n Calculator:");
	scanf("%c",&opt);
	
	if(opt=='/')
	{
		printf("You have selected:Division");
	}
	else if(opt=='*')
	{
		printf("You have selected :Multiplication");
	}
	else if(opt=='-')
	{
		printf("You have selected :Subtraction");
	}
	else if(opt=='+')
	{
		printf("You have selected :Addition");
	}
	printf("\nEnter the first Number: ");
	scanf("%d",&n1);
	printf("\nEnter The second Number:");
	scanf("%d",&n2);
	
	switch(opt)
	{
		case'+':
		res=n1+n2;
		printf("Addition of %d and %d is:%.2f",n1,n2,res);
		break;
		
		case'-':
		res=n1-n2;
		printf("Subtraction of %d and %d is:%.2f",n1,n2,res);
		break;
		
		case'*':
		res=n1*n2;
		printf("Multiplication of %d and %d is:%.2f",n1,n2,res);
		break;
		
		case'/':
		if(n2==0)
		{
			printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);  
		}
		res=n1/n2;
		printf("division of %d and %d is:%.2f",n1,n2,res);
		break;
		
		default:
			printf("Something is wrong.....................");
	}
	return 0;
}
