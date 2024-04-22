// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{

    int x = 25, y = 15;
    char a [x];
    char b [y];

    int index, l1, l2;

    printf("\n Enter Main string : ");
    scanf("%s", a);
    printf("\n Enter sub string : ");
    scanf("%s", b);
    printf("\n Enter index of inserting substring : ");
    scanf("%d", &index);

    l1 = strlen(a);
    l2 = strlen(b);

    for (int i = l1; i >= index; i--)
    {
        a[i + l2] = a[i];
    }
    for (int i = 0; i < l2; i++)
    {
        a[index + i] = b[i];
    }

    printf("modified String: %s", a);

    return 0;
}