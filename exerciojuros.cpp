#include <stdio.h> 
#include <locale.h>

float capital;
int tempo;

float calculo(){
float planoA, planoB;	

	if(tempo >= 24){
		planoA = (capital*2/100)*tempo + capital;
		printf("Você se enquadra no plano A e o valor final seria:  %.3f",planoA);
}else if(tempo >=12 && tempo <= 23 ){
		planoB = (capital*0.8/100)*tempo + capital;
		printf("Você se enquadra no plano B e o valor final seria:  %.3f",planoB);
}else{
		printf("tempo minino é 12 meses");
}

}

int main(){
	 setlocale(LC_ALL, "Portuguese");

float resultado;

	printf("Digite o valor do Capital a investir: ");
	scanf("%f",&capital);
	printf("Digite quantos meses o valor ficara para investimento: ");
	scanf("%d",&tempo);
	resultado = calculo();	
	
}
