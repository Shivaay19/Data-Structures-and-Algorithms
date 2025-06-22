#include "headers.h"

//Given two sorted arrays of size m and n of distinct elements and a value k. Count all pairs from both arrays whose sum is equal to k. 
//The pair has an element from each array.

vector<pair<int,int>> count_Pairs_With_Given_Sum(vector<int> &nums1,vector<int> &nums2,int sum){
    int i = 0, j = nums2.size()-1;
    vector<pair<int,int>> elements_Of_Pairs;
    while(i<nums1.size() && j>=0){
        if(nums1[i] + nums2[j] == sum){
            elements_Of_Pairs.push_back({nums1[i],nums2[j]});
            ++i,--j;
        }
        else if(nums1[i] + nums2[j] > sum) --j;
        else ++i;
    }
    return elements_Of_Pairs;
}

int main(){
    vector<int> nums1 = {1,3,4,7,9,11};
    vector<int> nums2 = {3,5,8,10,12,15};

    int sum;
    cout<<"Enter the Sum\n";
    cin>>sum;

    vector<pair<int,int>> element_Of_Pairs = count_Pairs_With_Given_Sum(nums1,nums2,sum);
    cout<<"The Pairs with Sum equal to "<<sum<<" are:\n";
    for(auto &i : element_Of_Pairs) cout<<i.first<<" "<<i.second<<"\n";

    cout<<"The Count of Such Pairs is: "<<element_Of_Pairs.size()<<"\n";
}