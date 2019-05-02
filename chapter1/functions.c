/*
    This program will take a line of words from 
    users and print the longest one
*/
#include<stdio.h>
#define MAXLINE 1000 //max line length
int getline_(char line[],int max);
void copy_(char from[],char to[]);
int main(){
    char line[MAXLINE];      //current input line
    char longest[MAXLINE];   //the longest line
    int len,lon;    
    lon=0;
    //take a line from the users
    while((len = getline_(line,MAXLINE)) > 0)
        if(len > lon){
            lon=len;    //update the length for longest line
            copy_(line,longest);     //save the longest line
        }   
    printf("\nlongest line : %s %d\n",longest,lon);
}

int getline_(char s[],int limit){
    int i,c;
    for(i=0;i<limit-1 && (c = getchar()) != '\n' && c != EOF;++i)
        s[i]=c;
    if(c == '\n'){
        s[i] = '\n';
        ++i;
    }
    s[i] ='\0';
    return i;
}

void copy_(char from[],char to[]){
    int i;
    i=0;
    while((to[i] = from[i]) != '\0')
        ++i;
}