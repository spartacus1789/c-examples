#include<stdio.h>
#define MAXLINE 100
int main(){
    char s1[MAXLINE];
    char s2[MAXLINE];
    int c,ind;
    ind=0;
    while((c = getchar()) != '\n' && ind < MAXLINE){
        s1[ind++]=c;
    }
    if(ind < MAXLINE-1)
        s1[ind] = '\0';
    

    int i,j;
    j=0;
    for(i=0 ; s1[i] != '\0'; ++i){
        switch(s1[i]){
            case '\t':
                s2[j++]='\\';
                s2[j++]='t';
                break;
            case '\n':
                s2[j++]='\\';
                s2[j++]='n';
                break;
            default:
                s2[j++]=s1[i];
                break;
        }
        
    }
    s2[j] = '\0';
    printf("\n%s",s2);

}