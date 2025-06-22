#include "headers.h"

void segregate_0s_1s(vector<int> &nums){
    int i = 0, j = nums.size()-1;
    while(i<j){
        if(nums[i] == 1 && nums[j] == 0) swap(nums[i++],nums[j--]);
        else if(nums[i] == 0) ++i;
        else --j;
    }
}
int main(){
    vector<int> nums = {1,1,1,0,0,0,1,0,1,1,1,0,1,1,0,0,1};

    cout<<"Before Segregating: ";
    for(auto &i : nums) cout<<i<<" ";
    cout<<"\n";

    segregate_0s_1s(nums);

    cout<<"After Segregating: ";
    for(auto &i : nums) cout<<i<<" ";
    cout<<"\n";
}