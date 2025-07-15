#include<stdio.h>
#include<string.h>
void saisirAfficherPhrase ( char *chaine);
void nombreOccurence ( char *chaine , int *nbES , int *nbA );
void afficherResultats(int nbA, int nbEs);
int main()
{
	char chaine[120];
	int nbEs , nbA;
	nbEs=0;
	nbA=0;
	saisirAfficherPhrase( chaine);
	nombreOccurence( chaine , &nbEs , &nbA);
	afficherResultats( nbA , nbEs);

	return 0;
}
void nombreOccurence ( char *chaine , int *nbEs , int *nbA )
{
	int i,t;
	t=strlen(chaine);
	for(i=0;i<t;i++)
	{
		if(chaine[i]=='a')
		{
			(*nbA)++;
		}
		else if (chaine[i]=='e' && chaine[i+1]=='s')
		{
			(*nbEs)++;
		}
	}
}
void afficherResultats(int nbA, int nbEs)
{
	printf("le nombre de repetition de 'a' est : %d\n",nbA);
	printf("le nombre de repetition de 'es' est : %d\n",nbEs);
}
void saisirAfficherPhrase ( char *chaine)
{
	printf("saisir la phrase:\n");
        gets(chaine);
        printf("votre phrase est donc\n");
        printf("%s\n",chaine);
}
