#include "headers.h"

void reverse_Words(string &ptr,int size){
    int i = 0, j = 0, temp;
    while(j<size){
        while(ptr[j] != ' ' && ptr[j] != '\0') ++j;
        temp = j--;
        while(i<=j){
            swap(ptr[i++],ptr[j--]);
        }
        j = i = temp + 1;
        
    }
    i = 0, j = size-1;
    while(i<=j) swap(ptr[i++],ptr[j--]);
}

int main(){
    string words = "the hotdog is really good or not";
    int size = words.length();

    for(auto &i : words) cout<<i;
    cout<<endl;

    reverse_Words(words,size);

    for(auto &i : words) cout<<i;
    cout<<endl;
}