#include "headers.h"

bool is_Anagram(string &word1,string &word2){
    int count_Of_Characters[26] = {0};
    for(int i=0; i<word1.length(); ++i){
        count_Of_Characters[word1[i] - 'a']++;
    }
    for(int i=0; i<word2.length(); ++i){
        count_Of_Characters[word2[i] - 'a']--;
    }

    for(auto &i : count_Of_Characters){
        if(i) return false;
    }
    return true;
}

int main(){
    string word1 = "seduce", word2 = "educes";
    bool anagram = is_Anagram(word1,word2);
    
    if(!anagram) cout<<word1<<" and "<<word2<<" are not an Anagram"<<"\n";
    else cout<<word1<<" and "<<word2<<" are Anagram"<<"\n";
}

