#include "libft.h"

static unsigned int CountString(const char *s, char c)
{
    int count = 0;
    int isInside = 0;

    while (*s)
    {
        if (*s++ != c)
        {
            if (!isInside)
            {
                count++;
                isInside = 1;
            }
        }
        else
            isInside = 0;
    }
    return (count);
}

static void FreeAll(char **result, unsigned int size)
{
    while (size--)
        free(result[size]);
    free(result);
}

static char *ApplyString(const char *start, const char *end)
{
    int len = end - start;
    char *result = (char *)ft_calloc(len + 1, sizeof(char));
    
    if (!result)
        return (NULL);

    ft_strlcpy(result, start, len + 1);
    return (result);
}

static int DetectString(const char *s, char c, char **result)
{
    int i = 0;
    int isInside = 0;
    const char *start = s;

    while (*s)
    {
        if (*s != c)
        {
            if (!isInside)
            {
                start = s;
                isInside = 1;
            }
        }
        else
        {
            if (isInside)
            {
                result[i] = ApplyString(start, s);
                if (!result[i])
                    return (0);
                i++;
            }
            isInside = 0;
        }
        s++;
    }

    if (isInside)
    {
        result[i] = ApplyString(start, s);
        if (!result[i])
            return (0);
    }
    return (1);
}

char **ft_split(const char *s, char c)
{
    if (!s)
        return NULL;

    unsigned int count = CountString(s, c);
    char **result = (char **)ft_calloc(count + 1, sizeof(char *));

    if (!result)
        return (NULL);

    if (!DetectString(s, c, result))
    {
        FreeAll(result, count);
        return (NULL);
    }

    result[count] = NULL;

    return (result);
}
