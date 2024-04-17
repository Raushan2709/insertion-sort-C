#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of elements: ");
    scanf("%d\n",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(int i=0;i<n;i++)
    printf("%d ",ar[i]);    
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>=1&&ar[j]<ar[j-1])
        {
            int temp=ar[j-1];
            ar[j-1]=ar[j];
            ar[j]=temp;
            j--;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d ",ar[i]);
    return 0;
} 