#include <stdio.h>
int bubbleSort(int arr[], int n);
void swap(int* x, int* y);

int main() {
   int arr[] ={97, 16, 45, 63, 13, 22, 7, 58, 72};
    printf( "number of swaps: %d \n" , bubbleSort(arr, sizeof(arr)/sizeof(int)));

}
int bubbleSort(int arr[], int n){
    int numOfSwaps =0;
    for (int i = 0; i < n-1; ++i) {
        for(int j =0; j < n-i; ++j){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                numOfSwaps++;
            }
        }
    }
    return numOfSwaps;
}// end of bubbleSort
void swap(int *x, int *y){
    int temp = *x;
     *x = *y;
     *y = temp;
}//end of swap()

