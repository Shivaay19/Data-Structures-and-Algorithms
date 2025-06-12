#include "headers.h"
void leftRotateArray(int* ptr,int size){
    int temp = ptr[0];

    for(int i=1; i<size; ++i){
        ptr[i-1] = ptr[i];
    }
    ptr[size-1] = temp;
}
void rightRotateArray(int* ptr,int size){
    int temp = ptr[size-1];

    for(int i = size-1; i>0; --i){
        ptr[i] = ptr[i-1];
    }
    ptr[0] = temp;
}
int main(){
    int nums[] = {2,4,1,5,7,3};
    int size = sizeof(nums)/sizeof(nums[0]);
    leftRotateArray(nums,size);
    for(int i=0; i<size; ++i) cout<<nums[i]<<" ";
    cout<<endl;
    
    int nums1[] = {2,4,1,5,7,3};
    rightRotateArray(nums1,size);
    for(int i=0; i<size; ++i) cout<<nums1[i]<<" ";
    cout<<endl;
}