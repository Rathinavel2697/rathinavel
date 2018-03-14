#include<stdio.h>
int main()
{
	int i,count=1;
	char ch[50];
	scanf("%[^/n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ' )
		{
			count++;
			
		}
	}
	printf("%d",count);
	return 0;
}
