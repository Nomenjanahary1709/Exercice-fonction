#include<stdio.h>
void recup_afficheTableau ( int *T , int *N);
void recup_supprime_X ( int *T , int N , int *X);
int main(int argc, char *argv[])
{
	int T[100];
	int N,X;
	recup_afficheTableau(T,&N);
	recup_supprime_X(T,N,&X);
}
void recup_afficheTableau ( int *T , int *N)
{
	int i;
	printf("saisir la taille du tableau : ");
        scanf("%d",N);
        for(i=0;i<*N;i++)
        {
                printf("T[%d]=",i);
                scanf("%d",&T[i]);
        }

}
void recup_supprime_X ( int *T , int N , int *X)
{
	int i,j,compteur;
	compteur=0;
	do
	{
        printf("la valeur à supprimer du tableau:");
        scanf("%d",X);
        compteur=0;
        for(i=0;i<N;i++)
        {
                if(T[i]==*X)
                {
                        compteur++;
                        N--;
                        for(j=i;j<N;j++)
                        {
                                T[j]=T[j+1];
                        }
                }

        }
        if(compteur>0)
        {
                        printf("tableau apres suppression:\n");
                for(i=0;i<N;i++)
                {
                        printf(" T[%d]=%d\n",i,T[i]);
                }
        }
	}
        while(compteur==0);
}
