#include "headers.h"

vector<int> intersection_Of_Arrays(int* ptr1,int size1,int* ptr2,int size2){
    int i=0,j=0;
    vector<int> intersection;
    while(i<size1 && j<size2){

        if(ptr1[i]==ptr2[j]){
            intersection.push_back(ptr1[i]);
            i++;
            j++;
        }

        else if(ptr1[i]<ptr2[j]) i++;

        else j++;
    }
    return intersection;
}
int main(){
    int nums1[] = {2,2,4,5,5,7,9,9,10};
    int nums2[] = {2,3,3,5,5,8,9,9,10,14,15};

    int size1 = sizeof(nums1)/sizeof(nums1[0]);
    int size2 = sizeof(nums2)/sizeof(nums2[0]);

    vector<int> intersection_array = intersection_Of_Arrays(nums1,size1,nums2,size2);
    for(auto &i : intersection_array) cout<<i<<" ";
    cout<<"\n";
}