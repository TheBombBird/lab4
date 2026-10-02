#include <stdio.h>
#include <stdlib.h>

extern int array[50];

extern long array_sum(int *array, int index);

// sum = 5559

int main(int argc, char *argv[]){
  int array[50];

  FILE *data;
  data = fopen(argv[1],"r");

  int index = 0;
  fscanf(data,"%d", &index);

  int value = 0;
  int sum = 0;
  for(int i = 0; i < index; i++){
    
    fscanf(data,"%d",&value);
    array[i] = value;  
  }

  printf("Total sum: %ld\n",array_sum(array,index));
  

  
}


