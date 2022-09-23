#include<stdio.h>
int main(){
char str[100]="RaMeSh";
printf("The given string  is %s",str);
uppr(str);
printf("\nThe given string in lower case is %s",str);
return 0;
}
void uppr(char str[]){
    int i=0;
while(str[i])
{
    if(str[i]>=65&&str[i]<=96){
        str[i]=str[i]+32;
    }
    i++;
}
}
