#include<stdio.h>
void recup_afficheTableau(int *tab , int *n );
void max_min ( int *tab , int n , int *max, int *min , int *y, int *z);
int main(int argc, char *argv[])
{
        int tab[50];
        int min,n,max,z,y;
	recup_afficheTableau(tab , &n);
        max_min(tab , n , &max ,&min ,&z , &y); 
	max=tab[0];
	min=tab[0];
}
void recup_afficheTableau( int *tab , int *n)
{
	int i;
	printf("entrer la valeur de n:");
            scanf("%d",n);
        for(i=0;i<*n;i++)
        {
            printf("tab[%d]=",i);
            scanf("%d",&tab[i]);
        }

}
void max_min ( int *tab , int n , int *max, int *min , int *y, int *z)
{
	int i;
	for(i=0;i<n;i++)
	{
		if (*max<tab[i])
		{
			*max=tab[i];
			*y=i;
		}
		if(*min>tab[i])
		{
			*min=tab[i];
			*z=i;
		}
	}
	printf("max=%d=tab[%d]\n",*max,*y);
	printf("min=%d=tab[%d]\n",*min,*z);
}
