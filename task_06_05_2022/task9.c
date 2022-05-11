// c program to count the number of substrings in a string//
#include<stdio.h>
#include<string.h>
int count_substring(char str[],char substr[]){
    int i,j,c=0;
    int l1=strlen(str);
    for(i=0;i<l1;i++){
        if(str[i]==substr[j])
        j++;
        else if(str[i]==substr[0])
        j=1;
        else
        j=0;
        if(substr[j]=='\0'){
        c++;
        j=0;
    }
    }
    return c;
}
int main(){
    int count;
    char a[]="wawa too want to talk";
    char b[]="wa";
    
    count=count_substring(a,b);
    printf("count=%d",count);
    printf("\n");
    return 0;
}