// This is a solution of playing with characters
#include <stdio.h>
#include <string.h>

int main()
{
    char c, s[50], sen[100];
    scanf("%c", &c);
    scanf("%s\n", &s);
    scanf("%[^\n]%*sen", &sen);
    printf("%c", c);
    printf("\n%s", &s);
    printf("\n%s", &sen);
    return 0;
}