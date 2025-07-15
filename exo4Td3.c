#include <stdio.h>
void lireTableaux(int *T1, int *taille1, int *T2, int *taille2);
void rechercherSousTableau(int *T1, int taille1, int *T2, int taille2, int *pos);
void supprimerSousTableau(int *T1, int *taille1, int pos, int taille2);
int main() 
{
	int T1[50], T2[100];
	int taille1, taille2;
	int i, j, k;
	int trouve = 0;
	int pos ;
		lireTableaux(T1, &taille1, T2, &taille2);
    		rechercherSousTableau(T1, taille1, T2, taille2, &pos);
    		supprimerSousTableau(T1, &taille1,pos,taille2);

    	return 0;
}
void lireTableaux(int *T1, int *taille1, int *T2, int *taille2)
{
	int i , j;
printf("Entrez la taille de T1 (max 50) : ");
        scanf("%d", taille1);
        if (*taille1 > 50) 
        {
                printf("probleme de taille");
		return;
        }       
        printf("Entrez les elements de T1 :\n");
        for (i = 0; i < *taille1; i++) 
        {
		printf("T1[%d]=",i);
                scanf("%d", &T1[i]);
        }
        printf("Entrez la taille de T2 (max 100) : ");
        scanf("%d", taille2);
        if (*taille2 > 100) 
        {
                printf("verifier la taille max du tableau");
		return;
        }
        printf("Entrez les elements de T2 :\n");
        for (i = 0; i < *taille2; i++) 
        {
		printf("T2[%d]=",i);
                scanf("%d", &T2[i]);
        }

}
void rechercherSousTableau(int *T1, int taille1, int *T2, int taille2, int *pos)
{
	int i ,j, trouve;
	  *pos = -1;  // initialisation que position non trouvée

	for (i = 0; i <= taille1 - taille2; i++) 
	{
        	trouve = 1;
        	for (j = 0; j < taille2; j++) 
		{
            		if (T1[i + j] != T2[j]) 
			{
                		trouve = 0;
                		break;
            		}
        	}
        	if (trouve == 1) 
		{
            		*pos = i; // position trouvée
            		return;   // sortie immédiate à la première occurrence trouvée
        	}
    	}
}
void supprimerSousTableau(int *T1, int *taille1, int pos, int taille2)
{
	int i,j,trouve;
	// Suppression si trouvé on a trouvé  T2 dans T1
        if (trouve == 1) 
        {
        for (i = pos + taille2; i < *taille1; i++) 
        {
            T1[i - taille2] = T1[i];
        }
                *taille1 = *taille1 - taille2;

                printf("T2 existe dans T1 et a ete supprime.\n");
                printf("T1 maintenant : ");
        for (i = 0; i < *taille1; i++) 
        {
            printf("%d ", T1[i]);
        }
        printf("\n");
        } 
        else 
        {
                printf("T2 n'existe pas dans T1.\n");
        }


}
