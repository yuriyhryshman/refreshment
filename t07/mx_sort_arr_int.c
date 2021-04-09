#include <stdio.h>

void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1; j++) {
        int a = 0;
            if (arr[j] > arr[j+1]) {
                a = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = a;
            }
        }
    }
}

/*
int main() {
    int arr[7] = {3, 55, -11, 1, 0, 4, 22};
    mx_sort_arr_int(arr, 7);
    for(int y = 0 ; y < 7; y++)
    printf("%d   ", arr[y]);
}
*/
