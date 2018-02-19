#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],s2[100];
int n1,n2;
scanf("%s",s1);
scanf("%s",s2);
n1=strlen(s1);
n2=strlen(s2);
if(n1>n2)
{
	printf("%s\n",s1);
}
else if(n1<n2)
{
	printf("%s\n",s2);
}
else
{
	printf("%s\n",s2);
}
return 0;
}
