#include "headers.h"

//Find the first (leftmost) and last (rightmost) Occurence of an element in a Sorted array
//Also find the total Occurences of that particular element in the array

int first_Occurence(int* ptr,int size,int key){
    int low = 0, high = size-1;
    int mid = low + (high-low)/2;
    int first_index = -1;

    while(low<=high){
        if(ptr[mid] > key) high = mid-1;
        else if(ptr[mid] < key) low = mid+1;
        else{
            first_index = mid;
            high = mid-1;
        }
        mid = low + (high-low)/2;
    }
    return first_index;
}

int last_Occurence(int* ptr,int size,int key){
    int low = 0, high = size-1;
    int mid = low + (high-low)/2;
    int last_index = -1;

    while(low<=high){
        if(ptr[mid] > key) high = mid-1;
        else if(ptr[mid] < key) low = mid+1;
        else{
            last_index = mid;
            low = mid+1;
        }
        mid = low + (high-low)/2;
    }
    return last_index;

}
int total_Occurences(int* ptr,int size,int key){
    pair<int,int> Occurence_indices;
    Occurence_indices.first = first_Occurence(ptr,size,key);
    Occurence_indices.second = last_Occurence(ptr,size,key);

    if(Occurence_indices.first == -1) return 0;

    return Occurence_indices.second - Occurence_indices.first + 1;

}
int main(){
    int nums[] = {1,2,2,5,6,7,7,7,8,9,9};
    int size = sizeof(nums)/sizeof(nums[0]);
    int key;
    cout<<"Enter the element to be Searched for: \n";
    cin>>key;
 
    pair<int,int> Occurence_indices;
    Occurence_indices.first = first_Occurence(nums,size,key);
    Occurence_indices.second = last_Occurence(nums,size,key);

    
    cout<<"First and Last Occurence of "<<key<<" is at indices "<<Occurence_indices.first<<" and "<<Occurence_indices.second<<" respectively\n";
    cout<<"The Number of times "<<key<<" Occurs is: "<<total_Occurences(nums,size,key)<<"\n";

}