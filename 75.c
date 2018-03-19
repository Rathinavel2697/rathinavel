#include <stdio.h>
#include<string.h>

int main(void) {
	char s[100];
	int n;
	scanf("%s",s);
	n=strlen(s);
	if(n%2==0)
	{
	s[n/2]='*';
	s[(n/2)-1]='*';
	}
	else
	{
		s[n/2]='*';
	}
	printf("%s\n",s);
	
	return 0;
}
