// Headerfile für Dateneingabe

typedef enum{
	DIFFERENTIAL_ONE,
	DIFFERENTIAL_TWO,
	INTEGRAL_ONE,
	INTEGRAL_TWO,
	KURVENDISKUSSION
}themen_t;

extern frage_t *p_fragen pionterUebergabe(themen_t thema); // Rückgabewert Funkt.name (typedef name von oben)
