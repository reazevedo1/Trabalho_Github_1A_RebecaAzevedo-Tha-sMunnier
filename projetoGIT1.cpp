# include  < iostream >
# include  < string >
usando  espaço para nome  std ;

/ *
	Conta todas as letras 'letra' contidas em 'texto'
* /

int  conta_letra (string palavra)
{
int qtd;
qtd = palavra. length ();
return qtd;	
}

}

/ *
	Substitui todas as ocorrências de 'letra1' por 'letra2' contidas em 'texto'
* /
string substituirLetra ( char letra1, char letra2, string texto)
{
	int conta = conta_letra (texto);
	int i;
	para (i = 0 ; i <conta; i = i + 1 )
	{
		if (texto [i] == letra1)
		{
			texto [i] = letra2;
		}
	}
	retornar texto;
}

/ *
	Conta todas as ocorrências de 'palavra' contidas em 'texto'
* /
int  contaPalavras (string palavra, string texto)
{
}

/ *
	Substitui todas as ocorrências de 'palavra1' por 'palavra2' em 'texto'
* /
void  substituirPalavras (string palavra1, string palavra2, string texto)
{
}

int  main () {
	
	//respectivo a funcao1
	int r;
	string p;
	cout << " Digite a palavra: \ n " ;
	getline (cin, p);
	r = conta_letra (p);
	cout << r << " \ n \ n \ n " ;
	
	//respectivo a funcao2
	string t, tex; 
	char a;
	char b;
	cout << " texto: \ n " ;
	getline (cin, t);
	cout << " letra1: \ n " ;
	cin >> a;
	cout << " letra2: \ n " ;
	cin >> b;
	tex = substituirLetra (a, b, t);
	cout << tex << " \ n \ n \ n " ;



	retornar  0 ;
}
