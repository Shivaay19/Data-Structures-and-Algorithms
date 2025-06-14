#include "headers.h"

//Re-arrange the Elements in an Alternate way of + and - elements

int* rearrange(int* ptr,int size){
    int positive_index = 0, negative_index = 1;
    int* rearranged_array = new int[size] ;
    for(int i=0; i<size; ++i){
        if(ptr[i]>=0){
            rearranged_array[positive_index] = ptr[i];
            positive_index += 2;
        }
        else{
            rearranged_array[negative_index] = ptr[i];
            negative_index += 2;
        }
    }
    return rearranged_array;
}

int main(){
    int nums[] = {3,2,-1,4,-5,-8,-7,10,-15,12};
    int size = sizeof(nums)/sizeof(nums[0]);

    int* rearranged_array = rearrange(nums,size);

    for(int i=0; i<size; ++i) cout<<rearranged_array[i]<<" ";
    cout<<"\n";

    delete[] (rearranged_array);
}