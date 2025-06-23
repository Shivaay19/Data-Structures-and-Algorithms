#include "headers.h"

int mostFrequentElement(vector<int>& nums) {
        map<int,int> hashmap;

        for(auto &i : nums) hashmap[i]++;

        int max_frequency_element, max_frequency=-1;
        for(auto it: hashmap){
            if(it.second > max_frequency){
                max_frequency_element = it.first;
                max_frequency = it.second;
            }
        }
        return max_frequency_element;
}
int main(){
    vector<int> nums = {2,2,1,1,1,6,4,3,3,3,5,4,4,4,4,6,3,3};
    cout<<mostFrequentElement(nums)<<endl;
}