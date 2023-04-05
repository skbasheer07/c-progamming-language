#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("%d is a positive number ",num);
		
	}
	
	else if(num<0)
	{
		printf("%d is a negative number",num);
		
		
	}
	else {
		printf("the number is zero");
		
	}
	return 0;
}
