#include <iostream>
void swap(int *f, int *s){
    int t = *f;
    *f = *s;
    *s = t;
}
void print(const int *arr, int length){
    for(int i = 0; i < length;i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void sort(int arr[], int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {6,3,4,2,7,5,1};
    print(arr, 7);
    sort(arr, 7);
    print(arr, 7);
    return  0;
}
