#include "headers.h"

int main(){
    int arr[26]={0};

    string s1="educes",s2="seduce";

    for(int i=0; i<s1.length(); ++i){
        arr[s1[i]-'a']++;
    }
    for(int i=0; i<s2.length(); ++i){
        arr[s2[i]-'a']--;
    }
    bool flag=false;
    for(int i=0; i<26; ++i){
        if(arr[i]!=0) flag=true;
    }
    if(flag) cout<<"Not an Anagram"<<endl;
    else cout<<"Anagram"<<endl;
}