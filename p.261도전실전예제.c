#include <stdio.h>

int main()
{
    int i = 0, j = 0, num, temp;
    int arr[1001] = {0};

    scanf_s("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}