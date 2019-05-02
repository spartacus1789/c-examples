#include<stdio.h>
void itoa(int n,char s[]);
void reverse(char s[]);
int main(){
    char s[5];
    itoa(4230,s);

}

void itoa(int n , char s[]){
    int i,sign;
    if((sign = n) < 0)
        n = -n;     //make it postive
    i=0;
    do{
        s[i++] = n % 10 + '0';
    }while((n /= 10) > 0);

    if(sign < 0){
        s[i++]='-';
    }
    s[i] = '\0';
    printf("%s\n",s);
    reverse(s);
}

void reverse(char s[]){
    int i,j;
    char temp;
    for(i=0;s[i] != '\0';++i)
        ;
    --i;    //move away from \0
    j=0;
    
    while(j<i){
        temp = s[j];
        s[j] = s[i];
        s[i]=temp;
        ++j;
        --i;
    }

    printf("%s",s);
}