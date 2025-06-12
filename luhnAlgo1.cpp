#include<iostream>
#include<string>

using namespace std;

int evenDigitSum(string testNum);
int oddDigitSum(string testNum);

int main(){
    string testNum;
    cout<<"Enter A Number: ";
    cin>>testNum;

    int sum = evenDigitSum(testNum) + oddDigitSum(testNum);
    if(sum%10) cout<<"# is not Valid"<<"\n";
    else cout<<"# is Valid"<<"\n";
}

int evenDigitSum(string testNum){
    int evenSum=0,digit;
    for(int i = testNum.length()-2; i>=0; i-=2){
        digit = (testNum[i] - 48)*2;
        if(digit>9){
            evenSum += digit % 10;
            digit /= 10;
            evenSum += digit;
        }
        else evenSum += digit;
    }
    return evenSum;
}
int oddDigitSum(string testNum){
    int oddSum = 0;
    for(int i = testNum.length() - 1; i>=0; i-=2){
        oddSum += testNum[i] - 48;
    }
    return oddSum;
}