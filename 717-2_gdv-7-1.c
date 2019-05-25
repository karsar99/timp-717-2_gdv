#include <stdio.h>
#include <stdlib.h>

void funcsort(int arr[],int l,int r)
{
        int i=l,j=r,d,m=arr[(l+r)/2];
        while(i<=j){
            while(arr[i]<m)
            i++;
            while(arr[j]>m)
                        j--;
            if(i<=j)
                        {
                d=arr[i];
                arr[i++]=arr[j];
                arr[j--]=d;
            }
        }
        if(l<j)
                funcsort(arr,l,j);
        if(i<r)
                funcsort(arr,i,r);
}

int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
                {
                scanf("%d",&arr[i]);
                }
        funcsort(arr,0,n-1);
        for(int i=0;i<n;i++)
                {
                printf("%d",arr[i]);
                if (i==n-1)
                printf("\n");
                else
                printf(" ");
                }
        return 0;
}