#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "sravanthi";
    int freq[150] = {0};
    int i, len, maxfreq = 0;
    char maxchar;
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

       for (i = 0; i < len; i++)
    {

        if (freq[str[i]] > maxfreq)
        {
            maxfreq = freq[str[i]];
            maxchar = str[i];
        }
    }
    printf("freq=%c and times=%d", maxchar, maxfreq);
}