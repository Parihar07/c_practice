#include<stdio.h>
#include<string.h>
void charReplace(char str[]){
    int l = strlen(str);
    if(l==0) return;
    if(str[0]=='x'){
        for(int i=0;i<l;i++){
            str[i]=str[i+1];
        }
        charReplace(str);
    } else {
        charReplace(str+1);
    }
}
int main(){
    char str[]="abxdcxx";
    charReplace(str);
    printf("%s\n",str);
    return 0;
}