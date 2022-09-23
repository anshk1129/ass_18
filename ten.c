#include <stdio.h>
#include <string.h>
void cal_freq(char arr[], int n);
void cal(char str[]);
int main()
{
    char str[100];
    printf("Enter a string\n");
    gets(str);
    cal(str);
    return 0;
}
void cal(char str[])
{
    char array[100];
    strcpy(array, str);
    int n = strlen(array);
    char swap;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
    cal_freq(array, n);
}

void cal_freq(char arr[], int n)
{
    int i = 0, j = 1, count = 1;

    while (arr[i])
    {
        if (arr[i] == arr[j] && j < n)
            count++;
        else
        {
            if(arr[i]!=' ')
            printf("%c occurs %d times\n", arr[i], count);
            count = 1;
        }
        i++;
        j++;
    }
}