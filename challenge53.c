
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sequenceSize;
    int prev, current;
    int isAscending = 1;

    printf("Enter the sequence size: ");
    scanf("%d", &sequenceSize);

    for (i = 1; i <= sequenceSize; i++)
    {
        prev = current;
        printf("Enter the value: ");
        scanf("%d", &current);

        if (prev > current)
            isAscending = 0;
    }

    if (isAscending == 1)
        printf("\nResult: Very Ascending!");
    else
        printf("\nResult: Not Ascending!");

    return 0;
}
