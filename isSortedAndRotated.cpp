#include "headers.h"

//Find out if a sorted array is rotated or not

bool is_Sorted_Rotated(int* ptr,int size){
    int pairs_Count = 0;
    for(int i=0; i<size; ++i){
        if(ptr[i] > ptr[(i+1) % size]) pairs_Count++;
    }

    return pairs_Count <= 1;
}

int main(){
    int nums[] = {6,8,4,17,2,3,5};
    int size = sizeof(nums)/sizeof(nums[0]);

    bool flag = is_Sorted_Rotated(nums,size);

    if(flag) cout<<"Yes\n";
    else cout<<"No\n"; 
}