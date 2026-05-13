#include <stdio.h>


void bubbleSortArray(int A[], int N)
{
    int i, j, temp;

    for(i = 0; i < N - 1; i++)
    {
        for(j = 0; j < N - i - 1; j++)
        {
            if(A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

/* Recursive Function */
int checkTriangle(int A[], int N, int i)
{

    if(i >= N - 2)
    {
        return 0;
    }

    /* Triangle condition */
    if(A[i] + A[i + 1] > A[i + 2])
    {
        return 1;
    }


    return checkTriangle(A, N, i + 1);
}


int triangleRecursive(int A[], int N)
{

    bubbleSortArray(A, N);


    return checkTriangle(A, N, 0);
}

int main_0()
{
    int N;
    int i;

    printf("Recursive Algorithm to Check is there a Triangle \n");
    printf("\nEnter number of Inputs : ");
    scanf("%d", &N);

    int A[N];


    for(i = 0; i < N; i++)
    {
        printf("Enter side %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    int result;

    result = triangleRecursive(A, N);

    if(result == 1)
    {
        printf("\n (1)  Triangle exists\n");
    }
    else
    {
        printf("\n  (0)  Triangle does not exist\n");
    }

    return 0;
}
