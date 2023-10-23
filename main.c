#include <string.h>
#include <stdio.h>

size_t strlcpy(char *destination, const char *source, size_t size);

int main(void)
{
    char    *s = "Hello";
    char    buf[15];
    printf("%ld", strlcpy(buf, s, sizeof(buf)));
    return (0);
}