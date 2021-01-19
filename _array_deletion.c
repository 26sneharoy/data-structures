#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
void deletion(int arr[], int size, int index)
{
    for (int i =index;i<(size-1) ;i++)
    {
        arr[i] = arr[i+1];
        
    }
}
int main()
{
    int arr[100] = {2, 4, 65, 78, 89, 999};
    int index =4;
    display(arr, 6);
    deletion(arr, 6, 3);
    display(arr, 5);

    return 0;
}