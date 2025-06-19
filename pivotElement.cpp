#include "headers.h"

//Find the pivot element in a Sorted and Right Rotated Array
//Smallest element is taken as the Pivot

int find_Pivot_Index(int* ptr,int size){
    int low = 0, high = size-1;
    int mid = low + (high-low)/2;
    while(low<high){
        if(ptr[mid] >= ptr[0]) low = mid+1;
        else high = mid;

        mid = low + (high-low)/2;
    }
    return low;
}
int main(){
    int nums[] = {9,13,16,22,1,2,5,6,8};
    int size = sizeof(nums)/sizeof(nums[0]);

    int pivot_Index = find_Pivot_Index(nums,size);

    cout<<"The Index of the Pivot element is: "<<pivot_Index<<"\n";
}