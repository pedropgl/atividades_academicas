programa
{
	inclua biblioteca Matematica-->mat
	
	funcao inicio()
	{
		escreva("Conversor de Celsius para Fahrenheit e Kelvin.\n")

		real C, F, K
		
		escreva("----------------------------------------------\n")

		escreva("Digite a temperatura em Celsius: ")
		leia(C)

		F = C * 1.8 + 32

		K = C + 273

		escreva("Temperatura em Fahrenheit: ", mat.arredondar (F,1))
		escreva("\nTemperatura em Kelvin: ", mat.arredondar (K,1))
		

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 326; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */