// C-File für Dateneingabe

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#include "PhotonicsAssistant_Analysis_DE.h"



static frage_t fragen_Differential_1[6] ;
static frage_t *p_fragen_Differential_1 = &fragen_Differential_1[0];		// Pointer auf die erste Arraystelle pro Thema

void initDaten (void)
{
	
	strcpy(fragen_Differential_1[0].frage, "Das stimmt genau so.");
	fragen_Differential_1[0].antwort = true;
	strcpy(fragen_Differential_1[0].begruendung, "Das stimmt genau so.");	
	

	//fragen_Differential_1[0].antwort = true;
	//fragen_Differential_1[0].begruendung = "Das stimmt genau so.";
	/*
	fragen_Differential_1[1].frage = "Das stimmt genau so.";
	fragen_Differential_1[1].antwort = true;
	fragen_Differential_1[1].begruendung = "Das stimmt genau so.";

	fragen_Differential_1[2].frage = "Das stimmt genau so.";
	fragen_Differential_1[2].antwort = true;
	fragen_Differential_1[2].begruendung = "Das stimmt genau so.";

	fragen_Differential_1[3].frage = "Das stimmt genau so.";
	fragen_Differential_1[3].antwort = true;
	fragen_Differential_1[3].begruendung = "Das stimmt genau so.";

	fragen_Differential_1[4].frage = "Das stimmt genau so.";
	fragen_Differential_1[4].antwort = true;
	fragen_Differential_1[4].begruendung = "Das stimmt genau so.";

	fragen_Differential_1[5].frage = "Das stimmt genau so.";
	fragen_Differential_1[5].antwort = true;
	fragen_Differential_1[5].begruendung = "Das stimmt genau so.";

	frage_t fragen_Differential_2[6] = {0,0,0};

	fragen_Differential_2[0].frage = "Das stimmt genau so.";
	fragen_Differential_2[0].antwort = true;
	fragen_Differential_2[0].begruendung = "Das stimmt genau so.";

	fragen_Differential_2[1].frage = "Das stimmt genau so.";
	fragen_Differential_2[1].antwort = true;
	fragen_Differential_2[1].begruendung = "Das stimmt genau so.";

	fragen_Differential_2[2].frage = "Das stimmt genau so.";
	fragen_Differential_2[2].antwort = true;
	fragen_Differential_2[2].begruendung = "Das stimmt genau so.";

	fragen_Differential_2[3].frage = "Das stimmt genau so.";
	fragen_Differential_2[3].antwort = true;
	fragen_Differential_2[3].begruendung = "Das stimmt genau so.";

	fragen_Differential_2[4].frage = "Das stimmt genau so.";
	fragen_Differential_2[4].antwort = true;
	fragen_Differential_2[4].begruendung = "Das stimmt genau so.";

	fragen_Differential_2[5].frage = "Das stimmt genau so.";
	fragen_Differential_2[5].antwort = true;
	fragen_Differential_2[5].begruendung = "Das stimmt genau so.";


	frage_t fragen_Integral_1[6] = {0,0,0};

	fragen_Integral_1[0].frage = "Das unbestimmte Integral einer Funktion ist das Gleiche, wie ihre allgemeine Aufleitung bzw. Stammfunktion.";
	fragen_Integral_1[0].antwort = true;
	fragen_Integral_1[0].begruendung = "Das stimmt genau so.";

	fragen_Integral_1[1].frage = "Das bestimmte Integral einer Funktion f(x) in den Grenzen 3 bis 4, ist die vorzeichenbehaftete Fläche zwischen dem Graphen von f und der Strecke von 3 bis 4 auf der x-Achse.";
	fragen_Integral_1[1].antwort = true;
	fragen_Integral_1[1].begruendung = "Das stimmt genau so.";

	fragen_Integral_1[2].frage = "Für jede Funktion f gilt: bestimmtes Integral mit Grenzen -1 bis 1 der Funktion f(x) dx = 0.";
	fragen_Integral_1[2].antwort = false;
	fragen_Integral_1[2].begruendung = "Da es auf f(x) darauf ankommt.";

	fragen_Integral_1[3].frage = "Vertauscht man die Integrationsgrenzen, dann ändert man das Vorzeichen eines bestimmten Integrals.";
	fragen_Integral_1[3].antwort = true;
	fragen_Integral_1[3].begruendung = "Das stimmt genau so.";

	fragen_Integral_1[4].frage = "Gilt f(x) < 0, dann gilt auch bestimmtes Integral mit Grenzen von x0 bis xE der Funktion f(x) dx < 0 für alle x0, xE in R.";
	fragen_Integral_1[4].antwort = false;
	fragen_Integral_1[4].begruendung = "Funktion und Integral sind zwei verschieden Dinge. Funktion ist der Graph, Integral ist die Fläche unter dem Graphen, welche trotzdem positiv sein kann.";

	fragen_Integral_1[5].frage = "In jedem Fall gilt best. Integral von x0 bis xE f(x) dx = best. Integral von -8 bis xE f(x) dx + best. Integral von x0 bis -8 f(x) dx.";
	fragen_Integral_1[5].antwort = false;
	fragen_Integral_1[5].begruendung = "Es müssen alle 3";


	frage_t fragen_Integral_2[6] = {0,0,0};

	fragen_Integral_2[0].frage = "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Die Integrale I und J sind bestimmte Integrale.";
	fragen_Integral_2[0].antwort = true;
	fragen_Integral_2[0].begruendung = "Integrale mit Grenzen sind bestimmt.";

	fragen_Integral_2[1].frage = "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Es gilt I=0.";
	fragen_Integral_2[1].antwort = false;
	fragen_Integral_2[1].begruendung = "I=((x*(|x|+x))/2)+C";

	fragen_Integral_2[2].frage = "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Es gilt I=|I|.";
	fragen_Integral_2[2].antwort = true;
	fragen_Integral_2[2].begruendung = "Die Grundfunktion ist bereits immer positiv.";

	fragen_Integral_2[3].frage = "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Es gilt I=2J";
	fragen_Integral_2[3].antwort = true;
	fragen_Integral_2[3].begruendung = "|x|+x = 2*|x|";

	fragen_Integral_2[4].frage = "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Weglassen des Betrags im Integranden von J ändert den Wert des Integrals nicht.";
	fragen_Integral_2[4].antwort = true;
	fragen_Integral_2[4].begruendung = "Die Grenzen liegen bereits im Positiven Bereich.";

	fragen_Integral_2[5].frage = "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Um das Integral I zu berechnen, könnte es sinvollerweise aufgeteilt weden in zwei Integrale mit den Grenzen -2 bis 0 und 0 bis 2.";
	fragen_Integral_2[5].antwort = true;
	fragen_Integral_2[5].begruendung = "Es könnte sinvoll sein bei komplizierteren Funktionen, muss aber nicht.";


	frage_t fragen_Kurvendiskussion[6] = {0,0,0};

	fragen_Kurvendiskussion[0].frage = "Null ist ein lokales Minimum der quadratischen Standartfunktion.";
	fragen_Kurvendiskussion[0].antwort = true;
	fragen_Kurvendiskussion[0].begruendung = "0 muss ein lokases Minimum darstellen.";

	fragen_Kurvendiskussion[1].frage = "Null ist ein lokales Minimum der kubischen Standartfunktion";
	fragen_Kurvendiskussion[1].antwort = false;
	fragen_Kurvendiskussion[1].begruendung = "Eine kubische Funktion besitzt kein Lokales Minimum sowie Maximum";

	fragen_Kurvendiskussion[2].frage = "Die Funktion 2^x hat keine lokalen Extremalstellen.";
	fragen_Kurvendiskussion[2].antwort = true;
	fragen_Kurvendiskussion[2].begruendung = "Diese Funktion ist Divergierend und verläuft gegen unendlich";

	fragen_Kurvendiskussion[3].frage = "Der höchstmögliche Funktionswert einer Funktion liegt immer an einem lokalen Maximum der Funktion";
	fragen_Kurvendiskussion[3].antwort = false;
	fragen_Kurvendiskussion[3].begruendung = "Die Funktion könnte divergent sein.";

	fragen_Kurvendiskussion[4].frage = "Ein Polynom vom Grade 1000 kann bis zu 1000 lokale Extremalstellen haben.";
	fragen_Kurvendiskussion[4].antwort = false;
	fragen_Kurvendiskussion[4].begruendung = "Es gibt nur n-1 Extremalstellen";

	fragen_Kurvendiskussion[5].frage = "Falls gilt f'(-3)=0 , dann hat f an der Stelle x=-3 ein lokales Minimum oder ein lokales Maximum.";
	fragen_Kurvendiskussion[5].antwort = false;
	fragen_Kurvendiskussion[5].begruendung = "Dafür müsste noch die 2 Ableitung (f''(x)) angeschaut werden.";

	*/ 


	/*
	frage_t *p_fragen_Differential_2 = &fragen_Differential_2[0]		// Pointer auf die erste Arraystelle pro Thema
	frage_t *p_fragen_Integral_1 = &fragen_Integral_1[0]				// Pointer auf die erste Arraystelle pro Thema
	frage_t *p_fragen_Integral_2 = &fragen_Integral_2[0]				// Pointer auf die erste Arraystelle pro Thema
	frage_t *p_fragen_Kurvendiskussion = &fragen_Kurvendiskussion[0]	// Pointer auf die erste Arraystelle pro Thema
	*/

}


frage_t * pointerUebergabe(themen_t thema)		//Funktion um Pointer zurückzugeben
{
	switch(thema) {
		case DIFFERENTIAL_ONE:
			return p_fragen_Differential_1;
		/*case DIFFERENTIAL_TWO:
			return p_fragen_Differential_2;
		case INTEGRAL_ONE:
			return p_fragen_Integral_1;
		case INTEGRAL_TWO:
			return p_fragen_Integral_2;
		case KURVENDISKUSSION:
			return p_fragen_Kurvendiskussion;
		*/	
		default :
		return 0;
	}
}