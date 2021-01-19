#include <stdio.h>
void display(int arr[], int n)
//this is a kind of a traverse operation i.e each and every element is checked
{
    for (int i = 0; i < n; i++)
    {
        printf("the element is %d\n", arr[i]);
    }
}
int main()
{
    int arr[100] = {34, 55, 78, 90};//parameters of size of 4 and capable of 100 elements;
    display(arr, 4); //arguments 

    return 0;
}