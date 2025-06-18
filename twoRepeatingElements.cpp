#include "headers.h"

// Find the two repeating elements in a given array of size n+2

vector<int> find_repeating(int* ptr,int size){
    int repeating_num1 = -1, repeating_num2 = -1;
    for(int i=0; i<size; ++i){
        if(ptr[abs(ptr[i])-1] < 0 && repeating_num1 == -1) repeating_num1 = abs(ptr[i]);
        else if(ptr[abs(ptr[i])-1] < 0 && repeating_num1 != -1) repeating_num2 = abs(ptr[i]);
        else ptr[abs(ptr[i])-1] *= -1;
    }
    return {repeating_num1,repeating_num2};
}

int main(){
    int nums[] = {4,2,4,5,2,3,1};
    int size = sizeof(nums)/sizeof(nums[0]);
    vector<int> repeating_nums = find_repeating(nums,size);
    cout<<"The repeating numbers are: "<<repeating_nums[0]<<" and "<<repeating_nums[1]<<"\n";
}