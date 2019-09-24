#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	int i4 = 0;
	int i5 = 0;
	int i6 = 0;
	int n;

	
	n = 0;
	i1 = srand (time (NULL));
	i2 = srand (time (NULL));
	i3 = srand (time (NULL));
	i4 = srand (time (NULL));
	i5 = srand (time (NULL));
	i6 = srand (time (NULL));
	printf ("combien tu veux de dés, entre un nombre entre 1 et 6 : \n");
	scanf ("%d",&n);
	i1 = (rand() % 6) + 1;
	i2 = (rand() % 6) + 1;
	i3 = (rand() % 6) + 1;
	i4 = (rand() % 6) + 1;
	i5 = (rand() % 6) + 1;
	i6 = (rand() % 6) + 1;
	if (!(n <= 6 && n >= 1))
		printf ("entre 1 et 6 trou du cul!!!!\n");
	else 
	{
	printf("les numéros sont:\n");
	switch (n)
	{
		case 1 :printf ("%d\n", i1); 
		       break;
		case 2: printf("%d\n%d\n",i1,i2);
			break;
	 	case 3: printf("%d\n%d\n%d\n",i1 ,i2, i3);
			break;
		case 4: printf("%d\n%d\n%d\n%d\n",i1 ,i2, i3, i4);
			break;
		case 5: printf("%d\n%d\n%d\n%d\n%d\n",i1 ,i2, i3, i4, i5);
			break;
		case 6: printf("%d\n%d\n%d\n%d\n%d\n%d\n",i1 ,i2, i3, i4, i5, i6);
			break;		
	}
	}
}
