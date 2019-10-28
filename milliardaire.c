#include <stdio.h>

int main()
{
int i;
long int res = 0;
long int an = 0;
long double mul = 0;

i = 0;
printf ("combien tu veux mettre aux depart: \n");
scanf ("%ld",&res);
printf ("par combien tu va multiplier cette somme: \n");
scanf ("%Le",&mul);
printf ("pendant combien d'années: \n");
scanf ("%ld",&an);
write(1, "\n", 1);
write(1, "\n", 1);
write(1, "\n", 1);
while (i < an)
{
	res = res + (res*mul);
	printf ( "%i année tu a %ld\n", i, res);
	i++;
}

}
