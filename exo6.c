#include<stdio.h>
void recup_afficheTableau (int *A, int *M ,int *B , int *N);
void concatener ( int *A, int M, int *B , int N);
int main()
{
	int A[100],B[50];
	int M,N,j,i;
	recup_afficheTableau (A, &M ,B , &N);
	concatener (A,M,B,N);
}
void recup_afficheTableau (int *A, int *M ,int *B , int *N)
{
	int i;
	printf("saisir la taille du tableau A:");
        scanf("%d",M);
        for(i=0;i<*M;i++)
        {
                printf("A[%d]=",i);
                scanf("%d",&A[i]);
        }
        printf("saisir la taille du tableau B:");
        scanf("%d",N);
        for(i=0;i<*N;i++)
        {
                printf("B[%d]=",i);
                scanf("%d",&B[i]);
        }

}
void concatener(int *A , int M , int *B , int N)
{
	int i,j;
	printf("on peut obtenir le tableau suivant:\n");
        j=0;
        for(i=M;i<(M+N);i++)
        {
                A[i]=B[j];
                j++;
        }
        for(i=0;i<(M+N);i++)
        {
                printf("A[%d]=%d\n",i,A[i]);
        }

}
