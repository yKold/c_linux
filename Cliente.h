#ifndef CLIENTE_H
#define CLIENTE_H
#include <string.h>
#include <stdio.h>

struct AnoAbertura
{
    int dia;
    int mes;
    int ano;
};

struct ContaBancaria
{
    int id;
    float saldo;
    char nome[50];
    int TipoConta;
    struct AnoAbertura AA;
    
};

//SACAR
float SACAR(struct ContaBancaria* conta, float VALOR){
    conta->saldo -= VALOR;
    printf("O valor sacado foi de %.2f\nO saldo atual da sua conta é de %.2f\n", VALOR, conta->saldo);
}
//DEPOSITAR
float DEPOSITAR(struct ContaBancaria* conta, float VALOR){
    conta->saldo += VALOR;
    printf("O valor depositado foi de %.2f\nO saldo atual da sua conta é de %.2f\n", VALOR, conta->saldo);
}

//INICIALIZAÇÂO
void INICIALIZAR(struct ContaBancaria* conta, int ID, float SALDO, int TIPOCONTA, char* NOME, int DIA, int MES, int ANO){
    conta->id = ID;
    conta->saldo = SALDO;
    strcpy(conta->nome, NOME);
    conta->TipoConta = TIPOCONTA;
    conta->AA.dia = DIA;
    conta->AA.mes = MES;
    conta->AA.ano = ANO;
}

//GETS
int getId(struct ContaBancaria* conta) {
    return conta->id;
}
float getSaldo(struct ContaBancaria* conta){
    return conta->saldo;
}
char* getNome(struct ContaBancaria* conta){
    return conta->nome;
}
char* getTipoConta(struct ContaBancaria* conta){
    if(conta->TipoConta == 0) {
        return "Corrente";
    }
    else {
        return "Poupança";
    }
}
struct AnoAbertura getAnoAbertura(struct ContaBancaria* conta){
    return conta->AA;
}

//SETS
void setId(struct ContaBancaria* conta, int ID){
    conta->id = ID;
}
void setSaldo(struct ContaBancaria* conta, float SALDO){
    conta->saldo = SALDO;
}
void setNome(struct ContaBancaria* conta, char* NOME){
    strcpy(conta->nome, NOME);
}
void setTipoConta(struct ContaBancaria* conta, int TIPO){
    conta->TipoConta = TIPO;
}
void setAnoAbertura(struct ContaBancaria* conta, int DIA, int MES, int ANO){
    conta->AA.ano = ANO;
    conta->AA.mes = MES;
    conta->AA.dia = DIA;
}

#endif 