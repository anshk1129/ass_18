#include<stdio.h>
int main(){
char str[100];
printf("Enter a string\n");
fgets(str,100,stdin);
rev(str);
printf("The reverse of string is %s",str);
return 0;
}
void rev(char str[]){
    int i=0,j,temp;
    j=strlen(str);
    while(i<=j/2){
        temp=str[i];
        str[i]=str[j-1];
        str[j-1]=temp;
        i++;
        j--;
    }
}
