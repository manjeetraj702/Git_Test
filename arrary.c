#include <stdio.h>
int main()
{
    char arr[] = "this is me";
    int i = 0;
    printf("1.");
    int count =1;
    while (arr[i] != '\0')
    {
        if (arr[i] == ' ')
        {
            printf("\n%d. ",++count);
        }
        else
        {
            printf("%c", arr[i]);
        }

        i++;
    }
    return 0;
}