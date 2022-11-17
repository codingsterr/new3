#include<stdio.h>
#include<conio.h>
void main()
{
    int a[500],i,n,j,temp[500],m=0;
    printf("Enter the limit");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]!=a[j])
           { temp[m]=a[i];
            m++;
           }
        }
    }
    for(i=0;i<m;i++)
    printf("%d",temp[i]);
}