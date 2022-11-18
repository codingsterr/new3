#include<stdio.h>
#include<conio.h>
void main()
{
    int a[500],i,n,j;
    printf("Enter the limit");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
           { 
             a[j]=0;
           }
        }
    }
    printf("Elements of array after removing the duplicates are:- ");
    for(i=0;i<n;i++)
    { if(a[i]!=0)
      printf("%5d",a[i]);
    }
}