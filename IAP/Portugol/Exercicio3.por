programa{
	/*Um número é dito ser primo quando pode ser dividido somente por 1 e por ele mesmo. O 7 é primo, você pode dividir só por 1 e por 7, por qualquer outro valor vai dar um resultado quebrado. 
	 O 12 não é primo, pois pode ser dividido por 1, 2, 3, 4, 6 e 12. Faça um algoritmo que leia um número digitado pelo usuário e retorne 'É primo' ou 'Não é primo'. 
	 Certifique-se de testar a entrada com valores grandes, como: 521, 673, 997, 479001599.*/
	
	funcao inicio(){

		inteiro dig, cont = 0, i		
		
		
		escreva("Digite um número: ")
		leia(dig)

		para(i = 1; i <= dig; i ++){
			se(dig % i == 0){
				cont ++
			}
		}
			se(cont == 2){
				limpa()
				escreva("O número ", dig, " é primo")
			}
			senao{
				limpa()
				escreva("O número ", dig, " não é primo.")	
			}			
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 675; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */