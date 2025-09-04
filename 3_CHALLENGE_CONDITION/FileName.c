#pragma warning (disable:4996)


#include<stdio.h> 
int main() {

	int num1, num2;

	printf("enter num1 \n");
	scanf("%d", &num1);
	printf("enter num2 \n");
	scanf("%d", &num2);

	if (num1 == num2) {
		printf("result %d \n", (num1 + num2) * 3);
	}

	else if (num1 != num2) {
		printf("result %d \n", num1 + num2);
	}

	else {
		printf("erreur \n");
	}

	return 0;
}