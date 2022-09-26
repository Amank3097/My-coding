#include<stdio.h>
#include<conio.h>

int main()
{
	int num,sum=0,ans,i;
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		ans=num%i;
		if(ans==0)
		{
			sum=sum+i;
		}
	}
		if(sum==num)
		
			printf("%d  It is a perfect number",num);
		
		else
		
			printf("%d It is not a perfect number",num);
			
		
	}
	

