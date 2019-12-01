/* POINTERS, written 20 May 1992 by Peter D. Hipson */
/* Demonstration of pointers and indirection. */
#include <stdio.h> // Make includes first part of file
#include <string.h> // For string functions.

int main(void); // Define main() and the fact that this program doesn’t
// use any passed parameters.

int main() {
    int nCounter = 33;
    int *pnCounter = (int *)NULL;
    char szSaying[] = {"Firestone’s Law of Forecasting:\n"
                        " Chicken Little only has to be right once.\n\n"};
    //printf(szSaying);
    char *pszSaying = (char *)NULL;
    printf("hello wolrd\n");
    printf("%d",nCounter);
    printf("\n");
    pnCounter = &nCounter;
    pszSaying = szSaying;
    printf("nCounter | pnCounter | *(pnCounter) | pszSaying | szSaying[0] | szSaying[0-20]\n");

    // printf("%8d | %8p | %8d | %8p \n ",
    //     nCounter,
    //     pnCounter,
    //     *(pnCounter),
    //     pszSaying);

    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n ",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);

    pszSaying = (char *) &szSaying;

    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n ",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);
    
    pszSaying = &szSaying[0];
    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n ",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);
    *(pnCounter) = 1234;
    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n ",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);
/*
        // | pnCounter | *(pnCounter) | pszSaying | "
        //"szSaying[0]\n");
        // | szSaying[0-20]\n");


//    printf("pnCounter = &nCounter; \n");
    pnCounter = &nCounter;

    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);

    printf("pszSaying = szSaying; \n");

    pszSaying = szSaying;

    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);

    printf("pszSaying = &szSaying; \n");
    pszSaying = &szSaying; // Different levels of indirection!

    // A cast (char *) will work here.
    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);

    printf("pszSaying = &szSaying[0]; \n");

    pszSaying = &szSaying[0];

    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);

    printf("*(pnCounter) = 1234; \n");

    *(pnCounter) = 1234;
    printf("%8d | %8p | %8d | %8p | %c | %20.20s\n",
        nCounter,
        pnCounter,
        *(pnCounter),
        pszSaying,
        *(pszSaying),
        szSaying);
*/
    return (0);
}