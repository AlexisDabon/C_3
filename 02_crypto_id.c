#include <stdio.h>

struct Crypto {
	int id;
	float prix;
};

void mettre_prix_a_jour(struct Crypto *c, float nouveau_prix);

int main () {
	struct Crypto ma_crypto; 
	ma_crypto.id = 1;
	ma_crypto.prix = 45000.00;
	
	printf("prix de la crypto %d : %.2f \n", ma_crypto.id, ma_crypto.prix);

	mettre_prix_a_jour(&ma_crypto, 48500.50);

	printf("nouveau prix %d : %.2f \n", ma_crypto.id, ma_crypto.prix);

return 0;

}

void mettre_prix_a_jour(struct Crypto *c, float nouveau_prix) {
c->prix = nouveau_prix;
}
