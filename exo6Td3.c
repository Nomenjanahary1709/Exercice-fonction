#include<stdio.h>
#include<string.h>
void saisirMot( char *chaine);
int estPalindrome( char *chaine);
void afficheResultat(int x);
int main()
{
	char chaine[50];
	int x;
	saisirMot(chaine);
    	x = estPalindrome(chaine);
    	afficheResultat(x);

	return (0);
}
void saisirMot( char *chaine)
{
	printf("veuillez entrer le mot dont vous vouliez verifier:");
	scanf("%s",chaine);
}
int estPalindrome( char *chaine)
{
	int t ,x,i;
	t=strlen(chaine);
	x=t-1;
	for(i=0;i<t;i++)
	{
		if(chaine[i]==chaine[x])
		{
			x--;
		}
		else
		{
			break;
		}
	}
	return x;
}
void afficheResultat( int x)
{
	if(x>0)
	{
		printf("ce n'est pas un  palindrome");
	}
	else 
	{
		printf("c'est un palindrome");
	}

}



