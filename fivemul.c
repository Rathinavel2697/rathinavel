#include<stdio.h>
int main()
{
                int a,i;
               
                printf("\n Enter a integer number");
                scanf("%d",&a);
                for(i=1;i<=5;i++)
                {
                               printf("\a%d * %d = %d ",a,i,a*i);
                 }
             return 0;
}
