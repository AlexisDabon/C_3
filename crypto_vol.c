#include <stdio.h>

void analyser_vol (float [], float *diff, int *alt);

int main () {
	float prix [3];
	float ecart = 0;
	int alert = 0;
	
	for (int i = 0; i < 3; i++) {
	printf("saisissez le prix %d : \n", i + 1);
	scanf("%f", &prix [i]);
	}

}
