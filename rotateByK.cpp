#include "headers.h"
void leftRotateArray(int* ptr,int size,int k){
    int temp[k];
    for(int i=0; i<k; ++i){
        temp[i] = ptr[i];
    }
    for(int i=k; i<size; ++i){
        ptr[i-k] = ptr[i];
    }
    int j=0;
    for(int i=size-k; i<size; ++i){
        ptr[i] = temp[j++];
    }
}
//Optimised Approach
void left_Rotate(int* ptr, int size,int k){
    reverse(ptr,ptr+k);
    reverse(ptr+k,ptr+size);
    reverse(ptr,ptr+size);
}
int main(){

    int nums[] = {2,5,1,4,9,6,7};
    int size = sizeof(nums)/sizeof(nums[0]);

    cout<<"Enter the Number of Positions by which to Rotate the Array: \n";
    int k;
    cin>>k;
    
    leftRotateArray(nums,size,k%size);
    for(int i=0; i<size; ++i) cout<<nums[i]<<" ";
    cout<<endl;

    int nums1[] = {3,1,5,7,41,45,31};
    int size2 = sizeof(nums1)/sizeof(nums1[0]);

    left_Rotate(nums1,size,k%size2);
    for(int i=0; i<size2; ++i) cout<<nums1[i]<<" ";
    cout<<endl;
}