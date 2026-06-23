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
	
	analyser_vol (prix, &ecart, &alert);

	printf("variations : %.2f \n", ecart);

	if (alert == 1) {
		printf("Alert vol ! \n");
	}

	else { 
		printf("marché calme \n");
	}

	return 0;

}
	
	void analyser_vol (float p[], float *diff, int *alt) {
		*diff = p[2] - p[0];
		
	if (*diff < 0) {
		*diff = *diff * -1;
	}
	
	if ( *diff > 15.0) {
		*alt = 1;
	}

	else {
		*alt = 0;
	}

}
