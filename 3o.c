#include <stdio.h>
int main()
{
int hr1,hr2,m1,m2,a,b,c,e,d;
printf("Input\n");
scanf("%d %d\n",&hr1 ,&m1);
scanf("%d %d",&hr2 ,&m2);
printf("%d %d\n%d %d\n",hr1,m1,hr2,m2);
a=(hr1*60+m1);
b=(hr2*60+m2);
d=a-b;
c=(d % 60);
e=(d / 60);
printf("output\n %d %d",e,c);
	return 0;
}
