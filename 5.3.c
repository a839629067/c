#include<stdio.h>
int main(){

    int i,a[20],j,k,target,flag,temp,index[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(i=0;i<20;i++)
        scanf("%d",&a[i]);
    printf("input target");
    scanf("%d",&target);
    for(j=0;j<18;j++)
    {
        flag=j;
        for(k=0;k<19;k++)
        {
            if(a[k]<a[flag])
                flag=k;
        }
        temp=a[flag];
        a[flag]=a[j];
        a[j]=temp;
        temp=index[flag];
        index[flag]=index[j];
        index[j]=temp;
    }
        int left=0,right=19,result,mid;
        while(left<=right)
        {
            int mid = ((left + right)/2);
            if (a[mid]==target)
            {
                result=mid;
                break;
            }
            else
                if(a[mid]<target)
                {
                    left=mid+1;
                }
                else
                    if(a[mid]>target)
                    {
                        right=mid-1;
                    }

        }
    if (a[mid]==target)
        printf("%d\n",index[result]);
    else
        printf("No Found");
}

    
