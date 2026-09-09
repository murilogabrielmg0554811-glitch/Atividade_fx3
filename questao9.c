#include <stdio.h>

int main() {
    int codigo;

    printf("========================================\n");
    printf("     SISTEMA DE CONTROLE DE FROTA\n");
    printf("========================================\n");
    printf("1 - Carro\n");
    printf("2 - Motocicleta\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");
    printf("6 - Encerrar\n");
    printf("========================================\n");

    printf("Digite o codigo do tipo de veiculo: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("\nTipo de veiculo: Carro\n");
            printf("Finalidade: Transporte de passageiros em pequena quantidade.\n");
            break;

        case 2:
            printf("\nTipo de veiculo: Motocicleta\n");
            printf("Finalidade: Entregas rapidas e transporte de pequenas cargas.\n");
            break;

        case 3:
            printf("\nTipo de veiculo: Van\n");
            printf("Finalidade: Transporte de passageiros ou pequenas cargas.\n");
            break;

        case 4:
            printf("\nTipo de veiculo: Onibus\n");
            printf("Finalidade: Transporte coletivo de passageiros.\n");
            break;

        case 5:
            printf("\nTipo de veiculo: Caminhao\n");
            printf("Finalidade: Transporte de cargas.\n");
            break;

        case 6:
            printf("\nSistema encerrado. Obrigado!\n");
            break;

        default:
            printf("\nCodigo invalido. Veiculo nao encontrado.\n");
    }

    return 0;
}