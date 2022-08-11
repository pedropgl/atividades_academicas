programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		escreva("Stats CS:GO")

		real K, D, R, KPR, DPR, KD

		escreva("\nFrags no game? ")
		leia(K)

		escreva("Mortes no game? ")
		leia(D)

		escreva("Rodadas ao total? ")
		leia(R)

		KPR = K / R

		DPR = D / R

		KD = K / D

		limpa()
		
		escreva("Stats: \n")

		escreva("Kills por round: ", mat.arredondar(KPR, 2))
		escreva("\nMortes por round: ", mat.arredondar(DPR, 2))
		escreva("\nKD: ", mat.arredondar(KD, 2))

		

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 467; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */