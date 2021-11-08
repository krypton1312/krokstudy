#include <stdio.h>
#include <string.h>
int k, i, l;
bool found;
char s[100];
void main()
{
    puts("Input string");
    gets_s(s);
    l = strlen(s);

    found = false;
    i = 0;

    while ((i < l) && !found)
    {
        if (s[i] == 'o')
        {
            found = true;
            k = i;
        }
        i++;
    }
    if (found)
    {
        printf("Yes, index of character 'o'  %d", k);
    }
    else
    {
        puts("Ні");
    }
    getchar();
}
