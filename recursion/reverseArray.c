#include<stdio.h>
#include "../common.h"

void reverseArray(int arr[], int sze){
    int t=0, s=0, e=sze-1;
    while(s<e){
        t = arr[s];
        arr[s]=arr[e];
        arr[e]=t;
        s++;t--;
    }
    return;
}

void rreverse(int arr[], int sze)
{
    if(sze==0 || sze == 1) return;
    int t=0;
    t = arr[sze-1];
    arr[sze-1]=arr[0];
    arr[0]=t;
    return rreverse(arr+1,sze-2);
}
int main(){
    int arr[]={10, 20, 30, 40, 50, 60, 70};

    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    PRINTNEWLINE
    rreverse(arr,7);

    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}