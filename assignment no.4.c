#include <stdio.h>
#include <stdlib.h>

int main()
{
char ch;
printf("enter a character");
scanf("%c",&ch);

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u')
{
	printf("%c is a vowel",ch);
	
}
else{
	printf("%c is not a vowel");
	

	}
	


	return 0;
}
