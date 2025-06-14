#include "headers.h"
int majority_Element(vector<int> &nums){  //Element that appears more than N/2 times
    unordered_map<int,int> hashmap;
    for(auto &i : nums) hashmap[i]++;

    for(auto &i : hashmap){
        if(i.second > nums.size()/2) return i.first;
    }
    return -1;
}
int main(){
    vector<int> nums = {2,3,1,4,3,3,2,3,2,3,2};
    int majority_num = majority_Element(nums);
    
    if(majority_num == -1) cout<<"No Majority Element exists\n";
    else cout<<"The Element that Occurs Majorly is: "<<majority_num<<"\n";
}