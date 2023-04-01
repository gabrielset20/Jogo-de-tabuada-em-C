#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
    Exercício: fazer um código para o público infantil, com o objetivo de ensinar operações de tabuada por meio de uma dinâmica de jogo.
*/
void regras_A();
void titulo_T();
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char player1[20], player2[20];
    int valor1 = 0, valor2 = 0, resposta = 0, resultado = 0;
    int score_player1 = 0, score_player2 = 0;
    int op = 0, op2 = 0;
    system("cls");
    titulo_T();
    regras_A();
    system("cls");
    titulo_T();
    printf("\n\t\t    Digite o nome do primeiro jogador: \n\t\t");
    gets(player1);
    printf("\n\t\t    Digite o nome do segundo jogador: \n\t\t");
    gets(player2);
    voltar:
    system("cls");
    titulo_T();
    printf("\n\t\t    Vamos nos preparar para jogar \\(^ w ^ *)\n\t\t\t      %s e %s!\n\n", player1, player2);
    printf("\n\t\t      Escolham uma operação para iniciar!\n\t\t          1.[+]  2.[-]  3.[x]  4.[/]\n\t\t");
    scanf(" %d", &op);
    switch (op){
        case 1:
            do{
            system("cls");
            titulo_T();
            printf("\n\t\t                   Score: \n\t\t");
            printf("\n\t\t             %s = %d | %s = %d\n\t\t", player1, score_player1, player2, score_player2);
            printf("\n\t\t%s, coloque dois valores para %s tentar resolver!\n\t\t", player1, player2);
            retornar:
            scanf(" %d", &valor1);
            printf("\n\t\t");
            scanf(" %d", &valor2);
            system("cls");
            titulo_T();
            printf("\n\t\t%s, resolva a operação abaixo:\n", player2);
            printf("\n\t\t %d + %d = ", valor1, valor2);
            scanf(" %d", &resposta);
            resultado = valor1 + valor2;
            if (resposta == resultado){
                printf("\n\t\tPARABÉNS, %s \(0o0)/! Resposta correta! Próxima rodada: \n\t\t", player2);
                score_player2++;
                system("pause");
            }
                else{
                    printf("\n\t\tERRADO, %s! Resposta incorreta! Próxima rodada: \n\t\t", player2);
                    printf("\n\t\tA resposta é: %d.\n\t\t", resultado);
                    system("pause");
                }
            system("cls");
            titulo_T();
            printf("\n\t\t                   Score: \n\t\t");
            printf("\n\t\t             %s = %d | %s = %d\n\t\t", player1, score_player1, player2, score_player2);
            printf("\n\t\t%s, coloque dois valores para %s tentar resolver!\n\t\t", player2, player1);
            scanf(" %d", &valor1);
            printf("\n\t\t");
            scanf(" %d", &valor2);
            system("cls");
            titulo_T();
            printf("\n\t\t%s, resolva a operação abaixo:\n", player1);
            printf("\n\t\t %d + %d = ", valor1, valor2);
            scanf(" %d", &resposta);
            resultado = valor1 + valor2;
            if (resposta == resultado){
                printf("\n\t\tPARABÉNS, %s \(0o0)/! Resposta correta! Próxima rodada: \n\t\t", player1);
                score_player1++;
                system("pause");
            }
                else{
                    printf("\n\t\tERRADO, %s! Resposta incorreta! Próxima rodada: \n\t\t", player1);
                    printf("\n\t\tA resposta é: %d.\n\t\t", resultado);
                    system("pause");
                }
            system("cls");
            titulo_T();
            printf("\n\n\t\tApertem 1 para continuar na adição? \(>,<)/ \n\t\tApertem 0 para mudar de operação! -.-)/\n\t\tApertem 2 para sair do jogo e ver o score final! (^W^)/\n\t\t");
            setbuf(stdin,NULL);
            scanf(" %d", &op2);
            }
            while(op2 == 1);
                if (op2 == 0) goto voltar;
                    if (op2 == 2) goto gameover;
            return (0);
        break;
        case 2:
            do{
            system("cls");
            titulo_T();
            printf("\n\t\t                   Score: \n\t\t");
            printf("\n\t\t             %s = %d | %s = %d\n\t\t", player1, score_player1, player2, score_player2);
            printf("\n\t\t%s, coloque dois valores para %s tentar resolver!\n\t\t", player1, player2);
            scanf(" %d", &valor1);
            printf("\n\t\t");
            scanf(" %d", &valor2);
            system("cls");
            titulo_T();
            printf("\n\t\t%s, resolva a operação abaixo:\n", player2);
            printf("\n\t\t %d - %d = ", valor1, valor2);
            scanf(" %d", &resposta);
            resultado = valor1 - valor2;
            if (resposta == resultado){
                printf("\n\t\tPARABÉNS, %s \(0o0)/! Resposta correta! Próxima rodada: \n\t\t", player2);
                score_player2++;
                system("pause");
            }
                else{
                    printf("\n\t\tERRADO, %s! Resposta incorreta! Próxima rodada: \n\t\t", player2);
                    printf("\n\t\tA resposta é: %d.\n\t\t", resultado);
                    system("pause");
                }
            system("cls");
            titulo_T();
            printf("\n\t\t                   Score: \n\t\t");
            printf("\n\t\t             %s = %d | %s = %d\n\t\t", player1, score_player1, player2, score_player2);
            printf("\n\t\t%s, coloque dois valores para %s tentar resolver!\n\t\t", player2, player1);
            scanf(" %d", &valor1);
            printf("\n\t\t");
            scanf(" %d", &valor2);
            system("cls");
            titulo_T();
            printf("\n\t\t%s, resolva a operação abaixo:\n", player1);
            printf("\n\t\t %d - %d = ", valor1, valor2);
            scanf(" %d", &resposta);
            resultado = valor1 - valor2;
            if (resposta == resultado){
                printf("\n\t\tPARABÉNS, %s \(0o0)/! Resposta correta! Próxima rodada: \n\t\t", player1);
                score_player1++;
                system("pause");
            }
                else{
                    printf("\n\t\tERRADO, %s! Resposta incorreta! Próxima rodada: \n\t\t", player1);
                    printf("\n\t\tA resposta é: %d.\n\t\t", resultado);
                    system ("pause");
                }
            system("cls");
            titulo_T();
            printf("\n\n\t\tApertem 1 para continuar na subtração? \(>,<)/ \n\t\tApertem 0 para mudar de operação! -.-)/\n\t\tApertem 2 para sair do jogo e ver o score final! (^W^)/\n\t\t");
            setbuf(stdin,NULL);
            scanf(" %d", &op2);
            }
            while(op2 == 1);
                if (op2 == 0) goto voltar;
                    if (op2 == 2) goto gameover;
        break;
        case 3:
            do{
            system("cls");
            titulo_T();
            printf("\n\t\t                   Score: \n\t\t");
            printf("\n\t\t             %s = %d | %s = %d\n\t\t", player1, score_player1, player2, score_player2);
            printf("\n\t\t%s, coloque dois valores para %s tentar resolver!\n\t\t", player1, player2);
            scanf(" %d", &valor1);
            printf("\n\t\t");
            scanf(" %d", &valor2);
            system("cls");
            titulo_T();
            printf("\n\t\t%s, resolva a operação abaixo:\n", player2);
            printf("\n\t\t %d x %d = ", valor1, valor2);
            scanf(" %d", &resposta);
            resultado = valor1 * valor2;
            if (resposta == resultado){
                printf("\n\t\tPARABÉNS, %s \(0o0)/! Resposta correta! Próxima rodada: \n\t\t", player2);
                score_player2++;
                system("pause");
            }
                else{
                    printf("\n\t\tERRADO, %s! Resposta incorreta! Próxima rodada: \n\t\t", player2);
                    printf("\n\t\tA resposta é: %d.\n\t\t", resultado);
                    system ("pause");
                }
            system("cls");
            titulo_T();
            printf("\n\t\t                   Score: \n\t\t");
            printf("\n\t\t             %s = %d | %s = %d\n\t\t", player1, score_player1, player2, score_player2);
            printf("\n\t\t%s, coloque dois valores para %s tentar resolver!\n\t\t", player2, player1);
            scanf(" %d", &valor1);
            printf("\n\t\t");
            scanf(" %d", &valor2);
            system("cls");
            titulo_T();
            printf("\n\t\t%s, resolva a operação abaixo:\n", player1);
            printf("\n\t\t %d x %d = ", valor1, valor2);
            scanf(" %d", &resposta);
            resultado = valor1 * valor2;
            if (resposta == resultado){
                printf("\n\t\tPARABÉNS, %s \(0o0)/! Resposta correta! Próxima rodada: \n\t\t", player1);
                score_player1++;
                system("pause");
            }
                else{
                    printf("\n\t\tERRADO, %s! Resposta incorreta! Próxima rodada: \n\t\t", player1);
                    printf("\n\t\tA resposta é: %d.\n\t\t", resultado);
                    system ("pause");
                }
            system("cls");
            titulo_T();
            printf("\n\n\t\tApertem 1 para continuar na multiplicação? \(>,<)/ \n\t\tApertem 0 para mudar de operação! -.-)/\n\t\tApertem 2 para sair do jogo e ver o score final! (^W^)/\n\t\t");
            setbuf(stdin,NULL);
            scanf(" %d", &op2);
            }
            while(op2 == 1);
                if (op2 == 0) goto voltar;
                    if (op2 == 2) goto gameover;
        break;
        case 4:
            do{
            system("cls");
            titulo_T();
            printf("\n\t\t                   Score: \n\t\t");
            printf("\n\t\t             %s = %d | %s = %d\n\t\t", player1, score_player1, player2, score_player2);
            printf("\n\t\t%s, coloque dois valores para %s tentar resolver!\n\t\t", player1, player2);
            scanf(" %d", &valor1);
            printf("\n\t\t");
            scanf(" %d", &valor2);
            system("cls");
            titulo_T();
            printf("\n\t\t%s, resolva a operação abaixo:\n", player2);
            printf("\n\t\t %d / %d = ", valor1, valor2);
            scanf(" %d", &resposta);
            resultado = valor1 / valor2;
            if (resposta == resultado){
                printf("\n\t\tPARABÉNS, %s \(0o0)/! Resposta correta! Próxima rodada: \n\t\t", player2);
                score_player2++;
                system("pause");
            }
                else{
                    printf("\n\t\tERRADO, %s! Resposta incorreta! Próxima rodada: \n\t\t", player2);
                    printf("\n\t\tA resposta é: %d.\n\t\t", resultado);
                }
            system("cls");
            titulo_T();
            printf("\n\t\t                   Score: \n\t\t");
            printf("\n\t\t             %s = %d | %s = %d\n\t\t", player1, score_player1, player2, score_player2);
            printf("\n\t\t%s, coloque dois valores para %s tentar resolver!\n\t\t", player2, player1);
            scanf(" %d", &valor1);
            printf("\n\t\t");
            scanf(" %d", &valor2);
            system("cls");
            titulo_T();
            printf("\n\t\t%s, resolva a operação abaixo:\n", player1);
            printf("\n\t\t %d / %d = ", valor1, valor2);
            scanf(" %d", &resposta);
            resultado = valor1 / valor2;
            if (resposta == resultado){
                printf("\n\t\tPARABÉNS, %s \(0o0)/! Resposta correta! Próxima rodada: \n\t\t", player1);
                score_player1++;
                system("pause");
            }
                else{
                    printf("\n\t\tERRADO, %s! Resposta incorreta! Próxima rodada: \n\t\t", player1);
                    printf("\n\t\tA resposta é: %d.\n\t\t", resultado);
                }
            system("cls");
            titulo_T();
            printf("\n\n\t\tApertem 1 para continuar na divisão? \(>,<)/ \n\t\tApertem 0 para mudar de operação! -.-)/\n\t\tApertem 2 para sair do jogo e ver o score final! (^W^)/\n\t\t");
            setbuf(stdin,NULL);
            scanf(" %d", &op2);
            }
            while(op2 == 1);
                if (op2 == 0) goto voltar;
                    if (op2 == 2) goto gameover;
        break;
        default:
            printf("\n\t\tOpção inválida! (*-_-) Tente novamente, jogadores.");
            system("pause");
            return (0);
        break;
    }
    gameover:
        system("cls");
        titulo_T();
        printf("\n\t\t            O score final é: \n\t\t");
        printf("\n\t\t          %s = %d pontos e %s = %d pontos\n\t\t", player1, score_player1, player2, score_player2);
        printf("\n\t\tMuito obrigado por usar esse programa! <('.'<)\n\t\t");
        system("pause");
    return 0;
}
void titulo_T(){
    printf("\n\t\t  <<<<<<<                            >,<  ");
    printf("\n\t\t              Jogo de Operações           ");
    printf("\n\t\t  \(*v*)/                          >>>>>>>");
}
void regras_A(){
printf("\n\t\t                  R E G R A S                  \n");
printf("\n\t\t1. Identifique os jogadores antes de começar\n\t\ta jogar;\n");
printf("\n\t\t2. Escolha uma das opções 1, 2, 3 ou 4 referente\n\t\ta operação desejada;\n");
printf("\n\t\t3. O primeiro jogador deverá colocar dois valores\n\t\t(números) para o outro tentar realizar a operação;\n");
printf("\n\t\t4. Os pontos contabilizados serão mostrados no\n\t\tencerramento do jogo;\n");
printf("\n\t\t5. Divirta-se! \n\t\t");
system("pause");
}
