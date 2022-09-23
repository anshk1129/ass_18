#include<stdio.h>
int main(){
char str[100]="RaMeSh";
printf("The given string  is %s",str);
lwr(str);
printf("\nThe given string in upper case is %s",str);
return 0;
}
void lwr(char str[]){
    int i=0;
while(str[i])
{
    if(str[i]>=97&&str[i]<=122){
        str[i]=str[i]-32;
    }
    i++;
}
}
