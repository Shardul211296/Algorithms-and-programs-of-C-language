#include<stdio.h>
#include<stdbool.h>

void BubbleSort(int a[],int n)
{
    bool flag;
    int countc=0,counts=0;
    for(int i=0;i<n-1;i++)
    {
        flag=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                counts++;
                flag=true;
            }
            countc++;
        }
        if(flag==false)
        {
            break;
        }
    }  
    printf("Number of comparisons are:- %d\n",countc);
    printf("Number of swaps are:- %d\n",counts); 
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    BubbleSort(a,n);

    printf("Sorted Array:- \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
