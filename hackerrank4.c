#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[1000],n;
    int i,sum =0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d ",&arr[i]);

    }
    for(i=1;i<=n;i++)
    {
        sum = sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
