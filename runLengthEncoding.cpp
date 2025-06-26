#include "headers.h"

void encode(string &word){
    int count = 1;
   for(int i=0; i<word.length()-1; ++i){
        if(word[i] == word[i+1]){
            ++count;
            continue;
        }
        cout<<word[i]<<count;
        count = 1;
    }
    cout<<word[word.length()-1]<<count<<"\n";
}

int main(){
    string word = "aaaakkkrrrttzwwwwasssskk";
    encode(word);
}