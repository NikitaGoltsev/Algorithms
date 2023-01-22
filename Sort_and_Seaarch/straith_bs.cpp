#include <iostream>
using namespace std;


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

int binary_search(int *arr, int n){
    // That's anower one algorithm of binary search 
    int ans = -1;
    int s;
    cin >> s;
    // Step on p positions
    // k is place, there we gona check elem
    int p = n;
    int k = 0;
    int a = 0, b = k-1;
    while(1){
        p /= 2;
        k += p;
        b = k - 1;
        if(arr[k] == s){
            ans = k + 1;
            break;
        }
        if(arr[k] > s){
            for(int i = a; i <= b; i++){
                if(arr[i] == s){
                    ans = i + 1;
                    break;
                }
            }
        }else{
            a = k;
        }
    }

    return ans;
}

int main(int argc, char *argv[]){
    // array of len n and count of search operations
    int *array;
    int n,m;
    cin >> n >> m;
    array = data_creater(&n);
    Input_Func(array, n);
    // Binary search works only with sort mases
    // So we need sort it first of all
    
    //
    //FOr m times I use binary search
    for(int i = 0; i < m; i++){
        int res = binary_search(array, n);
        cout << res << '\n';
    }
    //
    clear_from_data(array);
    return 0;
}