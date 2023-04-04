#include<stdio.h>
int main(){
  
    int v_count=0,c_count=0,d_count=0,s_count=0,other_count=0;
    char str[40]="Sravanthi Is going to road no 65@g5#fd&";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            v_count++;
        }
        else if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            c_count++;
        }
        else if (str[i]==' '){
            s_count++;
        }
        else if(str[i]>='1' && str[i]<='9'){
            d_count++;
        }
        else{
            other_count++;
        }
    }
    printf("count of vowels=%d\n",v_count);
      printf("count of conso=%d\n",c_count);
        printf("count of spaces=%d\n",s_count);
          printf("count of digits=%d\n",d_count);
            printf("count of other=%d\n",other_count);
}