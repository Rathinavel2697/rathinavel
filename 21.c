#include<stdio.h>
int main()
{
    int n,a,d,s=0;
    scanf("%d %d %d",&n,&a,&d);
    s=n*(2*a+(n-1)*d);
    s=s/2;
    printf("%d",s);
    return 0;
}
