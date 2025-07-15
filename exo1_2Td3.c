
#include<stdio.h>
void recup_afficheTableau( int *tab , int *T);
void tabP_tabI( int *tab , int T , int *TabP , int *p , int *TabI , int *m);
void nouveau_tableau( int *TabP, int p , int *TabI , int m , int *tab , int T);
void insertion_de_X ( int *tab , int *T , int *X);
int main()
{
	int tab[100];
	int TabP[100];
	int TabI[100];
	int j,i , m,T,p,X;
	recup_afficheTableau(tab ,&T);
	m=0;
	p=0;
	tabP_tabI(tab, T , TabP , &p , TabI, &m);
	nouveau_tableau( TabP, p , TabI , m , tab , T);
	insertion_de_X(tab , &T ,&X);
	m=0;
	p=0;
	tabP_tabI(tab,T,TabP,&p,TabI,&m);
	nouveau_tableau( TabP , p , TabI , m , tab, T);
}
void recup_afficheTableau( int *tab , int *T)
{
	int i;
printf("la taille du tableau est T=");
        scanf("%d",T);
        for(i=0;i<*T;i++)
        {
                printf("tab[%d]=",i);
                scanf("%d",&tab[i]);
        }

}
void tabP_tabI( int *tab , int T , int *TabP , int *p , int *TabI , int *m)
{
	int i,j;
	for(i=0;i<T;i++)
        {
                if(tab[i]%2==0)
                {
                	TabP[*p]=tab[i];
                	(*p)++;
                }
                else
                {
                        TabI[*m]=tab[i];
                        (*m)++;
                }
        }
        printf("Tableau1:\n");
        for(i=0;i<*p;i++)
        {
                printf("tabP[%d]=%d\n",i,TabP[i]);
        }
        printf("Tableau2:\n");
        for(i=0;i<*m;i++)
        {
                printf("tabI[%d]=%d\n",i,TabI[i]);
        }
}
void nouveau_tableau( int *TabP, int p , int *TabI , int m , int *tab , int T)
{
	int i,j;
        for(i=0;i<p;i++)
        {
                tab[i]=TabP[i];
        }
        j=0;
        for(i=p;i<T;i++)
        {
                tab[i]=TabI[j];
                j++;
        }
	printf("voici le tableau resultant:\n");
        for(i=0;i<T;i++)
        {
                printf("tab[%d]=%d\n",i,tab[i]);
        }
}
void insertion_de_X ( int *tab , int *T , int *X)
{
	int i;
	printf("la valeur de de X=");
        scanf("%d",X);

        tab[*T]=*X;
        *T=*T+1;
        for(i=0;i<*T;i++)
        {
        printf("tab[%d]=%d\n",i,tab[i]);
        }

}
