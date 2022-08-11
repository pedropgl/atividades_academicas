programa 
{
	inclua biblioteca Matematica --> m
	
	funcao inicio()
	{ 
		real a1, a2
		escreva("Digite o primeiro algoritimo: ")
		leia(a1)
		escreva("Digite o segundo algoritimo: ")
		leia(a2)

		limpa()

		 escreva("Soma: ", m.arredondar (soma(a1,a2),2))
		 escreva("\nMultiplicação: ", m.arredondar (mult(a1,a2),2))
		 escreva("\nSubtração: ", m.arredondar (sub(a1,a2),2))
		 escreva("\nDivisão: ", m.arredondar (div(a1,a2),2))

	}
		
	
	funcao real soma(real a1, real a2)
	
	{
		real s

		s = a1 + a2
		
		retorne s
	}

	funcao real mult(real a1, real a2)

	{
		real m

		m = a1 * a2

		retorne m
	}

	funcao real sub(real a1, real a2)

	{
		real s

		s = a1 - a2

		retorne s
	}
	
	funcao real div(real a1, real a2)

	{
		real d

		d = a1 / a2

		retorne d
	}

}


/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 247; 
 * @DOBRAMENTO-CODIGO = [32, 42, 52];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */