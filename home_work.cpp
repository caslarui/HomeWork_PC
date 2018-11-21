#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
  

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 


int main()
{
    int *vec;
    int n;
    int l;
    int vec_length = 0;

    cin >> n;
    
    vec = (int *)malloc(sizeof(int));


    for(int i = 1; i <= n; i++)
    {
        cout << 1;
        cin >> l;

        vec = (int *)realloc(vec, sizeof(int) * l);
        if (vec != NULL)
            for(int k = vec_length; k < vec_length + l; k++)
                cin >> vec[k];
        else
            return (0);
        vec_length += l;
    }

    selectionSort(vec, vec_length);
    printArray(vec, vec_length);

    free(vec);
    vec = NULL;
    return(0);
}