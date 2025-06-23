#include "headers.h"

//Given an unsorted array and an integer x,find if there exists a pair of elements in the array whose absolute difference is x. 

vector<pair<int,int>> pairs_With_Difference(vector<int> &nums,int difference){
    vector<pair<int,int>> elements_Of_Pairs;
    unordered_set<int> elements;

    for (auto &i : nums) {
        
        if (elements.find(i - difference) != elements.end())
            elements_Of_Pairs.push_back({i, i - difference});

        if (elements.find(i + difference) != elements.end())
            elements_Of_Pairs.push_back({i, i + difference});
        
        elements.insert(i);
    }

    return elements_Of_Pairs;
}

int main(){
    vector<int> nums = {5,1,20,32,2,50,80,13,29,49,53};
    int difference = 19;

    vector<pair<int,int>> elements_Of_Pairs;
    elements_Of_Pairs = pairs_With_Difference(nums,difference);

    for(auto &i : elements_Of_Pairs){
        cout<<i.first<<" "<<i.second<<"\n";
    }
}