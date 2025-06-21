#include "headers.h"

//Given a string S of alphabets and an integer k, perform a mirror transformation on the substring starting from the k-th position to the end of the string

void mirror_String(string &word,int k){
    for(int i=k-1; i<word.length(); ++i){
        if(word[i]>='a' && word[i]<='z') word[i] = 219 - word[i];
        else word[i] = 155 - word[i];
    }
}

int main(){

    string word;
    cout<<"Enter the String\n";
    cin>>word;

    int k;
    cout<<"Enter the Position from where the String is to be Mirrored\n";
    cin>>k;

    cout<<"\n";
    cout<<"String before Transformation: "<<word<<"\n\n";
    mirror_String(word,k);
    cout<<"String after Transformation: "<<word<<"\n\n";
}