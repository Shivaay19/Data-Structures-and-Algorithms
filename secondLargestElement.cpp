#include "headers.h"
int secondLargestElement(vector<int> &nums){
    int largest = nums[0];
    int secondLargest = -1;
    for(auto &i : nums){
        if(i>largest){
            secondLargest = largest;
            largest = i;
        }
        else if(i<largest && i>secondLargest){
            secondLargest = i;
        }
    }
    return secondLargest;
}
int secondSmallestElement(vector<int> &nums){
    int smallest = nums[0];
    int secondSmallest = INT_MAX;
    for(auto &i : nums){
        if(i<smallest){
            secondSmallest = smallest;
            smallest = i;
        }
        else if(i>smallest && i<secondSmallest) secondSmallest = i;
    }
    return secondSmallest;
}
int main(){
    vector<int> nums = {1,11,2,14,16,2,12,23,11,32,35,8,33};
    cout<<secondLargestElement(nums)<<endl;
    cout<<secondSmallestElement(nums)<<endl;
    vector<int> nums1 = {2,2,2,2,2,2};
    cout<<secondLargestElement(nums1)<<endl;
    cout<<secondSmallestElement(nums1)<<endl;
}