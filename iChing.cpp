#include <iostream>
#include <cstdlib>
#include <locale>
#include<math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int a[6], e[6];
	int b = 0;
	
	for(int i = 0 ; i<=5 ; ++i){
	
		int n;
		cout<<"Voc� tem que digitar 0 para coroa ou 1 para cara.\n";
		cin>>n; 
		e[i]= n;
	}
	
	for(int i = 0 ; i <= 5 ; ++i){
	   a[i] = e[5-i];
	}
	
	cout << endl;
	
	for(int i = 0; i < 6; ++i){
		int c;
		if (a[i] == 1){
			c = 2;
		}else if (a[i] != 1 ){
			c = 0;
		}
		if(c !=0 ){
			b =  pow (c, i) + b;
		}
	}

	cout<<"\n******\n\n";
	
	for(int i = 5; i >= 0; --i){
		cout << e[i] << endl;
	}
	
	cout << "\n******\n";
	
	for(int i = 0; i < 6; ++i){
		if (a[i] == 0){
			cout << "     ___  ___\n";
		}else if(a[i] == 1){
			cout << "     ________\n";
		}
		else{
			cout << "Voc� deveria ter digitado 0 para coroa ou 1 para cara.\n";	
			break;
		}
	}
	
	cout << "\n******\n"   << endl;
	
	switch (b){
		case 0:
		cout<< "Receptividade:\n Sucesso pela obedi�ncia.";
		break;
		
		case 1:
		cout<< "Caminho: \n A virtude triunfa.";
		break;
		
		case 2:
		cout<< "Uni�o: \n Unidade traz boa sorte.";
		break;
		
		case 3:
		cout<< "Seguran�a: \n A sua seguran�a inspira respeito.";
		break;
		
		case 4:
		cout<< "Tranquilidade: \n A a��o correta traz felicidade.";
		break;
		
		case 5:
		cout<< "Progresso: \n A recompensa n�o tarda a chegar.";
		break;
		
		case 6:
		cout<< "Compreens�o: \n Procure conhecimento mais profundo das coisas";
		break;
		
		case 7:
		cout<< "Cuidado: \n Espere a hora de agir.";
		break;
		
		case 8:
		cout<< "Mod�stia: \n Humildade traz sucesso.";
		break;
		
		case 9:
		cout<< "Imobilidade: \n Pare ou aja no momento apropriado.";
		break;
		
		case 10:
		cout<< "Problemas: \n Pe�a conselhos e opin�es.";
		break;
		
		case 11:
		cout<< "Evolu��o: \n Trabalhe com firmeza.";
		break;
		
		case 12:
		cout<< "Recompensa: \n Sucesso para as pessoas simples.";
		break;
		
		case 13:
		cout<< "O viajante: \n Boa sorte para os viajantes.";
		break;
		
		case 14:
		cout<< "Sensibilidade: \n Pense nos problemas dos outros.";
		break;
		
		case 15:
		cout<< "Escolha: \n Ande sempre em boa companhia.";
		break;
		
		case 16:
		cout<< "Coordena��o: \n A experi�ncia do trabalho em grupo.";
		break;
		
		case 17:
		cout<< "Inexperi�ncia: \n Conte com a ajuda dos mais velhos.";
		break;
		
		case 18:
		cout<< "Abismo: \n Controle os temores e tenha confian�a.";
		break;
		
		case 19:
		cout<< "Confus�o: \n Procure pensar com calma.";
		break;
		
		case 20:
		cout<< "Chegou o momento de agir.";
		break;
		
		case 21:
		cout<< "A��o: \n Aguarde o sucesso vem depois.";
		break;
		
		case 22:
		cout<< "Paci�ncia: \n Procure n�o discutir.";
		break;
		
		case 23:
		cout<< "Conflito: \n Saiba parar no caminho.";
		break;
		
		case 24:
		cout<< "Ascens�o: \n Saiba aproveitar a ocasi�o.";
		break;
		
		case 25:
		cout<< "Prud�ncia: \n Avan�ar somente com boas raz�es.";
		break;
		
		case 26:
		cout<< "Colabora��o: \n Ajuda m�tua e compreens�o";
		break;
		
		case 27:
		cout<< "Sabedoria: \n Procure um conselho de um s�bio.";
		break;
		
		case 28:
		cout<< "Perserveran�a: \n Persist�ncia traz recompensas.";
		break;
		
		case 29:
		cout<< "Paz e beleza: \n Grande sucesso.";
		break;
		
		case 30:
		cout<< "For�a: \n Indiferen�a aos coment�rios";
		break;
		
		case 31:
		cout<<"Encontro: \n Desnconfie dos mais fortes.";
		break;
		
		case 32:
		cout<< "Obst�culo: \n Problemas sem muita import�ncia.";
		break;
		
		case 33:
		cout<< "Repouso: \n Boa sorte aos que est�o no caminho certo.";
		break;
		
		case 34:
		cout<< "Dificuldade: \n Tente consolidar a posi��o atual.";
		break;
		
		case 35:
		cout<< "Ganho: \n Avance sem hesitar.";
		break;
		
		case 36:
		cout<< "Trov�o: \n Sucesso e felicidade.";
		break;
		
		case 37:
		cout<< "Justi�a: \n A lei protege o s�bio.";
		break;
		
		case 38:
		cout<< "Harmonia: \n Alegria e sucesso pelo caminho certo.";
		break;
		
		case 39:
		cout<< "Integridade: \n N�o se oponha ao certo.";
		break;
		
		case 40:
		cout<< "Determina��o: \n Aja com suavidade e firmeza.";
		break;
		
		case 41:
		cout<< "Distin��o: \n Comporte-se sempre bem";
		break;
		
		case 42:
		cout<< "Realiza��o: \n Termine o que voc� come�ou.";
		break;
		
		case 43:
		cout<< "Cont�ncia: \n Seja fiel �s suas obriga��es.";
		break;
		
		case 44:
		cout<< "Equil�brio: \n Procure agir com bom senso.";
		break;
		
		case 45:
		cout<< "Luminosidade: \n Sua boa estrela est�  brilhando.";
		break;
		
		case 46:
		cout<< "Renova��o: \n Concentre-se e caminhe para o sucesso.";
		break;
		
		case 47:
		cout<< "Amor: \n D� e receba amor.";
		break;
		
		case 48:
		cout<< "Ordem: \n Sucesso tempor�rio. Ponha as coisas no lugar.";
		break;
		
		case 49:
		cout<< "Perda: \n A confian�a voltar�.";
		break;
		
		case 50:
		cout<< "Conten��o: \n Saiba esperar e aproveitar.";
		break;
		
		case 51:
		cout<< "Confian�a: \n Confie mas seja cauteloso.";
		break;
		
		case 52:
		cout<< "Confiss�o: \n Reconhe�a os erros para ter paz.";
		break;
		
		case 53:
		cout<< "Desuni�o: \n Se poss�vel, reconcilie.";
		break;
		
		case 54:
		cout<< "Alegria: \n Aguarde surpresas.";
		break;
		
		case 55:
		cout<< "Conduta: \n Decidir e avan�ar.";
		break;
		
		case 56:
		cout<< "Paz: \n Prospera o homem de valor moral.";
		break;
		
		case 57:
		cout<< "Enriquecimento: \n Riqueza de saber e de virtudes.";
		break;
		
		case 58:
		cout<< "Espera: \n N�o se precipite.";
		break;
		
		case 59:
		cout<< "Boa-sorte: \n O futuro ser� melhor que o presente.";
		break;
		
		case 60:
		cout<< "Poder: \n Hora de avan�ar.";
		break;
		
		case 61:
		cout<< "Posse: \n N�o tema fracassos.";		
		break;
		
		case 62:
		cout<< "Fraqueza: \n Falar muito pode ser perigoso.";
		break;
		
		case 63:
		cout<< "Tranforma��o: \n A mudan�a � positiva.";
		break;
	}
		
	cout << "\n******\n\n"   << endl;		
	return 0;
}
