/* PointerFunktion
Autor: Nico Zuber
Version: 0.1.2.4
Datum: 27.11.2017
*/
HAAAALLLOOOOO
// Includes
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Typdef --------------------------------------------------------------------------------------
 typedef enum
 {
	 STRING,

 } Inputs_t;
 
 typedef struct person
	{
		char vorname[20];
		char nachname[20];
		char strasse[20];
		int hausNr;
		char ort[20];
		int plz;
		struct person * next;
	}person_t;

// Funktionsprototypen --------------------------------------------------------------------------
void addPerson(person_t *firstPerson);
void printPerson(person_t *firstPerson);

// Main------------------------------------------------------------------------------------------
int main()
{
	// Var. def. --------------------------------------------------------------------------------
	char input = 0;
	bool inputSuccessful = false;
	bool exit = false;
	
	person_t *firstPerson = NULL;
	firstPerson = malloc(sizeof(person_t));
	if (firstPerson == NULL)  {
		return 1;
	}	
	
	firstPerson->next = NULL;
	
	
	
	//Run ---------------------------------------------------------------------------------------
	while (exit == false)
	{
		inputSuccessful = false;
		printf("   ================================== \n");
		printf("              Adressbuch \n");
		printf("   ================================== \n");
		printf("    Kontakt eintragen: e \n");
		printf("    Kontakt abrufen:   a \n");
		printf("    Programm beenden:  c \n");
		printf("\n");
		printf("    Bitte waehlen: ");
		
		
		while(inputSuccessful == false)
		{
			fflush(stdin);
			scanf("%c",&input);
			
			if( input == 'e' || input == 'E')
			{
				inputSuccessful = true;
				printf("   ---------------------------------- \n");
				addPerson(firstPerson);
			}	
			else if(input == 'a' || input == 'A')
			{
				inputSuccessful = true;
				printf("   ---------------------------------- \n");
				printPerson(firstPerson);
			}
			else if(input == 'c' || input == 'C')
			{
				inputSuccessful = true;
				printf("   ---------------------------------- \n");
				exit = true;
			}
			else
			{
				printf("    Eingabe nicht erfolgreich, erneut versuchen:");
			}
		}
	}
	
	return 0;
} // Main end -----------------------------------------------------------------------------------

// funktionen------------------------------------------------------------------------------------
void addPerson (person_t *firstPerson)
{
	int personenNr = 1;
	person_t *current = firstPerson; // set the current element as the first.
	while (current->next != NULL)// search until we are in the last element
	{
		current = current->next; //  set the current element to the pointer of the next one.
		personenNr++;
	}
	
	// now add a new element
	current->next = malloc(sizeof(person_t)); // allocate memory for an additional element
	// and write its adress into the next element member of the current element.
	current = current->next; // move to the newly created element
	current->next = NULL; // set the next element member of this (current) Element to NULL
	
	// Now we can fill the current element with data.
	
	printf("\n   ---------------------------------- \n");
	printf("    Daten fuer Person Nr.%i eintragen \n",personenNr);
	printf("   ---------------------------------- \n \n");
	printf("    Vornamen:     ");
	fflush(stdin);
	scanf("%50s", &current->vorname);
	printf("    Nachname:     ");
	fflush(stdin);
	scanf("%50s", &current->nachname);
	printf("    Strasse:      ");
	fflush(stdin);
	scanf("%50s", &current->strasse);
	printf("    Hausnummer:   ");
	fflush(stdin);
	scanf("%i", &current->hausNr);
	printf("    Wohnort:      ");
	fflush(stdin);
	scanf("%50s", &current->ort);
	printf("    Postleitzahl: ");
	fflush(stdin);
	scanf("%i", &current->plz);	
	printf("\n    Person Nr.%i gespeichert.\n \n \n \n", personenNr);
}

void printPerson(person_t *firstPerson)
{
	int anzahlPersonen = 0;
	person_t *current = firstPerson;
	while (current->next != NULL)// search until we are in the last element
	{
		current = current->next; //  set the current element to the pointer of the next one.
		anzahlPersonen++;
	}
	
	int personenNr = 0;
	bool inputSuccessful = false;
	
	printf("\n   ---------------------------------- \n");
	printf("    Welchen Kontakt moechten sie abrufen? ");
	while (inputSuccessful == false)
	{
		fflush(stdin);
		scanf("%i", &personenNr);
		if (personenNr > anzahlPersonen)
		{
			printf("    diese Kontakt Nr ist ungueltig.");
			printf("    erneut versuchen: ");
			inputSuccessful = false;
		}
		else
		{
			inputSuccessful = true;
		}
	}
	current = firstPerson;
	 for (int i = 0; i < personenNr ; i++)
	 {
		 current = current->next;
	 }
	 
	printf("   ---------------------------------- \n");
	printf("    Kontakt Nr.%i \n",personenNr);
	printf("   ---------------------------------- \n ");
	printf("    %s %s \n",current->vorname, current->nachname);
	printf("    %s %i \n",current->strasse, current->hausNr);
	printf("    %s %i \n",current->ort, current->plz);
	printf("   ---------------------------------- \n \n \n \n");
	
}


//end -------------------------------------------------------------------------------------------