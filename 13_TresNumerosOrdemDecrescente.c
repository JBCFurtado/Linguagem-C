#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int n1, n2, n3;
	printf ("Digite tr�s n�meros: ");
	scanf (" %d %d %d", &n1, &n2, &n3);
if ( (n1 != n2) && (n2 != n3) ) {
	if(n1 < n2 && n2 < n3){
    	printf("\nOrdem decrescente dos n�meros: %d,%d,%d",n3,n2,n1);
     	printf("\n");
    } else {
	 	if(n3 < n1 && n1 < n2) {
	    	printf("\nOrdem decrescente dos n�meros: %d,%d,%d",n2,n1,n3);
	   		printf("\n");
	   	} else {
			if(n2 < n3 && n3 < n1) {
				printf("\nOrdem decrescente dos n�meros: %d,%d,%d",n1,n3,n2);
		  		printf("\n");
			} else {
		     	if(n1 < n3 && n3 < n2) {
					printf("\nOrdem decrescente dos n�meros: %d,%d,%d",n2,n3,n1);
					printf("\n");
		       	} else {
			   		if(n2 < n1 && n1 < n3) {
			      		printf("\nOrdem decrescente dos n�meros: %d,%d,%d",n3,n1,n2);
			     		printf("\n");
			    	} else {
				 		if(n3 < n2 && n2 < n1) {
				    		printf("\nOrdem decrescente dos n�meros: %d,%d,%d",n1,n2,n3);
				    		printf("\n");
				   		} else {
				       		printf("\nN�meros Inv�lidos!");
				       		printf("\n");
				      	}
					}
			  	}
		    }
	    }
	}	 	
} else {
	printf("Existem n�meros iguais, tente novante!");
}
}


