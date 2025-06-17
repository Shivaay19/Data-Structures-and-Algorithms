#include "headers.h"

void sort_array(int* nums,int size){
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for(int i=0; i<size; ++i){
        if(nums[i] == 0) count_0++;
        else if(nums[i] == 1) count_1++;
        else count_2++;
    }
    int index = 0;
    while(count_0--) nums[index++] = 0;
    while(count_1--) nums[index++] = 1;
    while(count_2--) nums[index++] = 2;
}

int main(){
    int nums[] = {0,0,1,2,1,1,0,0,2,2,1};
    int size = sizeof(nums)/sizeof(nums[0]);

    sort_array(nums,size);
    for(auto &i:nums) cout<<i<<" ";
    cout<<"\n";

}