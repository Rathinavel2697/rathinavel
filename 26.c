#include<stdio.h>
int main()
{
char a;
scanf("%s",&a);
if((a>='0')&&(a<='9'))
{
	printf(" it is numeric:\n",a);
}
else
{
	printf(" it is not numeric:\n",a);
}
return 0;
}
