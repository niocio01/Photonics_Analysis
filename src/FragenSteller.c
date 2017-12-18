/*B10_StructAdresse.c
Programm das einen Text auf die Konsole ausgibt 
Autor: Martino Baumgartner
Firma: HTW Chur/Photonics 
Version: 0.2 
Datum: 12.11.2017
Änderungen: 
 */


void nextQuestion(frage_t *p_fragen int frageNr)			//Hier wird auf den Pointer gezeigt welchen wir von Martina bekommen.
{
	char answer_c;											//Brauchen wir um die eingegebene antwort in ein boolean(0,1) umzuwandeln
	bool answer_b;
	bool inputSuccsessful = false;							//brauchen wir um zu überprüfen ob die eingabe korrekt ist mit y,n 
	
	printf("%s\n",(p_fragen+frageNr)->frage);				//printed die Frage welche von Nuria im Arrey definiert wurde.
	scanf("%c",&answer_c);									//Hier wird die Eingabe y n eingegeben
	do														//Damit das Programm nicht abbricht bei einer falscheingabe wird dies wiederholt bis richtige Eingabe
	{
		if(answer_c == 'y' || answer_c == 'Y')				//Hier wird die Eingabe in ein Boolean umgewandelt
		{
			answer_b = true;								//Aus einem Y wird eine 1
			inputSuccsessful = true;						//Damit bei einer korrekten Eingabe die Schleife verlassen werden kann.
		}
		else if(answer_c == 'n' || answer_c == 'N')			//Hier wird die Eingabe in ein Boolean umgewandelt
		{
			answer_b = false;								//Aus einem Y wird eine 0
			inputSuccsessful = true;						//Damit bei einer korrekten Eingabe die Schleife verlassen werden kann.
		}
		else												//Falls die Eingabe falsch ist wird else ausgeführt.
		{
			printf("Eingabe nicht erfolgreich");
			inputSuccsessful = false;
		}
	}	
	while(inputSuccsessful == false);						//Damit das Programm nicht abbricht bei einer falscheingabe wird dies wiederholt bis richtige Eingabe.					
	
	if((p_fragen+frageNr)->antwort == answer_b)				//Hier wird die eingegebene Antwort mit der richtigen Antwort verglichen
	{
		printf("Richtig\n");
	}
	else													//Hier wird die eingegebene Antwort mit der richtigen Antwort verglichen
	{
		printf("Haahahaaa, Du kasch jo ger nüüüütt!!!\n")
		printf("Bitte gieb deinen Namen ein: ")
		scanf("%s",&name);
		printf("Liste der Repetenten 2018:\n  Fabian Sket %s",name);
	}
	printf("%s\n",(p_fragen+frageNr)->begruendung);			//Die Begründung wird immer geprinted
	
	return 0;

}
	
