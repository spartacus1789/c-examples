#include<stdio.h>
int atio(char s[]);
int lower(int);
int main(){
    printf("%c",lower('a'));
}

int atio(char s[]){
    int i,n;
    n=0;
    for(i=0;s[i] >= '0' && s[i] <= '9' ; ++i)
        n=10*n+(s[i] - '0');
    return n;
}
int lower(int c){
    if(c >= 'A' && c<= 'Z'){
        return c + 'a' - 'A';
    }else
    {
        return c;
    }
    
}