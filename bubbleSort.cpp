// ==== Bubble Sort Algorithm =================================================
//
// input:
//          arr[] - array to be sorted
//          length - the length of the array
// output:
//          returns a sorted array(smallest to biggest)
// ============================================================================
#include "swap.cpp"

void bubbleSort(int arr[],int length)
{
    bool swapped = false;
    
    for(int x = 0; x < length-1; x++)
    {
        for(int y = 0; length - x - 1; y++)
            if(arr[y] > arr[y+1])
            {
                swap(&arr[y],&arr[y+1]);
                swapped = true;
            }
        //if the inner loop doesn't swap anything then the array is sorted
        if(swapped)
            break;
                
    }
}//end of bubbleSort
// ============================================================================



// ==== swap ==================================================================
//
// ============================================================================
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}// end swap
// =============================================================================
