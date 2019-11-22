#include <iostream>
#include <conio.h>
#include <string.h>
	using namespace std;
	
//OI
/*
	Conta todas as letras 'letra' contidas em 'texto'
*/

	int conta_letra (string palavra)
	{
		int qtd;
		qtd=palavra.length();
		return qtd;	
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
	Conta todas as palavras contidas em 'texto'
*/
	int conta_palavras(string texto)
	{
		int x,y,z;
		y=0;
		z=conta_letra(texto);
		for(x=0;x<z;x=x+1)
		{
			if(texto[x]==' ')
			y=y+1;
		}
		if(y>=1)
			y=y+1;
		return y;
	}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
	int contaPalavras(string palavra, string texto)
	{
		size_t pos=texto.find(palavra);
		int contador=0;
		while(pos !=string ::npos)
		{
			contador++;
			texto=texto.substr(pos+1);
			pos=texto.find(palavra); 
		}
		return contador; 
	}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
	string substituirPalavras(string palavra1, string palavra2, string texto)
	{
		size_t pos=texto.find(palavra1);
		while(pos !=string ::npos)
		{
    		texto.replace(pos,palavra1.length(),palavra2);
			pos=texto.find(palavra1);
		}
		return texto;
	}

	main()
	{
		//declaração das variáveis
		int A, C, E, x;
		string B, D, p, t, aa,bb;
		char a, b, R;
		
		//recebimento dos dados 'palavra' e 'texto'
		cout<<"Digite uma palavra: \n";
		getline(cin,p);
		cout<<"Digite um texto: \n";
		getline(cin, t);
		
		//evio de dados para a função 'conta_letra' e impresão dos dados retornados
		A=conta_letra(p);
		cout<<"A palavra -- "<<p<<" -- contem: "<<A;
		if(A==1)
			cout<<" letra\n\n\n";
			else cout<<" letras\n\n\n";
		
		//evio de dados para a função 'conta_palavras' e impresão dos dados retornados						
		C=conta_palavras(t);
		cout<<"O texto contem: "<<C;
		if(C==1)
			cout<<" palavra\n\n\n";
			else cout<<" palavras\n\n\n";
		
		//evio de dados para a função 'contaPalavras' e impresão dos dados retornados	
		E=contaPalavras(p,t);
		cout<<"O texto contem: "<<E;
		if(E==1)
			cout<<" palavra -- "<<p<<" --\n\n\n";
			else cout<<" palavras -- "<<p<<" --\n\n\n";
			
		//evio de dados para a função 'substituirLetra' e impresão dos dados retornados	
		for(x=0;1;x=x++)
		{
			cout<<"\n";
			cout<<"substituir a letra: \n";
			cin>>a;
			cout<<"pela letra: \n";
			cin>>b;
			B=substituirLetra(a, b, t);
			t=B;
			cout<<"\n\nDeseja fazer mais alguma substituicao?\n";
			cout<<"sim=s/nao=n\n";
			cin>>R;
			if(R=='n'||R=='N')
				break;
		}
		cout<<"\n"<<B<<"\n\n\n";
		
		//evio de dados para a função 'substituirPalavras' e impresão dos dados retornados
		for(x=0;1;x=x++)
		{
			cout<<"\n";
			cout<<"substituir a palavra: \n";
			cin>>aa;
			cout<<"pela palavra: \n";
			cin>>bb;
			D=substituirPalavras(aa, bb, t);
			t=D;
			cout<<"\n\nDeseja fazer mais alguma substituicao?\n";
			cout<<"sim=s/nao=n\n";
			cin>>R;
			if(R=='n'||R=='N')
				break;
		}
		cout<<"\n"<<D<<"\n\n\n";



	return 0;
}
