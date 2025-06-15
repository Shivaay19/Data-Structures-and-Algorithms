#include <iostream>
#include<cmath>

using namespace std;

bool valid(int arr[]){
    bool flag=true;

    for(int i=0; i<9; ++i){
        if(arr[i]!=(-1)){
            flag=false;
            break;
        }
    }
    return flag;
}

void initialize(int arr[]){
    for(int i=0; i<9; ++i){
        arr[i]=0;
    }
}

int main() {

    int sudoku [9][9];

    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j){
            cin>>sudoku[i][j];
        }
    }
    
    int validRows=0,validColumns=0,validGrids=0;

    int appeared[9]={0};
    for(int i=0; i<9; ++i){
        initialize(appeared);
        for(int j=0; j<9; ++j){
            appeared[sudoku[i][j]-1]--;
        }
        if(valid(appeared)) validRows++;
    }
    
    initialize(appeared);
    
    for(int i=0; i<9; ++i){
        initialize(appeared);
        for(int j=0; j<9; ++j){
            appeared[sudoku[j][i]-1]--;
        }
        if(valid(appeared)) validColumns++;
    }
    

    initialize(appeared);
    
    for(int rows=0; rows<9; rows+=3){
        for(int col=0; col<9; col+=3){
            initialize(appeared);
            for(int i=rows; i<rows+3; ++i ){
                for(int j=col; j<col+3; ++j){
                    appeared[sudoku[i][j]-1]--;
                }
            }
            if(valid(appeared)) validGrids++;
        }
    }
    
    cout<<validColumns+validGrids+validRows<<"\n";


}