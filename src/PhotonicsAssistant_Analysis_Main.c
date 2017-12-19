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
Name: PhotonicsAssistant_Analysis_Main.c
*/

//Include standard library.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>


#include "PhotonicsAssistant_Analysis_DE.h"
#include "FragenSteller.h"




void analysisMain(void)
{
	static frage_t *p_choosenSubject;
	int choice = 0;
	int check = 0;
	
	initDaten();
	do
	{
			
		system("cls");
		printf(
		"Photonics assistant, Analysis 1\n Choose your toppic:\n \n\
		0 - Differential 1\n \
		1 - Differential 2\n \
		2 - Integral 1\n \
		3 - Integral 2\n \
		4 - Kurvendiskussion\n\n \
		5 - Exit Analysis\n");
		
			do
		{
			fflush(stdin);
			check = scanf("%d", &choice);
		  
			  if( check != 1) {
				printf("Intake failed\n");
			  }
			  
		} while( choice > 5 || check != 1 );
		
		system("cls");
			
		  switch(choice) 
		  {
			case DIFFERENTIAL_ONE  : printf("Multiple choice, Differential 1\n \n");	//insert auxiliary function
					  break;
			case DIFFERENTIAL_TWO  : printf("Multiple choice, Differential 2\n \n");	//insert auxiliary function
					  break;
			case INTEGRAL_ONE  :	printf("Multiple choice, Integral 1\n \n");		//insert auxiliary function
						break;
			case INTEGRAL_TWO  : printf("Multiple choice, Integral 2\n \n");			//insert auxiliary function
					  break;
			case KURVENDISKUSSION  : printf("Multiple choice, Kurvendiskussion\n \n");	//insert auxiliary function
					  break;
					  
			case 5  : break;
			default : printf("%d unknown\n", choice);
		  }
		  
		  if(choice != 5)
		  {
			  p_choosenSubject = pointerUebergabe(choice);
			
				for (int frageNr = 0; frageNr<6; frageNr++)
				{
					printf("---------------------------------------------------------------------------\n\n" );
					printf("Frage Nr. %i \n \n" , frageNr+1 );
					nextQuestion(p_choosenSubject, frageNr);
				}
		  }
	} while(choice != 5);
  return;
}	 
