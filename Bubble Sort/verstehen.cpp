// 01. BubbleSort verstehen
#include <iostream>
using namespace std;

static int counter = 0;
void bubbleSort(int z[], int fg);
void sortierfortschritt(int zahlen[], int elemente);

int main()
{
	int zahlen[] = { 1,5,4,2,3 }; 
	int elemente = sizeof(zahlen) / sizeof(int);

	cout << "nicht sortiert: ";
	for (int zahl : zahlen)
	{
		cout << zahl << " ";
	}
	cout << endl;


	bubbleSort(zahlen, elemente);

	cout << "sortiert: \t";
	for (int zahl : zahlen)
	{
		cout << zahl << " ";
	}

	return 0;
}

void bubbleSort(int zahlen[], int elemente) {
	// Tipp: Arbeite mit dem Debugger!

	// 1. Schleife >> wiederhole "Anzahl der Elemente"

	// 2. Schleife >> wiederhole für den Vergleich 

	// 3. Vergleich >> vergleiche zwei nebenstehende Elemente
	
	// 4. Ringtausch
	sortierfortschritt(zahlen, elemente); // nach dem Ringtausch aufrufen
}

void sortierfortschritt(int zahlen[], int elemente) {
	counter++;
	for (int i = 0; i < elemente; i++)
	{
		cout << zahlen[i] << " ";
	}
	cout << endl;
}