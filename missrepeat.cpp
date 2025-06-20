#include "headers.h"

pair<int,int> missing_repeating(int* ptr,int size){
    pair<int,int> target_Nums;
    for(int i=0; i<size; ++i){
        if(ptr[abs(ptr[i])-1] < 0) target_Nums.first = abs(ptr[i]);
        else ptr[abs(ptr[i])-1] *= -1;
    }
    for(int i=0; i<size; ++i){
        if(ptr[i]>0){
            target_Nums.second = i+1;
            break;
        }

    }
    return target_Nums;
}
int main(){
    int nums[] = {1,5,3,4,6,1,9,2,8};
    int size = sizeof(nums)/sizeof(nums[0]);
     
    pair<int,int> target_Nums = missing_repeating(nums,size);
    cout<<"Missing number is: "<<target_Nums.first<<"\n";
    cout<<"Repeating number is: "<<target_Nums.second<<"\n";

    return 0;
}