#include<stdio.h>
void array_init(int A[])
//void array_assign(int A[])
//void array_sort(int A[])


int main()
{
    static int A[10];
    array_init(A[]);
    array_assign(A[]);
    array_sort(A[]);


}

void array_init(A[])

{
    int A[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<10;i++)

    {printf("%d\n",a[i]);
}
}
void array_assign(A[])
{
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
        printf("%d\n",A[i]);
    }
}
void array_sort(A[])

{
    num=10;
    printf("Input array is \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", A[i]);
    }
    /*   Bubble sorting begins */
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", A[i]);
    }
}
}
