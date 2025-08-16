#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the side degree of a trinagle");
    scanf("%d%d%d,&x,&y,&z");
    if (x + y + z == 180)
    {
        printf("A triangle can be formed");
    }
    else
    {
        printf("A triangle can not be formed");
    }

    return 0;
}
