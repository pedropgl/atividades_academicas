programa
{
	
	funcao inicio()
	{
	real peso, altura, IMC
		
		escreva("Digite seu peso em quilos: ")
		leia(peso)

		escreva("Digite sua altura em metros: ")
		leia(altura)

	IMC = peso / (altura * altura)

	se(IMC < 18.50){
		escreva("Status: Abaixo do peso")
	}
		senao se(IMC >= 18.50 e IMC <= 24.99){
			escreva("Status: Peso é normal")
		}
			senao se(IMC >= 25.00 e IMC <= 29.99){
				escreva("Status: Sobrepeso")
			}	
				senao se(IMC >= 30.00 e IMC <= 34.99){
					escreva("Status: Obesidade Grau I")
				}
					senao se(IMC >= 35.00 e IMC <= 39.99){
						escreva("Status: Obesidade Grau II")
					}
						senao{ 
							escreva("Status: Obesidade Grau III ou Mórbida")}
				
				
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 388; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */