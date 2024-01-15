#include <stdio.h>

int main()
{
        int i;
        char str[1024];

        printf("Enter text: ");
        scanf("%*s", &str);
        printf("%s\n", str);

        printf("Enter interger: ");
        scanf("%*d", &i);
        printf("%d\n", i);
        return 0;
}
