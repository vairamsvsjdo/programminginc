/* NUMWORD, written 20 May 1992 by Peter D. Hipson */
/* Program to count words in sentences. */
#include <stdio.h> // Make includes first part of file
#include <string.h> // For string functions
#define TRUE 1
#define FALSE 0
int main(void); // Define main() and the fact that this program doesn’t
// use any passed parameters.
int NumberWords(char * pString);
#define BIGGEST_LINE 256 /* The biggest line readable from keyboard */
/* Though these variables are defined as external, they can be
* defined inside the function or be allocated dynamically,
* depending on the program’s needs and the amount of memory available */
char szInput[BIGGEST_LINE];
int main()
{
    int i;
    printf(
    "Enter lines, when last one is entered\n"
    "provide a End-Of-File (ctrl-Z on most systems)\n"
    "to end the program.\n\n");
    while (gets(szInput))
    {
        //Pointers and Indirection
        printf("Words = %2d ‘%.500s’\n",
        NumberWords(szInput),
        szInput);
    }

    printf("\n");
    return (0);
}

int NumberWords(char szString[])
{
    int i;
    int nBlank = TRUE;
    int nCount = 0;
    
    for (i = 0; szString[i]; i++)
    {
        if (szString[i] != ' ')
        {
            if (nBlank)
            {
                ++nCount;
            }
            nBlank = FALSE;
        }
        else
        {
            nBlank = TRUE;
        }
    }
    return(nCount);
}
