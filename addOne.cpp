#include "headers.h"

//This function will do fine because we are not forming the number from the digits
void increment_in_array(int* p_digits,int size){

    int index = size-1, num;
    int carry = 0;

    do{
        num = p_digits[index];
        if(num==9){
            p_digits[index--] = 0;
            carry = 1;
        }
        else{
            p_digits[index]++;
            carry=0;
        }
    }while(carry && index>=0);

    if(index<0 && carry) p_digits[0] = 10;
    
}
int main(){
    int digits[] = {9,9,2,4,8,1,4,8,3,5,5,6,1,4,2,3};
    int size = sizeof(digits)/sizeof(digits[0]);

    increment_in_array(digits,size);
    for(auto &i : digits) cout<<i;
    cout<<"\n";
}