// Linear and Binary Search of the elements given by user
#include<stdio.h>
#include<stdlib.h>
int linear(int key,int n,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        return i+1;
    }
    return 0;
}
int binary(int key,int a[],int low,int high)
{
    int mid;
    if (low>high)
    return 0;
    mid=(low+high)/2;
    if(key==a[mid])
        return mid+1;
    if(key<a[mid])
        return binary(key,a,low,mid-1);
    else
        return binary(key,a,mid+1,high);
}
void main()
{
    int i,a[20],pos,key,n,choice,low=0,high=n-1;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE SEARCH KEY:");
    scanf("%d",&key);
    while(1)
    {
        printf("__________________________________\n");
        printf("\n1:LINEAR\n2:BINARY\n3.EXIT\n");
        printf("__________________________________\n");
        printf("ENTER THE CHOICE\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: pos=linear(key,n,a);
            break;
            case 2: pos=binary(key,a,0,n-1);
            break;
            case 3:exit(0);
            break;
            default: printf("enter the valid choice\n");
            break;
        }
        if(pos==0)
        {
            printf("______________________________________\n");
            printf("Item not found");
            printf("\n______________________________________\n");
        }
        else
        {
            printf("__________________________________\n");
            printf("location=%d\t",pos);
            printf("Search_Key=%d Found!\n",key);
            printf("__________________________________\n");
        }

    }
}