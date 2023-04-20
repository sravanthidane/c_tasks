#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="bca";
    char temp;
    int l=strlen(str);
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
}