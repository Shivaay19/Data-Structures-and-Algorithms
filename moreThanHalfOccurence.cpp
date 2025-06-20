#include "headers.h"

//Given a sorted array of size N, find out if any of the elements occur more than N/2 times
int more_Than_Half(int* ptr,int size){
    int half = size/2;
    for(int i=0; i<size; ++i){
        if(ptr[i] == ptr[i+half]) return ptr[i];
    }
    return -1;
}

int main(){
    int nums[] = {1,2,2,5,6,6,6,6,6,6,7,7};
    int size = sizeof(nums)/sizeof(nums[0]);

    int element = more_Than_Half(nums,size);

    if(element == -1) cout<<"No element Occurs more than "<<size/2<<" times\n";
    else cout<<element<<" occurs more than "<<size/2<<" times in the given array\n";
}