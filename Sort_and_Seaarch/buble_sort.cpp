#include <iostream>
using namespace std;
void Swap(int *i, int *j){
    int p = *i;
    *i = *j;
    *j = p;
}

void buble_sort(int *arr, int ln){
    for(int i = 0; i < ln; i++){
        for(int j = 0; j < ln; j++){
            if((arr[i] > arr[j]) && (i < j))Swap(&arr[i], &arr[j]);
        }
    }
}


int main(int argc, char **argv){
    int arr[] = {0, 9, 8, 5, 6, 4, 2, 3};
    buble_sort(arr, 8);
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}