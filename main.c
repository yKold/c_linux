#include <stdio.h>
#include <stdlib.h>
#include "Cliente.h"

int main(){

    struct ContaBancaria* CONTA = malloc(sizeof(struct ContaBancaria));

    INICIALIZAR(CONTA, 973412, 0, 1, "VitaoOtario", 24, 10, 2024);
    DEPOSITAR(CONTA, 3500000);
    printf("%.2f\n", getSaldo(CONTA));
    SACAR(CONTA, 150);
    getSaldo(CONTA);
    printf("O ID é:             %d\n", getId(CONTA));
    printf("O NOME é:           %s\n", getNome(CONTA));
    printf("O TIPO da conta é:  %s\n", getTipoConta(CONTA));
    struct AnoAbertura ano = getAnoAbertura(CONTA); 
    printf("A data é:           %d/%d/%d\n", ano.dia, ano.mes, ano.ano);

    return 0;
}