#include "headers.h"

// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/killer-monsters-0b5cb283/

int main() {
	int testCases;
    cin>>testCases;

    while(testCases--){
        int monsters_Count;
        scanf("%d",&monsters_Count);

        stack<int> strength_Of_Monsters;
        vector<int> alive_Monsters;
        for(int i=0; i<monsters_Count; ++i){
            int strength_i;
            scanf("%d", &strength_i);

            if(strength_Of_Monsters.empty() || strength_Of_Monsters.top()>strength_i) strength_Of_Monsters.push(strength_i);
            else{
                while(!strength_Of_Monsters.empty() && strength_Of_Monsters.top() <= strength_i) strength_Of_Monsters.pop();
                strength_Of_Monsters.push(strength_i);
            }
            printf("%d",strength_Of_Monsters.size());
            printf(" ");
        }
        printf("\n");
    }
}