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
	if(n[i]>='a'||n[i]>='e'||n[i]>='i'||n[i]>='o'||n[i]>='u'||n[i]>='A'||n[i]>='E'||n[i]>='I'||n[i]>='O'||n[i]>='U')
	{
		a++;
	}
	}
	if(a==0)
	
	{
		printf(" not vowel\n");
	}
	else
	{
		printf(" vowel\n");
	}
	return 0;
	}
