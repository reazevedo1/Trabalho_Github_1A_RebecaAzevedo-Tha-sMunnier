#include <iostream>


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/

int conta_letra (string palavra)
{
int qtd;
qtd=palavra.length();
return qtd;	
}

}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
string substituirLetra(char letra1,char letra2, string texto)
{
	int conta=conta_letra(texto);
	int i;
	for(i=0; i<conta; i=i+1)
	{
		if(texto[i]==letra1)
		{
			texto[i]=letra2;
		}
	}
	return texto;
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
}

int main(){
	
	int r;
	string p;
	cout<<"Digite a palavra: \n";
	getline(cin,p);
	r=conta_letra(p);
	cout<<r<<"\n\n\n";
	
	string t, tex; 
	char a;
	char b;
	cout<<"texto: \n";
	getline(cin, t);
	cout<<"letra1: \n";
	cin>>a;
	cout<<"letra2: \n";
	cin>>b;
	tex=substituirLetra(a, b, t);
	cout<<tex<<;



	return 0;
}
