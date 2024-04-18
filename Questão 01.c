/*Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de três e que se encontram no conjunto dos números de 1 até 500.*/

#include <stdio.h>

main(){
	int iCont, somaImp;
	somaImp =  0;
	for(iCont = 1; iCont<=500; iCont++){
		if(iCont%2==1 && iCont%3==0){
			somaImp += iCont;
		}
	}
	printf("%d", somaImp);
}
