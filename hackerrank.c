#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int ans;
    if(a>b && a>c && a>d)
        return ans = a;
    if(b>c && b>d)
        return ans = b;
    if(c>d)
        return ans = c;
    else
        return ans =d;
    return ans;

}


int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
