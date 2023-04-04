#include<stdio.h>
#include<string.h>
int main(){
    char str[50]="sravanthi dane is going";
    // for(int i=0;str[i]!='\0';i++){
    //     printf("%c  ",str[i]);
    // }
    int count;
    int l=strlen(str);
//     for(int i=l;i>=0;i--){
// printf("%c",str[i]);
//     }
for(int i=0;i<l;i++){
    if(str[i]==' '){
        count++;
    }
   
}
 printf("%d",count);
    return 0;
}