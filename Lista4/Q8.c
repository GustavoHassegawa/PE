#include <stdio.h>
#define nomeMAX 100
#define alunosMAX 200
#define MAX 100


typedef struct {
	int dia;
	int mes;
	int ano;
} data;

typedef struct {
	char nome[nomeMAX];
	data data_nascimento;
	int ra;
} aluno;

int verifica_string(char A[MAX], char B[MAX]) {
	int i = 0;
	while (A[i] != '\0' && B[i] != '\0') {
		if (A[i] != B[i]) {
			return 0;
		}
		i++;
	}
	return 1;
}

void imprime_nome (char nome[MAX]) {
	int i = 0;
	while (nome[i] != '\0') {
		printf("%c", nome[i]);
		i++;
	}
	printf("\n");
}

void cadastro_aluno (aluno alunos[], int n) {
	printf("Nome do aluno: ");
	fgets(alunos[n].nome, nomeMAX, stdin);
	
	printf("\nData de nascimento (dd mm aaaa): ");
	scanf("%d", &alunos[n].data_nascimento.dia);
	scanf("%d", &alunos[n].data_nascimento.mes);
	scanf("%d", &alunos[n].data_nascimento.ano);
	getchar();

	printf("\nDigite o RA: ");
	scanf("%d", &alunos[n].ra);
	getchar();
	
}

void busca_aluno (aluno alunos[], char nome[],int n){
	char nomeParcial[nomeMAX];
	int j = 0, k = 0;
	
	for (int i = 0; i < n; i++) {
		j = 0;
		k = 0;
		
		while (alunos[i].nome[j] != '\0') {
			char letraAtual = alunos[i].nome[j];
			
			if (letraAtual != ' ') {
				nomeParcial[k] = letraAtual;
				k++;
			} else {
				nomeParcial[k] = '\0';
				if (verifica_string(nome, nomeParcial)) {
					imprime_nome(alunos[i].nome);
					nomeParcial[0] = '\0';
					k = 0;
				} else {
					nomeParcial[0] = '\0';
					k = 0;
				}
			}
			j++;
		}
		nomeParcial[k] = '\0';
		if (verifica_string(nome, nomeParcial)) {
			imprime_nome(alunos[i].nome);
		}
	}
}

void busca_intervalo (aluno alunos[], data inicio, data final, int n) {
	for (int i = 0; i < n; i++) {
		if (inicio.ano < alunos[i].data_nascimento.ano && alunos[i].data_nascimento.ano < final.ano) {
			imprime_nome(alunos[i].nome);
		} else if (inicio.ano == alunos[i].data_nascimento.ano && alunos[i].data_nascimento.ano == final.ano) {
			if (inicio.mes < alunos[i].data_nascimento.mes && alunos[i].data_nascimento.mes < final.mes) {
				imprime_nome(alunos[i].nome);
			} else if (inicio.mes == alunos[i].data_nascimento.mes && alunos[i].data_nascimento.mes == final.mes) {
				if (inicio.dia < alunos[i].data_nascimento.dia && alunos[i].data_nascimento.dia < final.dia) {
					imprime_nome(alunos[i].nome);
				} else if (inicio.dia == alunos[i].data_nascimento.dia && alunos[i].data_nascimento.dia == final.dia) {
					imprime_nome(alunos[i].nome);
				}
			}
		}
	}
}

int main() {
	aluno alunos[alunosMAX];
	data final, inicio;
	int escolha = 0, numeroAluno = 0;
	char nome[nomeMAX];

	
	while (1) {
		printf("Digite o numero que voce deseja: \n"
			   "1 para cadastrar um aluno.\n"
			   "2 para buscar um aluno por nome.\n"
			   "3 listar todos os alunos de um intervalo de tempo.\n"
			   "0 para Desligar\n");
		scanf("%d", &escolha);
		getchar();
		
		if (escolha == 1) {
			cadastro_aluno(alunos, numeroAluno);
			numeroAluno++;
		} else if (escolha == 2) {
			//BUSCAR ALUNO POR NOME
			printf("Digite o nome: ");
			fgets(nome, nomeMAX, stdin);
			busca_aluno(alunos, nome, numeroAluno);
		} else if (escolha == 3) {
			//Listar todos os alunos de um intervalo
			printf("\nData de inicio do intervalo (dd mm aaaa): ");
			scanf("%d", &inicio.dia);
			scanf("%d", &inicio.mes);
			scanf("%d", &inicio.ano);
			getchar();

			printf("\nData de final do intervalo (dd mm aaaa): ");
			scanf("%d", &final.dia);
			scanf("%d", &final.mes);
			scanf("%d", &final.ano);
			getchar();

			busca_intervalo(alunos, inicio, final, numeroAluno);
		} else if (escolha == 0) {
			printf("PROGRAMA TERMINADO\n");
			break;
		} else {
			printf("ESCOLHA INVALIDA!\n");
		}
	}
}
