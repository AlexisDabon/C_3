#include <stdio.h>

struct Crypto {
	int id;
	float prix;
};

void mettre_prix_a_jour(struct Crypto *c, float nouveau_prix);
