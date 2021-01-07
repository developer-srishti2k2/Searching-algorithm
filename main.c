#include <stdio.h>
void main()
{
    int i,a[10],n,b=1;
    printf("Enter an array of ten elements\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        if(a[i]==n)
        {
            i=i+1;
            b=0;
            printf("The element is found at position %d\n",i);
        }
    }
    if(b==1)
    {
        printf("the element is not found\n");
    }
}
