#include <stdio.h>
#include <string.h>

// Definição da struct Territorio que armazena nome, cor do exército e quantidade de tropas
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Vetor para armazenar 5 territórios
    Territorio territorios[5];

    printf("Cadastro de 5 territórios\n");
    printf("-------------------------\n");

    // entrada dos dados dos territórios
    for (int i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);

        // Entrada do nome do território
        printf("Digite o nome do território: ");
        // Usando scanf com %29[^\n] para ler até 29 caracteres incluindo espaços.
        scanf(" %29[^\n]", territorios[i].nome);

        // Entrada da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %9s", territorios[i].cor); // lê até 9 caracteres sem espaços

        // Entrada da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("Dados dos territórios cadastrados:\n");
    printf("---------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("\n");
    }

    return 0;
}
