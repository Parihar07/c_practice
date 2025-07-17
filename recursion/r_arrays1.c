#include<stdio.h>

int sum(int arr[], int sze){
    int sum=0;
    for(int i=0;i<sze;i++)
        sum+=arr[i];
    return sum;
}

int recur_sum(int arr[], int sze)
{
    if(sze==0) return 0;
    return arr[0]+recur_sum(arr+1, sze-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("Sum of the arra is : %d\n",recur_sum(arr,10));
    return 0;
}                                                                                     