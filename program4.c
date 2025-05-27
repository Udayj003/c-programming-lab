#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) /2;

        //Check if the target is at the middle
        if (arr[mid] == target) {
            return mid; //Target found at index mid
        }
        else if (arr[mid] < target) {
            low = mid + 1; //Search the right half
        }
        else {
            high = mid - 1; //Search the left half
        }
    
    }
    return -1;
}

void main() {
    int arr[100], n, target, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted integers \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target value to search: ");
    scanf("%d", &target);

    //Perform the binary search
    result = binarySearch(arr, n, target);

    //Display the result
    if (result != -1) {
        printf("Target value %d found at index %d\n", target, result);
    }
}