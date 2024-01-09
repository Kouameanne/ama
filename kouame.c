#include<stdio.h>
void main()
{
	double a=1.5,b=2.5;
	FILE*fichier;
	//ouverture du fichier en ecriture grace a "W"
	fichier=fopen("essai.txt","W");
	//verifier que le fichier a bien ete ouvert
	if(fichier!=NULL)
	{
	// ECRITURE
	fprintf(fichier,"%lf\n",a);
	fprintf(fichier,"lf\n",b);
	fclose(fichier);
	}
	}

