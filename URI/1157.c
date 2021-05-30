#include <stdio.h>
int main() {
	int A, i;
	scanf("%d", &A);
	for(i = 1; i <= A; i++) {
		if((A%i) == 0){
			printf("%d", i);
			printf("\n");
        }
	}
	return 0;
}
