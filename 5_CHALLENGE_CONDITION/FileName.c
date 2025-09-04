#pragma warning (disable:4996)


#include<stdio.h> 

int main() {

	int anne , choose;

	printf(" enter anne \n");
	scanf("%d", &anne);


	printf(" enter choose \n");
	scanf("%d", &choose);

	printf ("1 converter mois\n");

	printf ("2 Convertir en jours \n") ;

	printf("3 Convertir en heures \n ");

	printf ("4 Convertir en minutes \n ") ;

	printf("5 Convertir en secondes \n");

		
	switch (choose) {
	case 1:
		printf("1. %d mois \n", anne * 12);
		break;


	case 2:
		printf("2.  %d jours \n", anne * 365);
		break;

	case 3:
		printf("3.  %d heures\n", anne * 365 * 24);
		break;

	
	case 4:
		printf("3. %d minutes \n", anne * 365 * 24 * 60);
		break;


	case 5:
		printf("3. %d seconds \n", anne * 365 * 24 * 60*60);
		break;

	default:
		printf("erreur \n");
		break;
	}
	return 0;
	}


