programa
{ /*2. Escreva um programa para ler 2 valores, repetidamente e, se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero. 
O programa deverá imprimir o resultado da divisão do primeiro valor pelo segundo valor lido. 
Após terem sido lidos os dois valores e calculada a divisão, o usuário deverá ser questionado se quer continuar o programa.*/
	
	funcao inicio()
	{	
		real v1, v2, div
		caracter resposta

	
		escreva("Digite o primeiro valor: ")
		leia(v1)
		escreva("Digite o segundo valor: ")
		leia(v2)

	se(v2 == 0){
		limpa()
		escreva("Digite um valor diferente de 0.\n")
		inicio()
	}

	div = v1 / v2

	escreva("A divisão de ", v1, " por ", v2, " é: ", div)
	escreva("\nDeseja continuar (S/N): ")
	leia(resposta) 

		logico s = verdadeiro
		
		se(s){
		limpa()
		inicio()  
		}	
	}
		
	
	
	
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 766; 
 * @DOBRAMENTO-CODIGO = [16];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */