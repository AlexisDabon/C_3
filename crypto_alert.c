#include <stdio.h> 

float calculer_moyenne (float p[], int size);
int main () {
	
	float prix [3];
	for (int i = 0; i < 3; i++) {
		printf("saisissez le prix %d", i + 1);
		scanf("%f", &prix[i]); 
	}
	
	float moyenne = calculer_moyenne(prix, 3);

	printf("moyenne : %.2f \n", moyenne);

	if (moyenne >= 100) {
		printf("ALERT \n");
	}
	else {
		printf("Situation stable \n");
	}
	
	return 0;
}


