#include <iostream>
using namespace std;

void sort_by_the_end(int n, int *mas1, int *mas2){
    //Here I use buble sort, but i prefer to write merge sort
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((mas2[i] > mas2[j]) && (i < j)){
                Swap(&mas1[i], &mas1[j]);
                Swap(&mas2[i], &mas2[j]);
            }
        }
    }
}

void Swap(int *i, int *j){
    int p = *i;
    *i = *j;
    *j = p;
}

int* data_creater(int *n){
    int *new_arr;
    new_arr = new int[*n];
    return new_arr;
}

void clear_from_data(int *arr){
    delete []arr;
}

void Input_Func(int *arr, int n){
    int elem;
    for(int i = 0; i < n; i++){
        cin >> elem;
        arr[i] = elem;
    }
}

int schedule_func(int n, int *cm_mas, int *gv_mas){
    int cnt = 0;
    // I need to sort arrays by the end
    sort_by_the_end(n, cm_mas, gv_mas);
    //
    //After that I just gona count 
}

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    int *cm_arr = data_creater(&n);
    int *gv_arr = data_creater(&n);
    Input_Func(cm_arr, n);
    Input_Func(gv_arr, n);


    // Clear from data
    clear_from_data(cm_arr);
    clear_from_data(gv_arr);
    return 0;
}