#include<stdio.h>
int check_alpha(char str[]);
int main(){
char str[]="123ab";
int res=check_alpha(str);
    if(res==1){
        printf("The given string is alphanumeric\n");
    }
else{
    printf("The given string is not alphanumeric");
}

return 0;
}
int check_alpha(char str[]){
    int i=0,j=0;
    for(int k=0;str[k];k++){
        if(str[k]>='A'&&str[k]<='z')
          i=1;
        if(str[k]>='0'&&str[k]<='9')
        j=1;
        if(j==i)
        return 1;
    }
    return 0;
}