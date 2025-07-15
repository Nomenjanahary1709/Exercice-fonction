#include <stdio.h>
void saisirTableau(int *tab, int *taille);
float calculerMoyenne(int *tab, int taille);
void remplirTableauEcart(float *t, int *tab, float m, int taille);
int trouverIndicePlusProche(float *t, int taille) ;
void afficherResultats(float m, int plusProche, int *tab);
int main() 
{
    int tab[100];
    float t[100];
    int taille, indice;
    float moyenne;

    saisirTableau(tab, &taille);
    moyenne = calculerMoyenne(tab, taille);
    remplirTableauEcart(t, tab, moyenne, taille);
    indice = trouverIndicePlusProche(t, taille);
    afficherResultats(moyenne, indice, tab);

    return 0;
}

void saisirTableau(int *tab, int *taille) 
{
	int i;
	printf("Saisir la taille du tableau : ");
	scanf("%d", taille);
	for (i = 0; i < *taille; i++) 
	{
       		printf("tab[%d] = ", i);
        	scanf("%d", &tab[i]);
    	}
}

float calculerMoyenne(int *tab, int taille) 
{
	int s = 0, i;
	float m;
	for (i = 0; i < taille; i++) 
	{
        	s = s + tab[i];
        	m = (float)s / (float)taille; 
    	}
    	return m;
}

void remplirTableauEcart(float *t, int *tab, float m, int taille) 
{
	int i;
	for (i = 0; i < taille; i++) 
	{
        	t[i] = tab[i] - m;
	}
}

int trouverIndicePlusProche(float *t, int taille) 
{
	int i, a = 0;
	float min = t[0];
	for (i = 1; i < taille; i++) 
	{
        	if (t[i] < min) 
		{
			min = t[i];
			a = i;
        	}
    	}
    	return a;
}

void afficherResultats(float m, int plusProche, int *tab) 
{
	printf("La moyenne est : %f\n", m);
	printf("La valeur la plus proche de la moyenne :\n");
	printf("%d\n", tab[plusProche]);
}

