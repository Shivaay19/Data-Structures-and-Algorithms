#include "headers.h"

vector<int> two_Sum(int* ptr,int size,int target_Sum){
    vector<int> indices;
    map<int,int> hashmap;
    for(int i=0; i<size; ++i){
        auto it = hashmap.find(target_Sum-ptr[i]);
        if(it == hashmap.end()){
           hashmap.insert({ptr[i],i});
        }
        else{
            indices.push_back(it->second);
            indices.push_back(i);
            break;
        }
    }
    return indices;
}
int main(){
    int nums[] = {2,4,3,1,7,11,6,24,18};
    int size = sizeof(nums)/sizeof(nums[0]);

    int target_Sum;
    cout<<"Enter the Target Sum: \n";

    cin>>target_Sum;

    vector<int> indices = two_Sum(nums,size,target_Sum);

    if(indices.size()){
        for(auto &i : indices) cout<<i<<" ";
        cout<<"\n";
    }
    else cout<<"The Given Target Sum is not Possible\n";

}