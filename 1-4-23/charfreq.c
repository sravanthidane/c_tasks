#include<stdio.h>
int main(){
    char ch='a';
    int count=0;
    char str[40]="sravanthi";
    for(int i=0;str[i]!='\0';i++){
        if(ch==str[i]){
            count++;
        }
    }
    printf("count of %c is %d times",ch,count);
}