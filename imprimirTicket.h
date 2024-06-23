#ifndef IMPRIMIR_TICKET
#define IMPRIMIR_TICKET

#include "CVeiculo.h"
#include "CSaidaEntrada.h"
#include <stdio.h>
#include <string.h>

//#define CUSTO_POR_HORA 15

void resetVariables(int *metodo_pag, int *casa, int *custo_total) {
    *metodo_pag = 0;
    *casa = 0;
    *custo_total = 0;
}

void imprimirTicket() {
    FILE* fp = fopen("Tickets.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    int i = 0;
    int casa;
    printf("Digite a casa que deseja imprimir: ");
    scanf("%d", &casa);
    i = casa - 1; // Ajuste para índice zero-based

    int metodo_pag;
    printf("Deseja usar CREDITO (1), DEBITO (2) ou DINHEIRO (3): \n");
    scanf("%d", &metodo_pag);

    fprintf(fp, "=============Veiculo: %d==============\n", cadastroVeiculo[i].id_veiculo);
    fprintf(fp, "Placa do Veiculo: %s\n", cadastroVeiculo[i].placa_veiculo);
    fprintf(fp, "Marca do Veiculo: %s\n", cadastroVeiculo[i].marca_veiculo);
    fprintf(fp, "Modelo do veiculo: %s\n", cadastroVeiculo[i].modelo_veiculo);
    fprintf(fp, "Tipo do veiculo: %s\n", cadastroVeiculo[i].tipo_veiculo);
    fprintf(fp, "Proprietario: %s\n", cadastroVeiculo[i].proprietario_veiculo);
    fprintf(fp, "Tempo de permanencia: %d\n", cadastroEntradaSaida[i].hora_total);

    int custo_total = 0;
    if (strcmp(cadastroVeiculo[i].tipo_veiculo, "moto") == 0) {
        custo_total = CUSTO_POR_HORA * cadastroEntradaSaida[i].hora_total;
    } else if (strcmp(cadastroVeiculo[i].tipo_veiculo, "carro") == 0) {
        custo_total = CUSTO_POR_HORA * cadastroEntradaSaida[i].hora_total;
    }

    fprintf(fp, "Custo total: %d\n", custo_total);
    fprintf(fp, "Metodo de pagamento: %s\n",
            metodo_pag == 1 ? "CREDITO" :
            (metodo_pag == 2 ? "DEBITO" : "DINHEIRO"));
    fprintf(fp, "======================================\n");

    fclose(fp);

    // Resetar as variáveis após a impressão
    resetVariables(&metodo_pag, &casa, &custo_total);
}

#endif
