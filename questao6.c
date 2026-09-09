#include <stdio.h>

int main() {
    int opcao;

    printf("========================================\n");
    printf("       SISTEMA DE ATENDIMENTO\n");
    printf("========================================\n");
    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Encerrar Atendimento\n");
    printf("========================================\n");

    printf("Digite o codigo do setor desejado: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nSetor selecionado: Suporte Tecnico\n");
            printf("Orientacao: Atendimento para problemas relacionados a sistemas, computadores, redes e equipamentos.\n");
            break;

        case 2:
            printf("\nSetor selecionado: Financeiro\n");
            printf("Orientacao: Atendimento para duvidas sobre pagamentos, cobrancas, contratos e faturamento.\n");
            break;

        case 3:
            printf("\nSetor selecionado: Recursos Humanos\n");
            printf("Orientacao: Atendimento para assuntos relacionados a colaboradores, beneficios e documentos internos.\n");
            break;

        case 4:
            printf("\nSetor selecionado: Comercial\n");
            printf("Orientacao: Atendimento para propostas, vendas, clientes e negociacoes comerciais.\n");
            break;

        case 5:
            printf("\nAtendimento encerrado. Obrigado pelo contato!\n");
            break;

        default:
            printf("\nOpcao invalida. Escolha um setor disponivel.\n");
    }

    return 0;
} 
