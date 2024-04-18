/*) Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar : 
a. A menor altura do grupo; 
b. A maior altura do grupo; */

#include <stdio.h>

main(){
	float alturas, menAlt, maiAlt;
	int iCont;
	menAlt = 5;
	maiAlt = 0;
	for(iCont = 1; iCont<=15; iCont ++){
		scanf("%f", &alturas);
		fflush(stdin);
		if(alturas <= menAlt)
			menAlt =  alturas;
		if(alturas >= maiAlt)
			maiAlt = alturas;
		fflush(stdin);
	}
	printf("Menor altura: %.2f m\nMaior altura: %.2f m",  menAlt, maiAlt);
}
