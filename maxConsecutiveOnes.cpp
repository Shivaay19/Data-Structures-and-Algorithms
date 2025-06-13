#include "headers.h"

int countOfConsecutiveOnes(int* ptr,int size){
    int count = 0;
    int maxCount = -1;

    for(int i=0; i<size; ++i){
        if(ptr[i]){
            count++;
            continue;
        }
        maxCount = max(maxCount,count);
        count = 0;
    }
    maxCount = max(maxCount,count);  //Handling the case when the longest string is in the end
    return maxCount;
}

int main(){
    int nums[] = {1,0,1,1,1,0,0,1,1,0,1,1,1,1,1,0,0,1,1,1,1};
    int size = sizeof(nums)/sizeof(nums[0]);

    cout<<"The Max Number of Consecutive Ones is: "<<countOfConsecutiveOnes(nums,size)<<endl;
}