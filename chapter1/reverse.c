#include<stdio.h>
#define MAXLINE 1000
void reverse_(char line[]);
int getline_(char s[],int limit);
int main(){
    char line[MAXLINE];
    int len;
    while((len = getline_(line,MAXLINE)) > 0){
        reverse_(line);
        printf("reversed :\n%s %d",line,len);
    }
    
    
}

int getline_(char s[],int limit){
    int i,c;
    for(i=0;i<limit-1 && (c = getchar()) != EOF && c != EOF;++i)
        s[i]=c;
    if(c == '\n'){
        s[i]=c;
        ++i;
    }
    s[i]='\0';

    return i;
}

void reverse_(char line[]){
    int i,j;
    char temp;
    i=0;

    //goto the end of line
    while(line[i] != '\0')
        ++i;
    //back away from end of line
    --i;

    //check if there is a newline and leave it alone
    if(line[i] == '\n')
        --i;

    j=0;
    while(j<i){
        temp=line[j];
        line[j]=line[i];
        line[i]=temp;
        ++j;
        --i;
    }
    
    
}