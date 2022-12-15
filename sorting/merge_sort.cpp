#include <iostream>

void print(int *arr, int length);
void merge(int l, const int * left, int r, const int * right, int *arr, int length);

void sort(int *arr, int length){
    if (length < 2) return;

    int l = length / 2;
    int r = length - l;

    int * left = new int[l];
    for(int i =0; i< l;i++) left[i] = arr[i];

    int *right = new int[r];
    for(int i = l; i < length; i++) right[i-l] = arr[i];

//    print(left, l);
//    print(right, r);

    sort(left, l);
    sort(right, r);

    merge(l, left, r, right, arr, length);

    free(left), free(right);

}



void print(int *arr, int length) {
    for(int i = 0; i < length;i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void merge(int l, const int *left, int r, const int *right, int *arr, int length) {

    int i = 0, j = 0, k = 0;
    while (i < l && j < r && k < length){
        if(left[i] < right[j]) arr[k++] = left[i++];
        else arr[k++] = right[j++];
    }
    while (i < l && k < length){
        arr[k++] = left[i++];
    }
    while (j < r && k < length){
        arr[k++] = right[j++];
    }
}


int main(){
    int arr[] = {6,3,4,2,7,5,1};
    print(arr, 7);
    sort(arr, 7);
    print(arr, 7);
    return 0;
}

