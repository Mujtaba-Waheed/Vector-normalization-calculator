/*mujtaba Waheed
500900260
CPS 393 assignment 2
*/

/*
CERTIFICATION
I certify that this assignment is entirely my own work.
*/

//Making libraries
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include "assign2funcs.h"
#include "assign2funcs.c"
#define macros
#define exit_code 0

/*
NAME: main()
PURPOSE:
PARAMETERS: NONE
INPUT: NONE
OUTPUT: It returns the values of the correspoing
functions it is calling. Note that these functions
are defined in 'assign2funcs.c'
*/
int main()
{

  int length = 1;


  while(length > 0){
  fscanf(stdin, "%d", &length);

  double array1[length];


   if (length > 0 &&  length <= 9){


        scanSize(array1, length);

        printf("VECTOR: ");
        printff(array1, length);

        printf(" NORMALIZED: ");
        normalize(array1, length);
        printff(array1, length);
        printf("\n");
        bufferreader();
        }

  else if ( length == 0){
        exit_code == 1;
}

  else{
  fprintf(stdout, "BAD INPUT\n");
  bufferreader();
  exit_code == 1;
        }
     }
}


