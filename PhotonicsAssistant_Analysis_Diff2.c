frage_t fragen_Thema_B[6]; 		//Serie 9, Aufgabe 3


typedef struct  {
char frage[99];
bool antwort;
char begründung[99];

fragen_Thema_B[1].frage = "Die Monom-Regel kann mit Hilfe der natürlichen Exponentialfunktion bewiesen werden.";
fragen_Thema_B[1].begründung = "Wahr"

fragen_Thema_B[2].frage = "Der Funktionswert exp(x) laesst sich nur für x Element von reellen Zahlen berechnen, die keine Masseinheit tragen.";
fragen_Thema_B[2].begründung = "Wahr"

fragen_Thema_B[3].frage = "Es gilt exp(1) = 2.718'3";
fragen_Thema_B[3].begründung = "Falsch. Die exp(1) entspricht der Eulerschen Zahl. e ist UNGEFAEHR 2.718'3."

fragen_Thema_B[4].frage = "ES gilt exp'(x)=e^x";
fragen_Thema_B[4].begründung = "Wahr, die Ab- und Aufleitung der natürlichen Exponentialfunktion entspricht genau der natürlichen Exponentialfunktion selbst."

fragen_Thema_B[5].frage = "Es gilt exp(10'000)=exp^10 (10)";
fragen_Thema_B[5].begründung = "Falsch. exp(10'000)=exp^1'000 (10) = exp^10 (1'000)."

fragen_Thema_B[6].frage = "Fuer alle x, y Element von reellen Zahlen gilt exp(x-y) = exp(x)/exp(y).";
fragen_Thema_B[6].begründung = "Wahr. Potenzgesetz, x^a/x^b = x^(a-b)"


int *next
} frage_t;



