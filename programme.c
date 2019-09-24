#include <stdio.h>
#include <unistd.h>
#include <time.h>
int main(int argc, char **argv)
{
	char a1[50];
	int i;
	int j;	
	int k;
	int l;

	l = 0;
	i = 0;
	j = 0;
	k = srand(time(NULL));
	a1[50] = '\0';
	char aliment[10][50]={"creme fraiche", "mayonnaise", "ketchup", "tomate", "salade", "oeuf", "cornichons", "gruyere", "tome", "camenbere"};
	printf ("Bonjour jeune cuisinier donne moi une viande ou un poisson. je te ferai un sandwich!!!!\n");
	scanf ("%s", a1);
	write (1, "\n", 1);
	printf ("les ingredient sont:\n%s\n", a1);
	while (i <= 5)	
	{	
		j = 0;
		k = rand() % 8 + 1;

		if (l < k)
		{
			l = k;
			while(aliment[k][j]!='\0')
			{
				write (1, &aliment[k][j], 1);
				j++;
			}

			write (1, "\n", 1);
		}
		i++;
	}
}
