#include <stdio.h>

int main(){
    char nomeCliente[100], nomeAnimal[100], raca[20], dataNascimento[10];
    float endereco, telefone, valorConsulta, valorExame, quantidadeExame, valorMedicacao, desconto, valorFinal;
    int tipoTratamento, tipoPlano, tipoPagamento;

    printf("Qual o seu nome: ");
    scanf(" %[^\n]", nomeCliente);
    printf("Qual o nome do Animal: ");
    scanf(" %[^\n]", nomeAnimal);
    printf("Qual a raca do Animal: ");
    scanf(" %[^\n]", raca);
    printf("Qual a sua data de nascimento do Animal: ");
    scanf(" %[^\n]", dataNascimento);
    printf("Qual o seu endereco(CEP): ");
    scanf("%f", &endereco);
    printf("Qual o seu telefone: ");
    scanf("%f", &telefone);
    //Variaveis do cliente

    printf("Qual o valor da consulta: ");
    scanf("%f", &valorConsulta);
    printf("Qual o valor do exame: ");
    scanf("%f", &valorExame);
    printf("Quantidade de exames: ");
    scanf("%d", &quantidadeExame);
    printf("Valor da medicacao: ");
    scanf("%f", &valorMedicacao);
    //Variaveis da consulta

    printf("Qual o tipo de tratamento: [1]COMUM | [2]COMPLEXO: ");
    scanf("%d", &tipoTratamento);
    printf("Qual o tipo de plano: [1]SIMPLES | [2]FIDELIDADE: ");
    scanf("%d", &tipoPlano);
    printf("Qual o tipo de pagamento: [1]A VISTA | [2]PARCELADO: ");
    scanf("%d", &tipoPagamento);
    //Variaveis de tratamento

    //PLANO SIMPLES
    if (tipoPlano == 1){
        printf("\nPLANO SIMPLES!");
        if (tipoTratamento == 1){
            printf("\nTRATAMENTO COMUM!");
            if (tipoPagamento == 1){
                    printf("\nPAGAMENTO AVISTA!");
                    desconto = valorConsulta * 0.05;
                    }   
                    else if (tipoPagamento == 2){
                        printf("\nPAGAMENTO PARCELADO!");
                        desconto = valorConsulta * 0.02;
                        }
                            else{
                                printf("\nOPCAO INEXISTENTE DE PAGAMENTO!");
                            }
        }
            else if (tipoTratamento == 2){
                printf("\nTRATAMENTO COMPLEXO!");
                if (tipoPagamento == 1){
                    printf("\nPAGAMENTO AVISTA!");
                    desconto = valorConsulta * 0.15;
                    }   
                    else if (tipoPagamento == 2){
                        printf("\nPAGAMENTO PARCELADO!");
                        desconto = valorConsulta * 0.05;
                        }
                            else{
                                printf("\nOPCAO INEXISTENTE DE PAGAMENTO!");
                            } 
            }
                else{
                    printf("\nOPCAO INEXISTENTE DE PAGAMENTO!");
                }        
    }   
    //PLANO FIDELIDADE 

        else if (tipoPlano == 2){
            printf("\nPLANO FIDELIDADE!");
            if (tipoTratamento == 1){
                printf("\nTRATAMENTO COMUM!");
                if (tipoPagamento == 1){
                    printf("\nPAGAMENTO AVISTA!");
                    desconto = valorConsulta * 0.10;
                    }   
                    else if (tipoPagamento == 2){
                        printf("\nPAGAMENTO PARCELADO!");
                        desconto = valorConsulta * 0.05;
                        }
                            else{
                                printf("\nOPCAO INEXISTENTE DE PAGAMENTO!");
                            } 
            }
                else if (tipoTratamento == 2){
                    printf("\nTRATAMENTO COMPLEXO!");
                    if (tipoPagamento == 1){
                    printf("\nPAGAMENTO AVISTA!");
                    desconto = valorConsulta * 0.20;
                    }   
                    else if (tipoPagamento == 2){
                        printf("\nPAGAMENTO PARCELADO!");
                        desconto = valorConsulta * 0.10;
                        }
                            else{
                                printf("\nOPCAO INEXISTENTE DE PAGAMENTO!");
                            } 
                }
                    else{
                        printf("\nOPCAO INEXISTENTE DE TRATAMENTO!");
                    } 
        }
            else{
            printf("\nOPCAO INEXISTENTE DE PLANO!");
            } 
    
    valorFinal = (valorConsulta - desconto) + (valorExame * quantidadeExame) + valorMedicacao;
    
    //EXIBER OS DETALHES
    printf("\nALUNO: EDSON RAFAEL");
    printf("\nATIVIDADE DE ALGORITMO");
    printf("\n RELATÓRIO GERAL DE DO ATENDIMENTO");
    printf("\nNOME DO CLIENTE: %2s", nomeCliente);
    printf("\nNOME DO ANIMAL: %2s", nomeAnimal);
    printf("\nDATA DE NASCIMENTO: %2s", dataNascimento);
    printf("\nVALOR DA CONSULTA: %f", valorConsulta);
    printf("\nVALOR DO EXAME: %f", valorExame);
    printf("\nQUANTIDADE DE EXAMES: %d", quantidadeExame);
    printf("\nVALOR DA MEDICACAO: %f",valorMedicacao);
    printf("\nTIPO DE PLANO: %d", tipoPlano);
    printf("\nTIPO DE TRATAMENTO: %d", tipoTratamento);
    printf("\nFORMA DE PAGAMENTO: %d", tipoPagamento);
    printf("\nDESCONTO: %f", desconto);
    printf("\nVALOR DO PAGAMENTO: %f", valorFinal);

    return 0;
}