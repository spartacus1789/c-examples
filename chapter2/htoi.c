#include<stdio.h>
#define YES 1
#define NO 0
int htoi(char s[]);

int main(){
    printf("%d",htoi("0x1f"));
}

int htoi(char s[]){
    int hexdigit,i,n,inhex;
    i=0;
    //skipping 0x or 0X
    if(s[i] == '0'){
        ++i;
        if(s[i] == 'X' || s[i] == 'x')
            ++i;
    }
    inhex=YES;
    n=0;
    for(;inhex != NO ; ++i){
        if(s[i] >= '0' && s[i] <= '9'){
            hexdigit = s[i] -'0';
        }else if(s[i] >= 'a' && s[i] <= 'f'){
            hexdigit = s[i] - 'a' + 10;
        }
        else if(s[i] >= 'A' && s[i] <= 'F'){
            hexdigit = s[i] - 'A' + 10;
        }else{
            inhex = NO;
        }

        //if valid hex character
        if(inhex == YES)
            n =n * 16 + hexdigit;
    }

    return n;
}