#include <iostream>
using namespace std;

int mx_func(int *n, int *m){
    if(*m > *n){
        *n = *m;
    }
    return *n;
}

int* data_creater(int *n){
    int *new_arr;
    new_arr = new int[*n];
    return new_arr;
}

void clear_from_data(int *arr){
    delete []arr;
}

int str_algorithm(int *cm_mas, int *out_ms, int n){
    int ans = 0;
    int now = 0;
    int i = 0;
    int j = 0;
    while(1){
        if(cm_mas[i] < out_ms[j]){
            now += 1;
            i++;
            mx_func(&ans, &now);
        }else{
            now -= 1;
            j++;
        }

        if(i == n){
            break;
        }
    }
    return ans;

}

int main(int srgc, char *argv[]){
    // That algoritm is too simple but at the same time effective
    // We use it to count max or min paple at restarunt per day by time( that's just an example)
    int n;  // peaple
    cin >> n;
    int *cm_arr = data_creater(&n);
    int *gv_arr = data_creater(&n);
    
    // also we need to use sort arrays
    
    //

    clear_from_data(cm_arr);
    clear_from_data(gv_arr);
    return 0;
}