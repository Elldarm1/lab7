#include <stdio.h>

void bubbleSort(int arr[], int n)
{
//innitialize variables 
   int i = 0;
   int j = 0;
   int temp = 0;
   
//set all elements in the swaps array to zero
   
    //iterate through n-1 times
   for (i = 0; i < n-1; i++)
   {
        int count = 0;
        // iterate until n-i-1 times to put biggest number at the end
       for (j = 0; j < n-i-1; j++)
       {
            //compare and swap if needed
           if (arr[j] > arr[j+1])
           {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              count++;
           }
       }
       
       printf("# of swaps for index %d: %d\n", i, count);
   }
   
   
}

//main function for running code
int main()
{
   int arr[] = {97,16,45,63,13,22,7,58,72};
   int n = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr, n);
   return 0;
}