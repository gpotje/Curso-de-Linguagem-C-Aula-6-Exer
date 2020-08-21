#include <stdio.h>
#include <locale.h> 


main(){
	setlocale(LC_ALL,"Portuguese");
	
	// if (Condição){verdadeiro} else {falso}

	
	int	x = 10 ,y = 0;
	
	if (x>=9){y = 100;}
	
			else{y =200;}
		
	printf("X = %i  resultado: Y = %i",x,y);
		
}
