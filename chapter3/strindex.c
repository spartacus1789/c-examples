#include<stdio.h>
#include<string.h>
#define MAXLINE 1000
int getline_(char line[],int max);
int strindex(char line[],char search[]);
int strindex_right(char line[],char search[]);
int main(){
    char line[MAXLINE];
    char s[]="osef";
    //printf("welcome \n");
    while(getline_(line,MAXLINE) > 0){
        int index = strindex_right(line,s);
        if(index >= 0){
            printf("%d : %s",index,line);
        }
    }
    
}

int getline_(char line[],int max){
    int c,i;
    i=0;
    while((c = getchar()) != EOF && c !='\n' && i < max){
        line[i++]=c;
    }
    if(c == '\n')
        line[i++] = '\n';

    line[i]='\0';
    return i;
}

int strindex(char line[],char search[]){
    int i,j,k;
    for(i=0;line[i] != '\0' ; ++i){
        for(j=i,k=0;search[k] != '\0' && search[k] == line[j];++k,++j)
            ;
        if(k>0 && search[k] == '\0'){
            return i;
            //printf("%d\n",i);
        }
    }
    return -1;
}

int strindex_right(char line[],char search[]){
    int i,j,k;
    for((i=strlen(line) - strlen(search));i>0;--i){
        for(j=i,k=0;search[k] != '\0' && search[k] == line[j];++j,++k)
            ;
        if(k>0 && search[k] == '\0'){
            return i;
        }
    }

    return -1;
}