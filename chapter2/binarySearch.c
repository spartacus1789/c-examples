#include<stdio.h>

int binarysearch(int x,int arr[],int size);
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",binarysearch(4,array,10));
}

int binarysearch(int x,int arr[],int s){
    int low , high , mid;
    low=0;
    high =s-1;
    mid = (low + high) / 2;

    while(low <= high && x != arr[mid]){
        if(x < arr[mid])    //if the search item is below the middle item
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;     //re calculate the mid value
    }
    if(x == arr [mid])
        return mid;
    else
        return -1;
}