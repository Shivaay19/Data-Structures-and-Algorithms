#include "headers.h"

void move_zeroes_to_end(int* p_array,int size,int* p_temp){
    int index=0;
    for(int i=0; i<size; ++i){
        if(p_array[i]!=0){
            p_temp[index]=p_array[i];
            index++;
        }
    }
    for(int i=index; i<size; ++i){
        p_temp[i] = 0;
    }
}

void move_zeroes_to_end(int* p_array,int size){
    int index = 0;
    for(int i=0; i<size; ++i){
        if(p_array[i]){
            p_array[index++] = p_array[i];
        }
    }
    for(int i=index; i<size; ++i){
        p_array[i] = 0;
    }
}

void move_zeroes_to_end_1(int* p_arr,int size){
    int index = 0;
    for(int i=0; i<size; ++i){
        if(p_arr[i]){
            swap(p_arr[i],p_arr[index]);
            index++;
        }
    }
}
void print_array(int* p_arr,int size){
    for(int i=0; i<size; ++i){
        cout<<p_arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int array[] = {1,2,0,4,3,0,5,0};
    int size = sizeof(array)/sizeof(array[0]);
    int* p_arr = new int[size];
    print_array(array,size);
    move_zeroes_to_end(array,size,p_arr);
    print_array(p_arr,size);

    cout<<"Moving the Zeroes in-Place: \n";
    print_array(array,size);
    move_zeroes_to_end(array,size);
    print_array(array,size);
    
    cout<<"New Array\n";
    int new_array[] = {11,23,0,44,0,39,0,52,0,100};
    int newSize = sizeof(new_array)/sizeof(new_array[0]);
    print_array(new_array,newSize);
    move_zeroes_to_end_1(new_array,newSize);
    print_array(new_array,newSize);

}