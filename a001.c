#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[9999];
    while(scanf("%s",a)!=EOF )
    {
    printf("hello, %s\n",a);
    }
    return 0;
}
