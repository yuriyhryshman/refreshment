#include <stdio.h>

static int abs(int n) {
    return n < 0 ? -1 * n : n;
}


static int mx_strcmp(const char *s1, const char *s2) {
    int max = 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (abs(s1[i] - s2[i]) > abs(max)) max = s1[i] - s2[i];
    }
    return max;
}

int mx_bubble_sort(char **arr, int size) {
    int count = 0;
    char *a;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ( mx_strcmp(arr[i], arr[j]) > 0) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
                count++;
            }
        }
    }
    return count;
}

/*
int main() {
    char *arr[]= {"abc", "xyz", "ghi", "def"};
    printf("%d", mx_bubble_sort(arr, 4));
}
*/

