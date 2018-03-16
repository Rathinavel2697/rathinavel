#include<stdio.h>
#include<string.h>
int main(void)
{
	int a=0,l,i;
	char n[100];
	scanf("%[^\n]s",n);
	l=strlen(n);
	for(i=0;n[i]!='\0';i++)
	{
	if(n[i]==n[l-i-1])
	{
		a++;
	}
	}
	if(a==0)
	
	{
		printf(" not a palindrome\n");
	}
	else
	{
		printf(" palindrome\n");
	}
	return 0;
	}
