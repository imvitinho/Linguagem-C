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

int main()
{
    int min, max;

    printf("Menor número: ");
    scanf("%d", &min);
    printf("Maior número: ");
    scanf("%d", &max);

    for (int num = min; num <= max; num++)
    {
        if (num <= 1)
            continue;
        int primo = 1;
        if (num == 2)
        {
            printf("%d\n", num);
            continue;
        }
        if (num % 2 == 0)
            primo = 0;
        for (int i = 3; i * i <= num && primo; i += 2)
        {
            if (num % i == 0)
            {
                primo = 0;
            }
        }
        if (primo)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
