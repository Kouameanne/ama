# include <stdio.h>
// prototype de la fonction puissance 
int puissance (int x , int n)
{
	if (n==0)
		return 1;
	else
	return x* puissance (x,n-1);
}
main()
{
	int a , m, res;
	printf("entre un nombre: \n");
	scanf("%i",&a);
	printf("entre exposant:\n");
	scanf("%i",&m);
	//appel de la fonction puissance 
	res=puissance (a,m);
	printf("%i puissance %i = %i",a,m,res);
}
