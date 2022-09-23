#include<stdio.h>
#include<string.h>
int cal_len(char str[]);
int main(){
char str[100];
int len;
printf("Enter a string\n");
fgets(str,sizeof(str),stdin);
len=cal_len(str);
printf("The length of given string is %d",len-1);
return 0;
}
int cal_len(char str[]){
    int i;
    for(i=0;str[i];i++);
    return i;
}