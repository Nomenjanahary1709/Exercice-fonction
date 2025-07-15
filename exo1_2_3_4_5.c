#include<stdio.h>
#include<stdlib.h>
void recup_affiche(int *tab , int *taille);
void sommeTableau( int *tab , int taille, int *somme);
void affiche_maximumPosition( int *tab , int taille, int *max , int *position);
void tableau_sans_0 (int *tab , int *taille, int *nb );
void remplissage_Tpos_Tneg ( int *tab ,int taille, int *Tpos, int *Tneg);
void inverse_du_tableauT (int *tab, int taille );
int main()
{
	int tab[50];
	int taille,somme;
	int max, position=0,nb=0;
	int Tpos[50], Tneg[50];
	recup_affiche(tab,&taille);
	sommeTableau(tab,taille,&somme);
	affiche_maximumPosition(tab,taille,&max,&position);
	tableau_sans_0 (tab , &taille, &nb );
	remplissage_Tpos_Tneg ( tab , taille, Tpos, Tneg);
	inverse_du_tableauT ( tab, taille );
	return(0);
}
void recup_affiche(int *tab,int *taille)
{
	int i;
	printf("saisir la taille du tableau:");
        scanf("%d",taille);
	for(i=0;i<*taille;i++)
	{
		printf("tab[%d]=",i);
		scanf("%d",&tab[i]);
	}
}
void sommeTableau(int *tab , int taille , int *somme)
{
	int i;
	*somme=0;
	for(i=0;i<taille;i++)
        {
                *somme=*somme+tab[i];
        }
        printf("somme=%d\n",*somme);
}
void  affiche_maximumPosition( int *tab , int taille , int *max , int *position)
{
	int i,n=0;
	for(i=0;i<taille;i++)
        {
                if(tab[i]>n)
                {
                       *max=tab[i];
                       *position=i;
                }
        }
        printf("max=%d\n",*max);
	printf("position:tab[%d]\n",*position);

}
void tableau_sans_0 (int *tab , int *taille, int *nb )
{
	int i,j;
	for(i=0,j=0;i<*taille;i++)
        {
                if(tab[i]==0)
                {
                        j++;
                }
        }
	*nb=j;
        printf("l'occurence de la valeur de 0 est : %d\n",*nb);
	for(i=0,j=0;i<*taille;i++)
 	{
                if(tab[i]!=0)
                {
                        tab[j]=tab[i];
                        j++;
                }
        }
        *taille=j;
        for(i=0;i<*taille;i++)
        {
                printf("tab[%d]=%d\n",i,tab[i]);
        }

}
void remplissage_Tpos_Tneg( int *tab , int taille , int *Tpos , int *Tneg)
{
	int i,j,t1,t2,z;
	j=0;
	z=0;
	for(i=0;i<taille;i++)
	{
		if(tab[i]<0)
		{
			Tneg[j]=tab[i];
			j++;
			t1=j;
		}
		else
		{
			Tpos[z]=tab[i];
			z++;
			t2=z;
		}
	}
	printf("tableau des valeurs negatifs:\n");
	for(i=0;i<t1;i++)
	{
		printf("Tneg[%d]=%d\n",i,Tneg[i]);
	}
	printf("tableau des valeurs positifs\n");
	for(i=0;i<t2;i++)
	{
		printf("Tpos[%d]=%d\n",i,Tpos[i]);
	}
}
void inverse_du_tableauT( int *tab , int taille)
{
	int i, debut , fin , temp;
	debut=0;
	fin=taille-1;
	printf("tableau T inversé:\n");
	while(debut<fin)
	{
		temp=tab[debut];
		tab[debut]=tab[fin];
		tab[fin]=temp;
		debut++;
		fin--;
	}
	for(i=0;i<taille;i++)
	{
		printf("tab[%d]=%d\n",i,tab[i]);
	}
}
