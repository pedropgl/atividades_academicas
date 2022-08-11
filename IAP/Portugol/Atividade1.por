programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		//1. Escreva um programa que receba 03 notas e mostre ao usuário a soma de todas e a média entre elas.
		real nota1, nota2, nota3, media

		escreva("---Calcule sua média aqui---\n")

		escreva("Digite a primeira nota: ")
		leia(nota1)

		escreva("Digite a segunda nota: ")
		leia(nota2)

		escreva("Digite a terceira nota: ")
		leia(nota3)

		media = (nota1 + nota2 + nota3) / 3

		escreva("----------------------------\n")

		escreva("Sua média é: ", mat.arredondar(media, 2))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 553; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */