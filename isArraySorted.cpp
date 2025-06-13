#include "headers.h"
bool isArraySorted_(int* ptr,int size){
    for(int i=0; i<size-1; ++i){
        if(ptr[i] > ptr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int nums[] = {1,2,2,4,6,6,5};
    int size = sizeof(nums)/sizeof(nums[0]);
    cout<<isArraySorted_(nums,size)<<endl;
}