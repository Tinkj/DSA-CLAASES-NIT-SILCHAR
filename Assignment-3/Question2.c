#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void insertionSort(int n, int a[]) {
  int temp, j;
  for (int i = 1; i < n; i++)
  {
    temp = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > temp)
    {
        a[j + 1] = a[j];
        j = j - 1;
    }
    a[j + 1] = temp;
  }
}

int main() {

  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);

   int arr[n];



    for(int i = 0; i<n; i++){
      arr[i] = i;}

    clock_t start, end;
     start = clock();

    insertionSort(n, arr);

     end = clock();

    printf("Total time taken by insertion sort for Best Case is : %f\n", (double)(end - start)/(double)CLOCKS_PER_SEC);

    for (int i = 0; i < n; i++) {
			 int x = rand() % n + 1;
			arr[i] = x;

    }

     start = clock();

    insertionSort(n, arr);

     end = clock();

    printf("Total time taken by insertion sort for Average Case is : %f\n", (double)(end - start)/(double)CLOCKS_PER_SEC);


    for(int i = 0; i<n; i++){
      arr[i] = n-i-1;

    }
     start = clock();

    insertionSort(n, arr);

     end = clock();

    printf("Total time taken by insertion sort for Worst Case is : %f\n\n", (double)(end - start)/(double)CLOCKS_PER_SEC);
  return 0;
}
