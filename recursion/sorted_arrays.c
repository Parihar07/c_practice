#include<stdio.h>
int IsSorted(int arr[], int sze){
    for(int i=0;i<sze;i++){
        if(arr[0]>arr[1]) return 1;
    }
    return 0;
}

int rIsSorted(int arr[], int sze){
    if(sze==0 || sze==1) return 0;
    if(arr[0]>arr[1]) return 1;
    return rIsSorted(arr+1,sze-1);
}
int main(){
    int arr[]={3,2,6,7,8,95};
    printf("If arry is sorted : %s", rIsSorted(arr,6)?"false":"true");
    return 0;
}