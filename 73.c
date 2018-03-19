#include <stdio.h>

int main(void) {
	int n,l,r;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf(" enter the left and right side number:\n");
	scanf("%d%d",&l,&r);
	if(l<n && r>n)
	{
		printf("yes\n");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
