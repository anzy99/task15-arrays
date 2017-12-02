#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "Equality.h"

int main(void)
{
 int err=0,countOfElements=0;
 int *array,*answerArray;
 int answer,i;
 err=InputArray("data.txt", &array, &countOfElements);
 if(err!=0)
  printf("Error!!!\n");
 else
  {
	if (countOfElements==0){
		printf("File is empty!!!");
	} else {
		answer=searchArray(array,countOfElements,&answerArray);
		printf("Number of elements in new array: %i \n",answer);
		printf("Output array:\n");
		for(i=0;i<answer;i++){
			printf("%i ",answerArray[i]);
		}
		printf("\n");
		
	}
  }
return err;
}
