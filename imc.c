/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Victor Machado Martins
 *    Matrícula:202416670
 *    Turma:SI1N
 *    Email:victor.mmartins@uvvnet.com.br
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu programa.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float peso;
    float altura;
    float IMC;

    do
    {
        peso = get_float("Informe seu peso (kg): ");
        if (peso <= 0 || peso > 500)
        {
            printf("Peso inválido! Por favor, insira um valor entre 0 e 500 kg.\n");
        }
    }
    while (peso <= 0 || peso > 500);

    do
    {
        altura = get_float("Informe sua altura (m): ");
        if (altura <= 0 || altura > 3)
        {
            printf("Altura inválida! Por favor, insira um valor entre 0 e 3 metros.\n");
        }
    }
    while (altura <= 0 || altura > 3);

    // Soma da Índice de Massa Corpórea

    IMC = peso / (altura * altura);

    // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    printf("Seu IMC é: %.2f; Classificação: ", IMC);
    if (IMC < 16.0)
    {
        printf("Classificação: Magreza grau III\n");
    }
    else if (IMC < 17.0)
    {
        printf("Magreza grau II\n");
    }
    else if (IMC < 18.5)
    {
        printf("Magreza grau I\n");
    }
    else if (IMC < 25.0)
    {
        printf("Peso adequado\n");
    }
    else if (IMC < 30.0)
    {
        printf("Pré-obeso\n");
    }
    else if (IMC < 35.0)
    {
        printf("Obesidade grau I\n");
    }
    else if (IMC < 40.0)
    {
        printf("Obesidade grau II\n");
    }
    else
    {
        printf("Obesidade grau III\n");
    }

    return 0;
}
