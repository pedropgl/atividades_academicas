programa
{
	const real sm = 1100.00
	real s, sr
	cadeia n
	
	funcao inicio()
	{
		escreva("Digite seu nome: ")
		leia(n)
		escreva("Digite o seu salário: ")
		leia(s)

		caso (s < sm){
			sr = s * 1.30
				retorne sr
				}
		caso (s >= sm ou s < sm * 2){
			sr = s * 1.20
				retorne sr
				}
		caso (s >= sm * 2 ou s < sm * 3){
			sr = s * 1.15
				retorne sr
				}
		caso (s >= sm * 3){
			sr = s * 1.10
				retorne sr




		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 164; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */