#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,count=0;
	printf("enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
		num/=10;
		++count;
		
	}
	printf("the total number digits in the given integer is %d",count);
	

	return 0;
}
