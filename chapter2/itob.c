#include<stdio.h>
void itob(int n,char s[],int b);
int main(){
    char s[16];
    itob(31,s,16);
}

void itob(int n,char s[],int b){
    int i,j;
    i=0;
    do{
        j=n % b;
        s[i++] = (j < 9) ?  j + '0' : j + 'a' - 10;
    }while((n /= b) > 0);
        
    s[i]='\0';
    printf("%s",s);
}