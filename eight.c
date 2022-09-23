#include<stdio.h>
int main(){
char str[100];
printf("Enter a string\n");
gets(str);
int res=count_words(str);
printf("The number of words in the given string is %d ",res);
return 0;
}
int count_words(char str[]){
   int count=1;
   for(int i=0;str[i];i++){
    if(str[i]==' '&&str[i+1]!=' ')
       count+=1;
   }
   return count;

}
