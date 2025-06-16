#include "headers.h"

int removeOccurences(int* p_nums,int size,int ele){
    int index = 0;
    for(int i=0; i<size; ++i){
        if(p_nums[i]!=ele){
            p_nums[index++] = p_nums[i];
        }
    }
    return index;
}
void printArray(int* p_nums,int size){
    for(int i=0; i<size; ++i){
        cout<<p_nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int nums[] = {0, 1, 3, 0, 2, 2, 4, 2};
    int ele = 2;
    int size = sizeof(nums)/sizeof(nums[0]);
    int updatedSize = removeOccurences(nums,size,ele);
    cout<<"Number of elements after removing all the Occurences of "<<ele<<" is "<<updatedSize;
    cout<<endl;
    printArray(nums,updatedSize);
}