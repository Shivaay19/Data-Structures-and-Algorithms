#include "headers.h"

void product_except_self(int* p_arr,int size){
    long long int product_array=1;
    for(int i=0; i<size; ++i){
        product_array *= p_arr[i];
    }
    for(int i=0; i<size; ++i){
        cout<<product_array/p_arr[i]<<" ";
    }
    cout<<"\n";
}
void print_array(int* p_arr,int size){
    for(int i=0; i<size; ++i){
        cout<<*(p_arr+i)<<" ";
    }
    cout<<"\n";
}
int main(){
    int nums[] = {3,6,4,10,5,2,8};
    int size = sizeof(nums)/sizeof(nums[0]);
    print_array(nums,5);
    product_except_self(nums,5);
}