/* create_list.c - create file 100 lines long  with numbers from 00-99 
   @MarquetteU  - F. Frigo
   COEN 2610
   To compile: cc -g create_list.c -o create_list
   To check the number of lines in file use: `wc -l list.txt`
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fd;
    int i;

    /* Create file */
    fd = fopen("list.txt", "w");
    if(fd == NULL)
    {
        printf("Error!");   
        exit(1);             
    }
    /* Loop to write 100 numbers to the file */
    for( i = 0; i< 100; i++)
    {
        fprintf(fd, "%2.2d\n", i);
    }
    fclose(fd);
    exit(0);
}
