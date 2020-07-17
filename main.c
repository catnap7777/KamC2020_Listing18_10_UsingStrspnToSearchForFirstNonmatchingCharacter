//Listing 18.10 Seaching for the first nonmatching character with strspn() function; page 472

#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf1[80], buf2[80];
    size_t loc;

    //input the strings

    printf("Enter the string to be searched...");
    gets(buf1);
    printf("Enter the string containing target characters...");
    gets(buf2);

    //perform the search
    loc = strspn(buf1, buf2);

    if(loc == 0)
    {
        printf("\nNo match was found...\n");
    }
    else
    {
        //all the characters match up until you hit position ?
        printf("\nAll the characters match up to position %lu.\n", loc-1);
    }

    return 0;

}
