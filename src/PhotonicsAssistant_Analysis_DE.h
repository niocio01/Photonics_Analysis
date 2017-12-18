// Headerfile für Dateneingabe

#ifndef DATENEINGABE_H
#define DATENEINGABE_H

typedef struct									// Struktur für die Dateneingabe
{
	char frage[250];
	bool antwort;
	char begruendung[250];
}frage_t;

typedef enum
{
	DIFFERENTIAL_ONE,
	DIFFERENTIAL_TWO,
	INTEGRAL_ONE,
	INTEGRAL_TWO,
	KURVENDISKUSSION
}themen_t;


void initDaten (void);

frage_t * pointerUebergabe(themen_t thema); // Rückgabewert Funkt.name (typedef name von oben)


#endif