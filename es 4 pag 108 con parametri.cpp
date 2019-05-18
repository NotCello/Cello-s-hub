#include <stdlib.h>
#include <stdio.h>

int richiesta() {
	int n;
	printf("Quanti asterischi vuoi inserire?");
	scanf("%d", &n);
	return (n);
}

void stampa_asterischi(int na) {
	int i;
	for(i= 0; i < na; i++) 
		printf("* ");
	printf("\n");
}

main() {
	int n;
	n = richiesta();
	printf("Gli asterischi inseriti sono: %d\n", n);
	stampa_asterischi(n);
	
}
