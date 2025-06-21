#include "headers.h"

//Given two binary strings A and B of equal lengths, print a string that is the XOR of Binary Strings A and B
bool find_XOR_in_Place(string &binary_1, string &binary_2){

    if(binary_1.length() != binary_2.length()){
        return false; 
    }

    for(int i=0; i<binary_1.length(); ++i){
        if(binary_1[i] != binary_2[i]) binary_1[i] = '1';
        else binary_1[i] = '0';
    }
    return true;
}
int main(){
    string binary_1 = "10010110";
    string binary_2 = "01011011";

    bool possible = find_XOR_in_Place(binary_1,binary_2);

    if(possible) cout<<"XOR of the two Binary Strings is: "<<binary_1<<"\n";
    else cout<<"The Input Strings differ in Length\n";
}
