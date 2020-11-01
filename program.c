#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	//Ensure the the numbers are not repeated when compiling
	srand(time(NULL));
	
	int qtdJogos = 0;
	int qtdDezenas = 0;
	int aux = 0, auxJogo = 0;
	
	printf("************************************************\n");
	printf("\t\tMega-sena\n");
	printf("************************************************\n\n");
	printf("Digite a quantidade de jogos que deseja fazer: ");
	scanf("%d", &qtdJogos);
	
	printf("Digite a quantidade de dezenas para cada jogo (Entre 6 e 15): ");
	scanf("%d", &qtdDezenas);
	
	//Ensure that the user enters the correct value	
	if(qtdDezenas < 6 || qtdDezenas > 15){
		
		printf("Valor tem que ser entre 6 e 15!!\n");
		
	}else{
		
		for(auxJogo = 1; auxJogo <= qtdJogos; auxJogo++){
		printf("\n****************************************** JOGO NUM: %d ******************************************\n\n", auxJogo);
		for(aux = 0; aux < qtdDezenas; aux++){
			int	vetor[aux];
			vetor[aux] = rand() % 59 + 1; //generate random numbers between 1 and 60
			printf("%d\t", vetor[aux]);
		}
		printf("\n\n");
		}
	}
	
	system("PAUSE");
}
