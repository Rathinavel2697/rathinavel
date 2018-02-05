#include<stdio.h>
int main()
{
  int min,hr,n;
  printf("\n Enter the minutes=");
  scanf("%d",&n);
  min=n/60;
  hr=n%60;
  printf("\n time=%d:%d",min,hr);
  return 0;
}
