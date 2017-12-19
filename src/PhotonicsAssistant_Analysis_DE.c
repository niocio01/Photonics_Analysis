// C-File für Dateneingabe

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#include "PhotonicsAssistant_Analysis_DE.h"


static frage_t fragen_Differential_1[6];
static frage_t *p_fragen_Differential_1 = &fragen_Differential_1[0];		// Pointer auf die erste Arraystelle pro Thema

static frage_t fragen_Differential_2[6];
static frage_t *p_fragen_Differential_2 = &fragen_Differential_2[0];		// Pointer auf die erste Arraystelle pro Thema

static frage_t fragen_Integral_1[6];
static frage_t *p_fragen_Integral_1 = &fragen_Integral_1[0];				// Pointer auf die erste Arraystelle pro Thema
	
static frage_t fragen_Integral_2[6];
static frage_t *p_fragen_Integral_2 = &fragen_Integral_2[0];				// Pointer auf die erste Arraystelle pro Thema
	
static frage_t fragen_Kurvendiskussion[6];
static frage_t *p_fragen_Kurvendiskussion = &fragen_Kurvendiskussion[0];	// Pointer auf die erste Arraystelle pro Thema



	
void initDaten (void)
{
	
	// fragen_Differential_1:
	
	strcpy(fragen_Differential_1[0].frage, "Der Funktionswert f(x) der Ableitung ist gerade die Steigung der Funktion f an der Stelle x" );
	fragen_Differential_1[0].antwort = true;
	strcpy(fragen_Differential_1[0].begruendung, "Dies ist die Definition der Ableitung" );	
	
	strcpy(fragen_Differential_1[1].frage, "Ist der Graph einer Funktion eine Gerade dann ist die zugehörige Ableitung konstant." );
	fragen_Differential_1[1].antwort = true;
	strcpy(fragen_Differential_1[1].begruendung, "Eine Gerade hat an deder stelle x die Selbe Steigung, daher ist die Ableitung davon eine Konstante funkion." );	
	
	strcpy(fragen_Differential_1[2].frage, "Es sei f(x) := x^2, dann ist der Graph der Ableitung f'(x) eine Parabel." );
	fragen_Differential_1[2].antwort = false;
	strcpy(fragen_Differential_1[2].begruendung, "Nein, die Ableitung von x^2 ist eine Gerade durch den Nullpunkt, mit der Steigung 2.    f'(x) = 2x" );
	
	strcpy(fragen_Differential_1[3].frage, "Es sei f(x) := x^3, dann hat der Graph von f an der Stelle x = 5 die Steigung m = 75" );
	fragen_Differential_1[3].antwort = true;
	strcpy(fragen_Differential_1[3].begruendung, "die ableitung von f(x)=x^3 ist f'(x)=3x^2, setzt man nun den wert 5 ein erhält man f'(5) = 3*5^2 = 75" );
	
	strcpy(fragen_Differential_1[4].frage, "Ist eine Funktion f das Doppelte einer Funktion g, dann ist nach der Faktor-Regel auch die Ableitung von f das Doppelte der Ableitung von g." );
	fragen_Differential_1[4].antwort = true;
	strcpy(fragen_Differential_1[4].begruendung, "ja, das ist die Definition der Faktor-Regel f(x) = c*g(x)  =>  f'(x) = c*g'(x)" );
	
	strcpy(fragen_Differential_1[5].frage, "Es seien f(x) und x Grössen mit Masseinheit, dann hat f'(x) die gleiche Masseinheit wie f(x)." );
	fragen_Differential_1[5].antwort = false;
	strcpy(fragen_Differential_1[5].begruendung, "Masseinheiten werden mit der Funktion zusammen abgeleitet, und ändern sich daher auch." );
	
	
	// fragen_Differential_2:

	strcpy(fragen_Differential_2[0].frage, "Die Monom-Regel kann mit Hilfe der natürlichen Exponentialfunktion bewiesen werden.");
	fragen_Differential_2[0].antwort = true;
	strcpy(fragen_Differential_2[0].begruendung, "Das stimmt genau so.");	
	
	strcpy(fragen_Differential_2[1].frage, "Der Funktionswert exp(x) laesst sich nur für x Element von reellen Zahlen berechnen, die keine Masseinheit tragen.");
	fragen_Differential_2[1].antwort = true;
	strcpy(fragen_Differential_2[1].begruendung, "Das stimmt genau so.");	
	
	strcpy(fragen_Differential_2[2].frage, "Es gilt exp(1) = 2.718'3.");
	fragen_Differential_2[2].antwort = false;
	strcpy(fragen_Differential_2[2].begruendung, "Die exp(1) entspricht der Eulerschen Zahl. e ist UNGEFAEHR 2.718'3.");
	
	strcpy(fragen_Differential_2[3].frage, "Es gilt exp'(x)=e^x");
	fragen_Differential_2[3].antwort = true;
	strcpy(fragen_Differential_2[3].begruendung, "Die Ab- und Aufleitung der natürlichen Exponentialfunktion entspricht genau der natürlichen Exponentialfunktion selbst.");
	
	strcpy(fragen_Differential_2[4].frage, "Es gilt exp(10'000)=exp^10 (10).");
	fragen_Differential_2[4].antwort = false;
	strcpy(fragen_Differential_2[4].begruendung, "exp(10'000)=exp^1'000 (10) = exp^10 (1'000).");
	
	strcpy(fragen_Differential_2[5].frage, "Fuer alle x, y Element von reellen Zahlen gilt exp(x-y) = exp(x)/exp(y).");
	fragen_Differential_2[5].antwort = true;
	strcpy(fragen_Differential_2[5].begruendung, "Potenzgesetz: x^a/x^b = x^(a-b).");
	
	
	// fragen_Integral_1:

	strcpy(fragen_Integral_1[0].frage, "Das unbestimmte Integral einer Funktion ist das Gleiche, wie ihre allgemeine Aufleitung bzw. Stammfunktion.");
	fragen_Integral_1[0].antwort = true;
	strcpy(fragen_Integral_1[0].begruendung, "Das stimmt genau so.");	
	
	strcpy(fragen_Integral_1[1].frage, "Das bestimmte Integral einer Funktion f(x) in den Grenzen 3 bis 4, ist die vorzeichenbehaftete Fläche zwischen dem Graphen von f und der Strecke von 3 bis 4 auf der x-Achse.");
	fragen_Integral_1[1].antwort = false;
	strcpy(fragen_Integral_1[1].begruendung, "Das stimmt genau so.");	
	
	strcpy(fragen_Integral_1[2].frage, "Für jede Funktion f gilt: bestimmtes Integral mit Grenzen -1 bis 1 der Funktion f(x) dx = 0.");
	fragen_Integral_1[2].antwort = false;
	strcpy(fragen_Integral_1[2].begruendung, "Da es auf f(x) darauf ankommt.");
	
	strcpy(fragen_Integral_1[3].frage, "Vertauscht man die Integrationsgrenzen, dann ändert man das Vorzeichen eines bestimmten Integrals.");
	fragen_Integral_1[3].antwort = true;
	strcpy(fragen_Integral_1[3].begruendung, "Das stimmt genau so.");
	
	strcpy(fragen_Integral_1[4].frage, "Gilt f(x) < 0, dann gilt auch: bestimmtes Integral mit Grenzen von x0 bis xE der Funktion f(x) dx < 0 für alle x0, xE in R.");
	fragen_Integral_1[4].antwort = false;
	strcpy(fragen_Integral_1[4].begruendung, "Funktion und Integral sind zwei verschieden Dinge. Funktion ist der Graph, Integral ist die Fläche unter dem Graphen, welche trotzdem positiv sein kann.");
	
	strcpy(fragen_Integral_1[5].frage, "In jedem Fall gilt: best. Integral mit Grenzen von x0 bis xE der Funktion f(x) dx = best. Integral mit Grenzen von -8 bis xE f(x) dx + best. Integral mit Grenzen von x0 bis -8 der Funktion f(x) dx.");
	fragen_Integral_1[5].antwort = false;
	strcpy(fragen_Integral_1[5].begruendung, "Es müssen alle 3 Integrale berechenbar sein.");
	

	// fragen_Integral_2:

	strcpy(fragen_Integral_2[0].frage, "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Die Integrale I und J sind bestimmte Integrale.");
	fragen_Integral_2[0].antwort = true;
	strcpy(fragen_Integral_2[0].begruendung, "Integrale mit Grenzen sind bestimmt.");	
	
	strcpy(fragen_Integral_2[1].frage, "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Es gilt I=0.");
	fragen_Integral_2[1].antwort = false;
	strcpy(fragen_Integral_2[1].begruendung, "I=((x*(|x|+x))/2)+C");	
	
	strcpy(fragen_Integral_2[2].frage, "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Es gilt I=|I|.");
	fragen_Integral_2[2].antwort = true;
	strcpy(fragen_Integral_2[2].begruendung, "Die Grundfunktion ist bereits immer positiv.");
	
	strcpy(fragen_Integral_2[3].frage, "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Es gilt I=2J");
	fragen_Integral_2[3].antwort = true;
	strcpy(fragen_Integral_2[3].begruendung, "|x|+x = 2*|x|");
	
	strcpy(fragen_Integral_2[4].frage, "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Weglassen des Betrags im Integranden von J ändert den Wert des Integrals nicht.");
	fragen_Integral_2[4].antwort = true;
	strcpy(fragen_Integral_2[4].begruendung, "Die Grenzen liegen bereits im Positiven Bereich.");
	
	strcpy(fragen_Integral_2[5].frage, "I = begrenztes Integral mit Grenzen -2 bis 2 (|x|+x)dx und J = begrenztes Integral mit Grenzen 0 bis 2 |x|dx.\n Um das Integral I zu berechnen, könnte es sinvollerweise aufgeteilt weden in zwei Integrale mit den Grenzen -2 bis 0 und 0 bis 2.");
	fragen_Integral_2[5].antwort = true;
	strcpy(fragen_Integral_2[5].begruendung, "Es könnte sinvoll sein bei komplizierteren Funktionen, muss aber nicht.");
	
	
	// fragen_Kurvendiskussion:
	
	strcpy(fragen_Kurvendiskussion[0].frage, "Null ist ein lokales Minimum der quadratischen Standartfunktion.");
	fragen_Kurvendiskussion[0].antwort = true;
	strcpy(fragen_Kurvendiskussion[0].begruendung, "0 muss ein lokases Minimum darstellen.");	
	
	strcpy(fragen_Kurvendiskussion[1].frage, "Null ist ein lokales Minimum der kubischen Standartfunktion.");
	fragen_Kurvendiskussion[1].antwort = false;
	strcpy(fragen_Kurvendiskussion[1].begruendung, "Die kubische Standartfunktion besitzt kein lokales Minimum oder lokales Maximum.");	
	
	strcpy(fragen_Kurvendiskussion[2].frage, "Die Funktion 2^x hat keine lokalen Extremalstellen.");
	fragen_Kurvendiskussion[2].antwort = true;
	strcpy(fragen_Kurvendiskussion[2].begruendung, "Diese Funktion ist divergierend und verläuft gegen unendlich.");
	
	strcpy(fragen_Kurvendiskussion[3].frage, "Der höchstmögliche Funktionswert einer Funktion liegt immer an einem lokalen Maximum der Funktion.");
	fragen_Kurvendiskussion[3].antwort = false;
	strcpy(fragen_Kurvendiskussion[3].begruendung, "Die Funktion könnte divergent sein.");
	
	strcpy(fragen_Kurvendiskussion[4].frage, "Ein Polynom vom Grade 1000 kann bis zu 1000 lokale Extremalstellen haben.");
	fragen_Kurvendiskussion[4].antwort = false;
	strcpy(fragen_Kurvendiskussion[4].begruendung, "Es gibt nur n-1 Extremalstellen.");
	
	strcpy(fragen_Kurvendiskussion[5].frage, "Falls gilt f'(-3)=0 , dann hat f an der Stelle x=-3 ein lokales Minimum oder ein lokales Maximum.");
	fragen_Kurvendiskussion[5].antwort = false;
	strcpy(fragen_Kurvendiskussion[5].begruendung, "Dafür müsste noch die 2 Ableitung (f''(x)) angeschaut werden.");
}



frage_t * pointerUebergabe(themen_t thema)		//Funktion um Pointer zurückzugeben
{
	switch(thema) {
		case DIFFERENTIAL_ONE:
			return p_fragen_Differential_1;
		case DIFFERENTIAL_TWO:
			return p_fragen_Differential_2;
		case INTEGRAL_ONE:
			return p_fragen_Integral_1;
		case INTEGRAL_TWO:
			return p_fragen_Integral_2;
		case KURVENDISKUSSION:
			return p_fragen_Kurvendiskussion;
		
		default:
		return 0;
	}
}