#include <stdio.h>

int main(){ // start main
	int Num;
	printf("Enter number: ");
	scanf("%d", &Num);
	if (Num % 2 == 0){
		printf("%d is Even", Num);
	}
	else{
		printf("%d is Odd", Num);
	}
return 0;
} // end main
