#include <stdio.h>

int BinarySearch(int arr[], int len, int target){
    int first = 0;
    int last = len-1;
    int mid;

    while(first < last){
        mid = (first + last) / 2;

        if(arr[mid] == target)
            return mid;

        if(arr[mid] > target)
            last = mid - 1;
        else
            first = mid + 1;
    }

    return -1;
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 8, 9};
    int idx = BinarySearch(arr, 6, 1);

    if(idx == -1)
        printf("탐색 실패\n");
    else
        printf("타켓 저장 인덱스 %d \n", idx);

    return 0;
}
