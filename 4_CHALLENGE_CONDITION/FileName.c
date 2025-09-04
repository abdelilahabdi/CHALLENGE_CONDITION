#pragma warning (disable:4996)


#include<stdio.h> 
#include<math.h>
int main() {

	int b, a, c, delta;

	printf("enter b \n");
	scanf("%d", &b);

	printf("enter a \n");
	scanf("%d", &a);

	printf("enter c \n");
	scanf("%d", &c);

	delta = pow(b, 2) - 4 * a * c;

	if (delta > 0) {
		printf("Deux solutions reelles distinctes ");
	}

	else if (delta == 0) {
		printf("Une solution double \n");
	}

	else {
		printf("Pas de solution reelle \n");
	}

	return 0;
}