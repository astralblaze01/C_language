// 11장 page 28

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *fname = "grade.txt";
    char names[80];
    int cnt = 0;
    FILE *f = fopen(fname, "w");

    /*
        // fgets(names, 80, stdin);
        // while (!feof(stdin))
        // {
        //     fprintf(f, "%d", ++cnt);
        //     fputs(names, f);
        //     fgets(names, 80, stdin);
        // }
    */

    /*
     while (fgets(names, sizeof(names), stdin) != NULL && names[0] != '\n')
     {
         fprintf(f, "%d ", ++cnt);
         fputs(names, f);
     }
    */

    fclose(f);
    return 0;
}