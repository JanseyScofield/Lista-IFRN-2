/*) Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada 
de dados deve terminar quando for lido um número negativo.*/

#include <stdio.h>

main(){
	int num, iCont;
	int vetInter[4];
	
	for(iCont = 0; iCont < 4; iCont ++)
		vetInter[iCont] = 0;
	
	do{
		scanf("%d", &num);
		if(num >=0 && num <= 25)
			vetInter[0]++;
		if(num >=26 && num <= 50)
			vetInter[1]++;
		if(num >=51 && num <= 75)
			vetInter[2]++;
		if(num >=76 && num <= 100)
			vetInter[3]++;
	}while(num >= 0);
	
	printf("Os quantidade de valores nos intervalos, respectivamente:\n");
	for(iCont = 0;iCont <= 3; iCont++)
		printf("%d\n", vetInter[iCont]);
}
