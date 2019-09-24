#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
	char clientAdress[150];
	char clientName[50];
	char clientCode[100];
	char clientEmail[150];
	int n;
	int a;
	int c;
	int e;

	e = 0;
	c = 0;
	i = 0;
	n = 0;
	a = 0;
	printf ("quel est le nom du client\n");	
	scanf ("%[^\n]%*c", clientName);
	printf ("quel est l'adresse du client\n");
	scanf ("%[^\n]%*c", clientAdress);
	printf ("quel est le code postal du client\n");
	scanf ("%[^\n]%*c", clientCode);
	printf ("quel est l'email du client\n");
	scanf ("%[^\n]%*c", clientEmail);

	FILE *ft = NULL;
	ft = fopen ("facture.pdf", "a");
	ft = fopen ("facture.pdf", "w");
	fprintf (ft, "JULES IMBERT");
	
	while (clientName[n] != '\0')
		n++;
	while (i <= 122 - n - 12)
	{
	fprintf (ft, " ");
	i++;
	}
	i = 0;
	while (clientName[i] != '\0')
	{
	fprintf (ft, "%c", clientName[i]);
	i++;
	}
	fprintf (ft, "\n");

	fprintf (ft, "12 rue chaptal");
	
	while (clientAdress[a] != '\0')
		a++;
	i = 0;
	while (i <= 122 - a - 14)
	{
	fprintf (ft, " ");
	i++;
	}
	i = 0;
	while (clientAdress[i] != '\0')
	{
	fprintf (ft, "%c", clientAdress[i]);
	i++;
	}

	fprintf (ft, "\n");
	fprintf (ft, "92300 levallois-perret");
	

	while (clientCode[c] != '\0')
		c++;
	i = 0;
	while (i <= 122 - c - 22)
	{
	fprintf (ft, " ");
	i++;
	}
	i = 0;
	while (clientCode[i] != '\0')
	{
	fprintf (ft, "%c", clientCode[i]);
	i++;
	}

	fprintf (ft, "\n");
	fprintf (ft, "imbertjules@gmail.com");


	while (clientEmail[e] != '\0')
		e++;
	i = 0;
	while (i <= 122 - e - 21)
	{
	fprintf (ft, " ");
	i++;
	}
	i = 0;
	while (clientEmail[i] != '\0')
	{
	fprintf (ft, "%c", clientEmail[i]);
	i++;
	}
			
	fclose (ft);
}

