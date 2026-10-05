#include <stdio.h>

/* 冒泡排序：每轮把相邻逆序元素交换，将最大值冒泡到末尾 */
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;                 /* 本轮的交换标志，用于提前退出 */
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {   /* 相邻元素逆序则交换 */
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;                       /* 本轮无交换，说明已有序，提前结束 */
        }
    }
}

/* 打印数组 */
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("排序前: ");
    print_array(arr, n);

    bubble_sort(arr, n);

    printf("排序后: ");
    print_array(arr, n);

    return 0;
}
