#include <stdio.h>


void display(int *A, int m)

{
    printf("the elements are :\n");

    for (int i = 0; i < m; i++)
    {
        printf(" %d ,", A[i]);
    }
    printf("\n");
}


void sortmerge(int A[], int B[], int m, int n)
{
    int i, j, k, C[100];
    i = j = 0;
    k = 0;

    while (i <=(m-1)  && j <= (n-1))
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
          //  printf(" after 1st %d \n ", C[k]);
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
           // printf(" after 2nd %d \n ", C[k]);
            k++;
            j++;
        }
    }
    while (i <= (m-1))
    {
        C[k] = A[i];
       // printf("after 3rd %d \n ", C[k]);
        i++;
        k++;
    }
    while (j <=(n-1) )
    {
        C[k] = B[j];
      //  printf(" after 4th %d \n ", C[k]);
        k++;
        j++;
    }
    printf("the elements in array after sorting : \n");
    int l = (m + n);
    for (k = 0; k < l; k++)
    {
        A[i] = C[k];
        printf("%d , ", A[i]);
    }
    printf("\n");
}
 

int main()
{

    int A[] = {1,3,5,7,9,16,17};
    int B[] = {2, 4,6,8,10,11,12,15,19};

    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    printf("%d ,%d is the size of m and n \n", m, n);
    display(A, m);
    display(B, n);
    sortmerge(A, B, m, n);
    

    return 0;
}