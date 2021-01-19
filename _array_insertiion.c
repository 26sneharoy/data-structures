#include <stdio.h>
void display(int arr[], int size)
//code for traverse operation;
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
int insertion(int size, int capacity, int index, int arr[], int element)
//code for insertion;
{
    if (size >= capacity)
    {
        printf("******ERROR*****\n");
        return 1; //false condition;
    }
    else
    {
        for (int i = (size - 1); i >= index; i--) //here size is decreased by 1; since index starts from 0;
        {
            arr[i + 1] = arr[i];
 // creating places of the value by shifting the places;
        }
        arr[index] = element; // placing the value of element in the index as prescribed ;
        return 0;             //return true condition;
    }
}
int main()
{
    int arr[100] = {23, 45, 68, 789, 890};
    display(arr, 5);              //passed the arguments as required parameters;
    insertion(5, 100, 3, arr, 56); //passed the arguments as required parameters;
    display(arr, 6);              //passed the arguments as required parameters;
    return 0;
}