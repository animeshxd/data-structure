#include <iostream>

int swap(int *f, int *s){
    int t = *f;
    *f = *s;
    *s = t;
}

int partition(int *arr, int start, int end){
    int p = arr[end];
    int px = start;
    for(int i = start; i < end; i++){
        if(arr[i] <= p){
            swap(&arr[i], &arr[px++]);
        }
    }
    swap(&arr[px], &arr[end]);
    return px;

}

void sort(int *arr, int start, int end){
    if(start >= end) return;
    int px = partition(arr, start, end);
    sort(arr, start, px-1);
    sort(arr, px+1, end);
}

void print(int *arr, int length) {
    for(int i = 0; i < length;i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

int main(){
    int arr[] = {6,3,4,2,7,5,1};
    print(arr, 7);
    sort(arr, 0, 7);
    print(arr, 7);
    return 0;
}