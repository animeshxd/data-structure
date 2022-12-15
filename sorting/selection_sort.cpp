#include <iostream>

void swap(int *f, int *s){
    int t = *f;
    *f = *s;
    *s = t;
}

void sort(int *arr, size_t length){
    int *f = &arr[0];
    for(int i = 0; i < length; i++){
       for(int j = i; j < length; j++){
           if(arr[j] < *f){
               swap(&arr[j], f);
           }
       }
    }
}


void print(int arr[], int length){
    for(int i = 0; i < length;i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}
int main()
{
    int arr[] = {2,3,4,1,5,7,8};
    print(arr, 7);
    sort(arr, 7);
    print(arr,7);
    return 0;
}
