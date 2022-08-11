programa
{ /*1. Elabore um programa em que o usuário informa dois números (n1 e n2). O primeiro número (n1) indica o início do laço de repetição e o segundo número (n2) o fim do laço de repetição. 
  O programa deverá imprimir a soma de todos os números pares no intervalo entre n1 e n2.*/
	
	funcao inicio(){

		inteiro n1, n2, inter, soma=0, pares=0
	
		escreva("Digite o primeiro número: ")
		leia(n1)
		escreva("Digite o segundo número: ")
		leia(n2)

		para(inter = n1 ++; inter < n2; inter ++){  //Coloquei "n1 ++" para não incluir "n1" no intervalo dos pares
			se(inter % 2 == 0){
				pares ++
				soma = soma + inter
			}	
		}
		
		limpa()		
		escreva("Quantidade de números pares: ", pares)
		escreva("\nSoma dos números pares: ", soma)
		
		}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 570; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */