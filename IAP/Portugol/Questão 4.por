programa
{
	
	funcao inicio() /* Fa¸ca um algoritmo que receba o n´umero do mˆes e mostre o mˆes correspondente. Valide quando o
				mˆes for inv´alido e retorne para o usu´ario.*/


	{
		inteiro m
		
		escreva("Digite o número do mês (1-12): ")
		leia(m)

		escolha(m)
		{
			caso 1:
			escreva("Seu mês é Janeiro.")
			pare

			caso 2:
			escreva("Seu mês é Fevereiro.")
			pare

			caso 3:
			escreva("Seu mês é Março.")
			pare

			caso 4:
			escreva("Seu mês é Abril.")
			pare

			caso 5:
			escreva("Seu mês é Maio.")
			pare

			caso 6:
			escreva("Seu mês é Junho.")
			pare

			caso 7:
			escreva("Seu mês é Julho.")
			pare

			caso 8:
			escreva("Seu mês é Agosto.")
			pare

			caso 9:
			escreva("Seu mês é Setembro.")
			pare

			caso 10:
			escreva("Seu mês é Outubro.")
			pare

			caso 11:
			escreva("Seu mês é Novembro.")
			pare

			caso 12:
			escreva("Seu mês é Dezembro.")
			pare

			caso contrario:
			limpa() 
			escreva("Digite um número valido!\n")
			inicio() 
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 137; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */