/*Photonics assistant, analysis 1
Autor: 
	
	Nico		:Management			Dif.1
	Martina		:Main				Dif.2
	Nuria		:Dateneingabe		Int1.
	Fabian		:nextQuestion();	Int1.
	Martino		:nextQuestion();	Kurve1.
	
Version 0.1
Date:16.12.17 
Revision:
-
Task:
Create assistant - multiple choice with answers

Question:

Name: Main.c
*/

//Include standard library.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>

int main(void)
{

	typedef enum{
	DIFFEENTIAL,
	INTEGRAL,
	KURVENDISKUSSION
	}themen_t;

	printf(
	"Photonics assistant, Analysis 1\n\n \ 
	Choose your toppic:\n\n \
	0 - Differential 1\n \
	1 - Differential 2\n \
	2 - Integral 1\n \
	3 - Integral 2\n \
	4 - Integral 2\n \
	5 - Kurvendiskussion\n");
	
	int check = scanf("%d", &choice);
  
	  if( check != 1) {
		printf("Intake failed\n");
		return 1;
	  }
	 
	  switch(choice) {
		case 1  : printf("Multiple choice, Differential 1\n");	//insert auxiliary function
				  break;
		case 2  : printf("Multiple choice, Differential 2\n");	//insert auxiliary function
				  break;
		case 3  : printf("Multiple choice, Integral 1\n");		//insert auxiliary function
				  break;
		case 4  : printf("Multiple choice, Integral 2\n");		//insert auxiliary function
				  break;
		case 5  : printf("Multiple choice, Kurvendiskussion\n");	//insert auxiliary function
				  break;
		default : printf("%d unknown\n", choice);
	  }
  return 0;
}	 
	  
	system("PAUSE");

	return 0;
}


main:


