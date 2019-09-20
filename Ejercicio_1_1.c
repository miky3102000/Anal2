#include <stdlib.h>
#include <stdio.h>

#include "permutaciones.h"

int main(int argc, char const *argv[]) {
  int min, max, num, i;
  FILE *file=NULL;

  if (argc != 4)
    fprintf(stderr, "Error en los parametros de entrada:\n\n");

  min = atoi (argv[1]);
  max = atoi  (argv[2]);
  num = atoi (argv[3]);
  file = fopen(argv[4], "w");
  if(file == NULL){
    fprintf(stderr, "Error abriendo archivo:\n\n");
  }

  for (i=0; i<num; i++){
    fprintf(file, "%d", aleat_num(min, max));
    fprintf(file, "\n");
  }

  fclose(file);
  return 0;
}
