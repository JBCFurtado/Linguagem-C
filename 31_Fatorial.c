#include <stdio.h>
int fat (int n){
	int f = 1;
		while(n >1){
		f *= n;
		n--;
	}
	return f;
}
int main (void){
	int a, factorial;
	printf ("Entre com um numero para ser fatorado: ");
	scanf("%d", &a);
	factorial = fat(a);
	printf ("O fatorial de %d = %d\n ",a, factorial);
	return 0;
}
