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
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float valorTroco;

    do {
        valorTroco = get_float("Troca devida: ");
    } while (valorTroco < 0);

    int centavos = round(valorTroco * 100);

    int moeda25 = centavos / 25;
    centavos %= 25;

    int moeda10 = centavos / 10;
    centavos %= 10;

    int moeda5 = centavos / 5;
    centavos %= 5;

    int moeda1 = centavos;

    int totalMoedas = moeda25 + moeda10 + moeda5 + moeda1;

    printf("%i\n", totalMoedas);

}