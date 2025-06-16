#include "headers.h"
int removeDuplicates_(vector<int> &nums){

    int i = 1;

    for(int j=1; j<nums.size(); ++j){
        if(nums[j]!=nums[i-1]){
            nums[i++] = nums[j];
        }
    }

    return i;
}
int remove_Duplicates(vector<int> &nums){
    set<int> unique_nums;
    for(auto &i:nums) unique_nums.insert(i);
    int unique_elements = unique_nums.size();
    int k = 0;
    for(auto &i:unique_nums){
        nums[k++] = i;
    }
    return unique_elements;
}
int main(){
    vector<int> nums = {1,1,1,2,2,3,3,3,4,4};

    int count_of_unique_elements = removeDuplicates_(nums);

    cout<<"\n";

    for(auto i:nums) cout<<i<<" ";

    cout<<"\nNumber of Unique elements in the Array is: "<<count_of_unique_elements<<"\n\n";

    vector<int> nums1 = {2,2,4,4,4,8,8,8,8,9,9};

    int unique_ele = remove_Duplicates(nums1);
    for(auto i:nums1) cout<<i<<" ";

    cout<<"\nNumber of Unique elements in the Array is: "<<unique_ele<<"\n\n";
}