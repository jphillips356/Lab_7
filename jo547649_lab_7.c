#include <stdio.h>

void bubbleSortSwap(int array[], int element){
    for(int i = 0; i < element-1; i++){
        int counter = 0; //start the counter for swaps at each index

        for(int j = 0; j < element - 1; j++){
            if(array[j] > array[j+1]){ //if curreent element is greater than next element, increase it
                int swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
                counter++; //increment swap count by one for every incement
            }
        }

        printf("%d ", counter); //print number of swaps at that element
    }
}

int main(){
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int element = sizeof(array)/sizeof(array[0]);
    bubbleSortSwap(array, element);

    return 0;
}

