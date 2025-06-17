#include "headers.h"

void printLeaders(int* ptr,int size){
    cout<<ptr[size-1]<<" ";

    int leader = ptr[size-1];

    for(int i=size-2; i>=0; --i){
        if(ptr[i] > leader) {
          cout<<ptr[i]<<" ";
          leader = ptr[i];
        }
    }
    cout<<"\n";
}

int main(){
    int nums[] = {16,17,4,3,5,2};
    int size = sizeof(nums)/sizeof(nums[0]);
    printLeaders(nums,size);
}
