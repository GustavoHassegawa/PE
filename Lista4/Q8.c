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
	while
}

void cadastro_aluno (aluno alunos[], int n) {
	printf("Nome do aluno: ");
	fgets(alunos[n].nome, nomeMAX, stdin);
	
	printf("\nData de nascimento (dd mm aaaa): ");
	scanf("%d", &alunos[n].data_nascimento.dia);
	scanf("%d", &alunos[n].data_nascimento.mes);
	scanf("%d", &alunos[n].data_nascimento.mes);
	
	printf("\nDigite o RA: ");
	scanf("%d", &alunos[n].ra);
}

void busca_aluno (aluno alunos[], char nome[],int n){
	char nomeParcial[nomeMAX];
	int j = 0, k = 0;
	
	for (int i = 0; i < n; i++) {
	
		while (alunos[i].nome[j] != '\0') {
			char letraAtual = alunos[i].nome[j];
			
			if (letraAtual != ' ') {
				nomeParcial[k] = letraAtual;
				k++;
			} else {
				//FAZER VERIFICADOR PALAVRA
			}
		}
	}
}

int main() {
	aluno alunos[alunosMAX];
	int escolha = 0, numeroAluno = 0;
	
	while (1) {
		printf("Digite o numero que você deseja: \n"
			   "1 para cadastrar um aluno.\n"
			   "2 para buscar um aluno por nome.\n"
			   "3 listar todos os alunos de um intervalo.\n");
		scanf("%d", &escolha);
		
		if (escolha == 1) {
			cadastro_aluno(alunos, numeroAluno);
			numeroAluno++;
		} else if (escolha == 2) {
			//BUSCAR ALUNO POR NOME
		} else if (escolha == 3) {
			//Listar todos os alunos de um intervalo
		} else {
			printf("ESCOLHA INVALIDA!\n");
		}
	}
}
