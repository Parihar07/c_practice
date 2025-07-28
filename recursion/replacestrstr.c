#include<stdio.h>
#include<string.h>

void replace(char *str, char *rstr){
    int len = strlen(str);
    int rlen = strlen(rstr)-1; //not counting replacxeing char
    if(len == 0) return;
    if(str[0]=='x'){ // if s is found just start moving char to len of rstr
          for(int i=len;i>0;i--){
            str[i+rlen]=str[i];
        }
        for(int i=0;i<=rlen;i++){
            str[i]=rstr[i];
        }
        replace(str+rlen, rstr);
    } else {
        replace(str+1, rstr);
    }
  
}
int main()
{

    char input[100]="hexllox";
    printf("Inout: %s\n", input);
    replace(input, "LOVE");
    printf("replace string: %s",input);
    return 0;
}