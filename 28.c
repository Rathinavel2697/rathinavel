#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,n;
  printf("\n Enter the minutes=");
  scanf("%d",&n);
  a=n/60;
  b=n%60;
  printf("\n time=%d:%d",a,b);
  getch();
}
