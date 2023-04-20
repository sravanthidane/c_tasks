#include<stdio.h>
#include<string.h>
int main(){
    char ch[20]="going";
    char str[20]="coming ";
    int l=strlen(str);
    // int size=sizeof(str);
    // printf("%d\n",size);
    // printf("%d",l);

    for(int i=0;ch[i]!='\0';++i,++l){
        str[l]=ch[i];
       
    }
    str[l]='\0';
    printf("%s",str);
}