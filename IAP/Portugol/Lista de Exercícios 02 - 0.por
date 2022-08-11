programa
{/*1. Elabore um programa em que o usuário informa dois números (n1 e n2). O primeiro número (n1) indica o início do laço de repetição e o segundo número (n2) o fim do laço de repetição. 
O programa deverá imprimir a soma de todos os números pares no intervalo entre n1 e n2.*/
	
	funcao inicio()
	{
		inteiro n1, n2, lr, qp = 0, soma = 0 

		escreva("Digite o valor de n1: ")
		leia(n1)

		escreva("Digite o valor de n2: ")
		leia(n2)
		
		para(lr = n1; lr <= n2; lr++)
			se(lr % 2 == 0){
				qp++
				soma = lr + soma
		}	
		escreva(qp)
		escreva("\n", lr)	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 343; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */