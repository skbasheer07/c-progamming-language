#include<stdio.h>
main()
{char s;
printf("enter character=");
scanf("%c",&s);
if((s>'a' && s<'z')||(s>='A' && s<='Z'))
printf("%c is alphabet",s);
else 
{printf("%c is not alphabet",s);
}
 }
