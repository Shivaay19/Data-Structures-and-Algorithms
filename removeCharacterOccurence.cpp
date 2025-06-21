#include "headers.h"

//Given a String and a character, remove all the Occurences of that character from the String
void remove_Character(string &word,char letter){

    string temp_Word = "";
    for(int j=0; j<word.length(); ++j){
        if(word[j] != letter) temp_Word.push_back(word[j]);
    }
    word = temp_Word;
}

void remove_Character_in_Place(string &word,char letter){
    int j = 0;
    for(int i=0; i<word.length(); ++i){
        if(word[i] != letter) word[j++] = word[i];
    }
    while(j<word.length()) word[j++] = '\0';
}
int main(){

    string word = "supercalifragilisticexpialidocious";
    char letter = 'i';

    cout<<word<<"\n";
    remove_Character_in_Place(word,letter);
    cout<<word<<"\n\n";

    string word_1 = "supercalifragilisticexpialidocious";
    char letter_1 = 'i';

    cout<<word_1<<"\n";
    remove_Character(word_1,letter_1);
    cout<<word_1<<"\n\n";
}