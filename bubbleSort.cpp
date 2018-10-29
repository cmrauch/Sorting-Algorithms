// ==== Bubble Sort Iterative Algorithm =================================================
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
    
    for(int x = 0; x < length-1; x++)
        for(int y = 0; y < length - x - 1; y++)
            if(arr[y] > arr[y+1])
                swap(&arr[y],&arr[y+1]);
    
}//end of bubbleSort
// ============================================================================


// ==== Bubble Sort Recursive Algorithm =======================================
// 
// ============================================================================
void bubbleSort(int arr[], int length)
{
    //base case
    if(lenght == 1)
        return;
    
    //moves the largest element to the back of the array
    for(int x = 0; x < length-1; x++)
        if(arr[x] > arr[x+1])
            swap(&arr[x],&arr[x+1]);
    
    //largest element stays where it is
    //repeat
    bubbleSort(arr,length-1);     
}//end of bubble sort
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
