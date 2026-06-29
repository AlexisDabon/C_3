#include <stdio.h>

struct Crypto {
	int id;
	float prix;
};

void afficher_portefeuille(struct Crypto t[], int taille);

int main() {
	struct Crypto portefeuille[3] = {{1, 45000.0}, {2, 3200.0}, {3, 1.20}};
	afficher_portefeuille (portefeuille, 3);

	return 0;
}

void afficher_portefeuille(struct Crypto t[], int taille) {
	for (int i = 0; i < taille; i++) {
		printf("Crypto ID %d, Prix %.2f \n", t[i].id, t[i].prix);
	}
}

