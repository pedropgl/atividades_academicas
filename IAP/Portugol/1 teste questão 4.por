programa
{ /*Uma empresa decidiu reajustar os sal´arios de seus funcion´arios de acordo com os seguintes crit´erios:*/
	
	const real sm = 1100.0
	
	funcao inicio()
	{

	cadeia nome
	real s

	escreva("Digite seu nome: ")
	leia(nome)
	escreva("Digite o seu salário: ")
	leia(s)

	}

	






	funcao real sal(const real sm, real s)
	
	{
	real sr
	
		para (s < sm){
			sr = s * 1.30
				retorne sr
				}
		para (s >= sm ou s < sm * 2){
			sr = s * 1.20
				retorne sr
				}
		para (s >= sm * 2 ou s < sm * 3){
			sr = s * 1.15
				retorne sr
				}
		para (s >= sm * 3){
			sr = s * 1.10
				retorne sr
				}	
	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 601; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */