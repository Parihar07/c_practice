#include<stdio.h>
#include<string.h>
void rmvDupChars(char *str)
{
    int len = strlen(str);
    if(len==0 || len==1) return;    
    if(str[0]==str[1]){
        // Shift characters left to remov    e duplicate
        for(int i=1;i<=len;i++){
            str[i-1]=str[i];
        }
        rmvDupChars(str); // Recurse on the same position (not str+1)
    } else {
        rmvDupChars(str+1); // Move to next character only if no duplicate found
    }
}
int main()
{
    char str[] = "aaabcddef";
    printf("original : %s\n",str);
    rmvDupChars(str);
    printf("removed duplicates : %s\n",str);
    
    return 0;
}