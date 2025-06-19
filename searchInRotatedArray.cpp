#include "headers.h"

//Search an element in a Sorted and Right Rotated Array

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

int binarySearch(int* ptr,int size,int key,int low,int high){
    int mid = low + (high-low)/2;

    while(low<=high){
        if(ptr[mid] > key) high = mid-1;
        else if(ptr[mid] < key) low = mid+1;
        else return mid;

        mid = low + (high-low)/2;
    }
    return -1;
}
int find_Element(int* ptr,int size,int key){
    int pivot_Index = find_Pivot_Index(ptr,size);
    int element_Index = -1;

    if(key > ptr[size-1]) element_Index = binarySearch(ptr,size,key,0,pivot_Index-1);
    else element_Index = binarySearch(ptr,size,key,pivot_Index,size-1);

    return element_Index;
}

int main(){
    int nums[] = {9,13,16,22,1,2,5,6,8};
    int size = sizeof(nums)/sizeof(nums[0]);

    int key;
    cout<<"Enter the Key to be Searched for: \n";
    cin>>key;

    int element_Index = find_Element(nums,size,key);
    cout<<key<<" is Present at Index: "<<element_Index<<"\n";
}