#include <iostream>

void print(int arr[], int length){
    for(int i = 0; i < length;i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void sort(int *arr, int length){
    for(int i =0; i < length; i++){
        int v = arr[i];
        int t = i;
        while(v < arr[t - 1] && t > 0){
            arr[t] = arr[t - 1];
            t--;
        }
        arr[t] = v;
    }
}

int main(){
    int arr[] = {6,3,4,2,7,5,1};
    print(arr, 7);
    sort(arr, 7);
    print(arr, 7);
    return 0;
}
