programa
{
	
	funcao inicio()
	{
		//2. Escreva um programa que imprima inicialmente ”Olá, visitante.”. Em seguida, receba duas variáveis, "Nome" e "Sobrenome" do usuário.
		//Por fim, exiba a mensagem de boas vindas exibindo o nome composto do usuário. Ex: ”Bem-vindo, Eduardo Trindade!”.
		
		escreva("Olá, visitante.\n")

		cadeia nome, sobrenome, nomecompleto, espaco

		escreva("Digite seu nome: " )
		leia(nome)

		escreva("Digite seu sobrenome: ")
		leia(sobrenome)

	     limpa()

	     espaco = " "

	     nomecompleto = nome + espaco + sobrenome

	     escreva("Bem-vindo, ",(nomecompleto), "!")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 582; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */