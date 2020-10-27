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
		cout<<"Você tem que digitar 0 para coroa ou 1 para cara.\n";
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
			cout << "Você deveria ter digitado 0 para coroa ou 1 para cara.\n";	
			break;
		}
	}
	
	cout << "\n******\n"   << endl;
	
	switch (b){
		case 0:
		cout<< "Receptividade:\n Sucesso pela obediência.";
		break;
		
		case 1:
		cout<< "Caminho: \n A virtude triunfa.";
		break;
		
		case 2:
		cout<< "União: \n Unidade traz boa sorte.";
		break;
		
		case 3:
		cout<< "Segurança: \n A sua segurança inspira respeito.";
		break;
		
		case 4:
		cout<< "Tranquilidade: \n A ação correta traz felicidade.";
		break;
		
		case 5:
		cout<< "Progresso: \n A recompensa não tarda a chegar.";
		break;
		
		case 6:
		cout<< "Compreensão: \n Procure conhecimento mais profundo das coisas";
		break;
		
		case 7:
		cout<< "Cuidado: \n Espere a hora de agir.";
		break;
		
		case 8:
		cout<< "Modéstia: \n Humildade traz sucesso.";
		break;
		
		case 9:
		cout<< "Imobilidade: \n Pare ou aja no momento apropriado.";
		break;
		
		case 10:
		cout<< "Problemas: \n Peça conselhos e opinões.";
		break;
		
		case 11:
		cout<< "Evolução: \n Trabalhe com firmeza.";
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
		cout<< "Coordenação: \n A experiência do trabalho em grupo.";
		break;
		
		case 17:
		cout<< "Inexperiência: \n Conte com a ajuda dos mais velhos.";
		break;
		
		case 18:
		cout<< "Abismo: \n Controle os temores e tenha confiança.";
		break;
		
		case 19:
		cout<< "Confusão: \n Procure pensar com calma.";
		break;
		
		case 20:
		cout<< "Chegou o momento de agir.";
		break;
		
		case 21:
		cout<< "Ação: \n Aguarde o sucesso vem depois.";
		break;
		
		case 22:
		cout<< "Paciência: \n Procure não discutir.";
		break;
		
		case 23:
		cout<< "Conflito: \n Saiba parar no caminho.";
		break;
		
		case 24:
		cout<< "Ascensão: \n Saiba aproveitar a ocasião.";
		break;
		
		case 25:
		cout<< "Prudência: \n Avançar somente com boas razões.";
		break;
		
		case 26:
		cout<< "Colaboração: \n Ajuda mútua e compreensão";
		break;
		
		case 27:
		cout<< "Sabedoria: \n Procure um conselho de um sábio.";
		break;
		
		case 28:
		cout<< "Perserverança: \n Persistência traz recompensas.";
		break;
		
		case 29:
		cout<< "Paz e beleza: \n Grande sucesso.";
		break;
		
		case 30:
		cout<< "Força: \n Indiferença aos comentários";
		break;
		
		case 31:
		cout<<"Encontro: \n Desnconfie dos mais fortes.";
		break;
		
		case 32:
		cout<< "Obstáculo: \n Problemas sem muita importância.";
		break;
		
		case 33:
		cout<< "Repouso: \n Boa sorte aos que estão no caminho certo.";
		break;
		
		case 34:
		cout<< "Dificuldade: \n Tente consolidar a posição atual.";
		break;
		
		case 35:
		cout<< "Ganho: \n Avance sem hesitar.";
		break;
		
		case 36:
		cout<< "Trovão: \n Sucesso e felicidade.";
		break;
		
		case 37:
		cout<< "Justiça: \n A lei protege o sábio.";
		break;
		
		case 38:
		cout<< "Harmonia: \n Alegria e sucesso pelo caminho certo.";
		break;
		
		case 39:
		cout<< "Integridade: \n Não se oponha ao certo.";
		break;
		
		case 40:
		cout<< "Determinação: \n Aja com suavidade e firmeza.";
		break;
		
		case 41:
		cout<< "Distinção: \n Comporte-se sempre bem";
		break;
		
		case 42:
		cout<< "Realização: \n Termine o que você começou.";
		break;
		
		case 43:
		cout<< "Contância: \n Seja fiel às suas obrigações.";
		break;
		
		case 44:
		cout<< "Equilíbrio: \n Procure agir com bom senso.";
		break;
		
		case 45:
		cout<< "Luminosidade: \n Sua boa estrela está  brilhando.";
		break;
		
		case 46:
		cout<< "Renovação: \n Concentre-se e caminhe para o sucesso.";
		break;
		
		case 47:
		cout<< "Amor: \n Dê e receba amor.";
		break;
		
		case 48:
		cout<< "Ordem: \n Sucesso temporário. Ponha as coisas no lugar.";
		break;
		
		case 49:
		cout<< "Perda: \n A confiança voltará.";
		break;
		
		case 50:
		cout<< "Contenção: \n Saiba esperar e aproveitar.";
		break;
		
		case 51:
		cout<< "Confiança: \n Confie mas seja cauteloso.";
		break;
		
		case 52:
		cout<< "Confissão: \n Reconheça os erros para ter paz.";
		break;
		
		case 53:
		cout<< "Desunião: \n Se possível, reconcilie.";
		break;
		
		case 54:
		cout<< "Alegria: \n Aguarde surpresas.";
		break;
		
		case 55:
		cout<< "Conduta: \n Decidir e avançar.";
		break;
		
		case 56:
		cout<< "Paz: \n Prospera o homem de valor moral.";
		break;
		
		case 57:
		cout<< "Enriquecimento: \n Riqueza de saber e de virtudes.";
		break;
		
		case 58:
		cout<< "Espera: \n Não se precipite.";
		break;
		
		case 59:
		cout<< "Boa-sorte: \n O futuro será melhor que o presente.";
		break;
		
		case 60:
		cout<< "Poder: \n Hora de avançar.";
		break;
		
		case 61:
		cout<< "Posse: \n Não tema fracassos.";		
		break;
		
		case 62:
		cout<< "Fraqueza: \n Falar muito pode ser perigoso.";
		break;
		
		case 63:
		cout<< "Tranformação: \n A mudança é positiva.";
		break;
	}
		
	cout << "\n******\n\n"   << endl;		
	return 0;
}
