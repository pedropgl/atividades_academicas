programa
{	
	funcao inicio() //Crie um algoritmo para ler um n´umero inteiro e mostrar seu antecessor e sucessor.

	{
		inteiro x
		
		escreva("Digite um número: ")
		leia(x)

		limpa()
		
		escreva("O antecessor de ", x, " é: ", ante(x), "\nE o sucessor é: ", suc(x))
	}

	funcao inteiro ante(inteiro x)

	{
		inteiro ant
		
		ant = x - 1

		retorne ant
		
	}

	funcao inteiro suc(inteiro x)

	{
		inteiro su

		su = x + 1

		retorne su
	}

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 277; 
 * @DOBRAMENTO-CODIGO = [15, 26];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */