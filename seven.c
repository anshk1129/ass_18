#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter a string\n");
gets(str);
int res=palin(str);
if(res==1){
    printf("Given string is palindrome\n");
}
else{
    printf("Given string is not palindrome\n");
}
return 0;
}
int palin(char str[]){
    int i,j;
    j=strlen(str);
    for(i=0;i<j/2;i++){
        if(str[i]!=str[j-1]){
            return 0;
        }
        j--;

    }
    return 1;
}