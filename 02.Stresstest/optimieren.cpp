// 02. BubbleSort optimieren
#include <iostream>
using namespace std;

void bubbleSort(int z[], int fg);
static int counter = 0;

int main()
{
	int zahlen[100] = { 0 };

	for (int n = 5; n < 100; n *= 2) {
		for (int i = 0; i < n; i++) {
			zahlen[i] = rand();
		}
		bubbleSort(zahlen, n);
		cout << "Elemente: " << n << " Vergleiche: " << counter << endl;
	}

	cout << "sortiert? " << endl;
	for (int zahl : zahlen)
	{
		cout << zahl << " " << endl;
	}

	return 0;
}

void bubbleSort(int zahlen[], int elemente) {
	
	
	counter++; // zählt die Vergleiche
	if(...)
}

/*
 
>> keine Optimierung
Elemente: 5 vergleiche 20
Elemente : 10 vergleiche 110
Elemente : 20 vergleiche 490
Elemente : 40 vergleiche 2050
Elemente : 80 vergleiche 8370

>> 1. Optimierung
Elemente : 5 vergleiche 16
Elemente : 10 vergleiche 97
Elemente : 20 vergleiche 458
Elemente : 40 vergleiche 1979
Elemente : 80 vergleiche 8220

>> 2. Optimierung
Elemente : 5 vergleiche 10
Elemente : 10 vergleiche 55
Elemente : 20 vergleiche 245
Elemente : 40 vergleiche 1025
Elemente : 80 vergleiche 4185

>> 3. Optimierung
Elemente : 5 vergleiche 7
Elemente : 10 vergleiche 52
Elemente : 20 vergleiche 239
Elemente : 40 vergleiche 1004
Elemente : 80 vergleiche 4011

*/