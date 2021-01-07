#include <stdio.h>
void main()
{
    int i,n,a[10],max,min,mid;
    printf("Enter an array of ten elements\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter any number\n");
    scanf("%d",&n);
    max=9;
    min=0;
    mid=(max+min)/2;
    while(max>=min)
    {

        if(a[mid]==n)
        {
            printf("The number is found at position %d",mid+1);
            break;
        }
        else if(a[mid]>n)
        {
            max=mid-1;
            mid=(max+min)/2;
        }
        else
        {
            min=mid+1;
            mid=(max+min)/2;
        }
    }
        if(max<min)
        {
            printf("The number is not found\n");
        }

}
