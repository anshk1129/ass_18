#include<stdio.h>
int main(){
char str[100];
char str1[100];
int res;
printf("Enter two strings\n");
fgets(str,sizeof(str),stdin);
fgets(str1,sizeof(str1),stdin);
res=cmp(str,str1);
if(res==1)
printf("The strings is equal\n");
else{
    printf("The strings are not equal\n");
}
return 0;
}
int cmp(char str[],char str1[]){
    int i=0,j=0;
    while(str[i]||str1[j]){
        if(str[i]!=str1[j]){
            return 0;
        }
        i++;
        j++;
    }
    return 1;
}