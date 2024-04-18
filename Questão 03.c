/*Desenvolver um algoritmo que leia um número não determinado de valores e calcule e escreva a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade 
de valores negativos e o percentual de valores negativos e positivos.*/

#include <stdio.h>

main(){
	int qtdPos, qtdNeg, qtdTot;
	float valor, media, percentPos, percentNeg,somaVal;
	
	qtdPos = 0; 
	qtdNeg = 0;
	qtdTot = 0;
	somaVal = 0;
	do{
		scanf("%f", &valor);
		if(valor > 0)
			qtdPos++;
		else if(valor < 0)
			qtdNeg++;
		qtdTot += valor!=0? 1:0;
		somaVal+=valor;
	}while(valor != 0);
	
	media = somaVal/qtdTot;
	percentPos = (qtdPos*100.0)/qtdTot;
	percentNeg = (qtdNeg*100.0)/qtdTot;
	
	printf("Media: %.2f\n", media);
	printf("Quantidade Positivos: %d\n", qtdPos);
	printf("Quantidade Negativos: %d\n", qtdNeg);
	printf("Percentual Positivos: %.2f %\n", percentPos);
	printf("Percentual Negativos: %.2f %\n", percentNeg);
}
