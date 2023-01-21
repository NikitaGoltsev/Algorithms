#include <iostream>
using namespace std;

void Swap(int *i, int *j){
    int p = *i;
    *i = *j;
    *j = p;
}

void write_to_arr(int *arr, int a, int k, int b){
    int *save_arr = new int[b-a+1];
    int i,j,p;
    i = a;
    j = k+1;
    p = 0;
    //save_arr = new int (b-a+1);
    while(1){
        if((i == k+1) && (j == b+1))break;
        else if(i == k+1){
            save_arr[p] = arr[j];
            j++;
        }/*else if(j == b+1){
            save_arr[p] = arr[i];
            i++;
        }else{
            if(arr[i] <= arr[j]){
                save_arr[p] = arr[i];
                i++;
            }else{
                save_arr[p] = arr[j];
                j++;
            }
        }*/
        else save_arr[p] = arr[i];
        i++;
        //save_arr[p] = arr[j];
        //j++;
        p++;
    }
    //for(int l = 0; l < (b - a + 1); l++)arr[a+l] = save_arr[l];
    delete save_arr;
}


void merge_sort(int *arr, int a, int b){
    int k = (a+b)/2;
    if(a == b){
        //
    }else if((a+1) == b){
        if(arr[a] > arr[b])Swap(&arr[a], &arr[b]);
    }else{
        merge_sort(arr, a, k);
        merge_sort(arr, k+1, b);
        //write_to_arr(arr, a, k, b);
    }
}

int main(int argc, char **argv){
    int arr[] = {0, 9, 8, 5, 6, 4, 2, 3};
    merge_sort(arr, 0, (8-1));
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}