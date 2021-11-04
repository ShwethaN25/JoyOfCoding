#include <stdio.h>
#define MAX_CHAR 255
int main()
{
    int i,j,max,temp;
	char s[100],freq[MAX_CHAR];
    printf("Enter the string: ");
    gets(s);
    for(i=0; i<MAX_CHAR; i++)
        freq[i] = 0;
    i=0;
    while(s[i]!='\0')
    {
        temp = (int)s[i];
        freq[temp] += 1;
        i++;
    }
    max = 0;
    for(i=0; i<MAX_CHAR; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }
    printf("The maximum occurring character is '%c' which occurs %d times.", (char)max, freq[max]);
    return 0;
}