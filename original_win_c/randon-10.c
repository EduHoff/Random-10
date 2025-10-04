#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//limpa tela
void limpaTela(){
    system("CLS");
}

int main(){
//numeros do jogador
int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
int acertos, quase;
bool retornar;

while(retornar == true){
//limpa tela e variaveis
limpaTela();


//Intrudu��o
printf("Este programa ira gerar randomicamente 10 numeros de 1 a 6.");
printf("\nTente acertar os numeros");

//Definindo os numeros e bloqueia de op��es invalidadas

while(num1 < 1 || num1 > 6){
    printf("\nnumero 1: ");
    scanf("%d", &num1);
if(num1 < 1 || num1 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num2 < 1 || num2 > 6){
    printf("\nnumero 2: ");
    scanf("%d", &num2);
if(num2 < 1 || num2 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num3 < 1 || num3 > 6){
    printf("\nnumero 3: ");
    scanf("%d", &num3);
if(num3 < 1 || num3 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num4 < 1 || num4 > 6){
    printf("\nnumero 4: ");
    scanf("%d", &num4);
if(num4 < 1 || num4 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num5 < 1 || num5 > 6){
    printf("\nnumero 5: ");
    scanf("%d", &num5);
if(num5 < 1 || num5 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num6 < 1 || num6 > 6){
    printf("\nnumero 6: ");
    scanf("%d", &num6);
if(num6 < 1 || num6 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num7 < 1 || num7 > 6){
    printf("\nnumero 7: ");
    scanf("%d", &num7);
if(num7 < 1 || num7 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num8 < 1 || num8 > 6){
    printf("\nnumero 8: ");
    scanf("%d", &num8);
if(num8 < 1 || num8 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num9 < 1 || num9 > 6){
    printf("\nnumero 9: ");
    scanf("%d", &num9);
if(num9 < 1 || num9 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}

while(num10 < 1 || num10 > 6){
    printf("\nnumero 10: ");
    scanf("%d", &num10);
if(num10 < 1 || num10 > 6){
    printf("\nOpcao invalida, escolha outra de 1 a 6");
}
}


//numeros randomicos
srand((unsigned)time(NULL));

int aleatorio1 = rand() % 6;

int aleatorio2 = rand() % 6;

int aleatorio3 = rand() % 6;

int aleatorio4 = rand() % 6;

int aleatorio5 = rand() % 6;

int aleatorio6 = rand() % 6;

int aleatorio7 = rand() % 6;

int aleatorio8 = rand() % 6;

int aleatorio9 = rand() % 6;

int aleatorio10 = rand() % 6;

printf("\n%d %d %d %d %d %d %d %d %d %d\n\n", aleatorio1 + 1, aleatorio2 + 1, aleatorio3 + 1, aleatorio4 + 1, aleatorio5 + 1, aleatorio6 + 1, aleatorio7 + 1, aleatorio8 + 1, aleatorio9 + 1, aleatorio10 + 1);

//comparar resultados
if(num1 == aleatorio1 || num1 == aleatorio1 + 2){
    quase = quase + 1;
    printf("\n%d", quase);
}else{
    quase = quase + 0;
}

if(num1 == aleatorio1 + 1){
    printf("\nPosicao 1: acerto");
    num1 = 1;
}else{
    printf("\nPosicao 1: erro");
    num1 = 0;
}
/*eu meudei a var num1 de valor de acordo com o resultado da que desse ao comprar com a var aleatoria
assim eu posso somar o total de erros e acertos
*/
if(num2 == aleatorio2 + 1){
    printf("\nPosicao 2: acerto");
    num2 = 1;
}else{
    printf("\nPosicao 2: erro");
    num2 = 0;
}

if(num3 == aleatorio3 + 1){
    printf("\nPosicao 3: acerto");
    num3 = 1;
}else{
    printf("\nPosicao 3: erro");
    num3 = 0;
}

if(num4 == aleatorio4 + 1){
    printf("\nPosicao 4: acerto");
    num4 = 1;
}else{
    printf("\nPosicao 4: erro");
    num4 = 0;
}

if(num5 == aleatorio5 + 1){
    printf("\nPosicao 5: acerto");
    num5 = 1;
}else{
    printf("\nPosicao 5: erro");
    num5 = 0;
}

if(num6 == aleatorio6 + 1){
    printf("\nPosicao 6: acerto");
    num6 = 1;
}else{
    printf("\nPosicao 6: erro");
    num6 = 0;
}

if(num7 == aleatorio7 + 1){
    printf("\nPosicao 7: acerto");
    num7 = 1;
}else{
    printf("\nPosicao 7: erro");
    num7 = 0;
}

if(num8 == aleatorio8 + 1){
    printf("\nPosicao 8: acerto");
    num8 = 1;
}else{
    printf("\nPosicao 8: erro");
    num8 = 0;
}

if(num9 == aleatorio9 + 1){
    printf("\nPosicao 9: acerto");
    num9 = 1;
}else{
    printf("\nPosicao 9: erro");
    num9 = 0;
}

if(num10 == aleatorio10 + 1){
    printf("\nPosicao 10: acerto");
    num10 = 1;
}else{
    printf("\nPosicao 10: erro");
    num10 = 0;
}

//resultado final
acertos = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
printf("\n\nVoce acerto: %d", acertos);
printf("\nVoce quase acerto: %d", quase);

printf("\nVoce erro: %d", 10 - acertos);

//chacem de acertar
if(acertos == 0){
    printf("\nProbabilidade de acertar 0: 16,15%%");
}if(acertos == 1){
    printf("\nProbabilidade de acertar 1: 1 em 6");
}if(acertos == 2){
    printf("\nProbabilidade de acertar 2: 1 em 36");
}if(acertos == 3){
    printf("\nProbabilidade de acertar 3: 1 em 216");
}if(acertos == 4){
    printf("\nProbabilidade de acertar 4: 1 em 1.296");
}if(acertos == 5){
    printf("\nProbabilidade de acertar 5: 1 em 7.776");
}if(acertos == 6){
    printf("\nProbabilidade de acertar 6: 1 em 46.656");
}if(acertos == 7){
    printf("\nProbabilidade de acertar 7: 1 em 279.936");
}if(acertos == 8){
    printf("\nProbabilidade de acertar 8: 1 em 1.679.616");
}if(acertos == 9){
    printf("\nProbabilidade de acertar 9: 1 em 10.077.696");
}if(acertos == 10){
    printf("\nProbabilidade de acertar 10: 1 em 60.466.176");
}

//reiniciar jogo
printf("\n\nVoce quer jogar novamente Randon 10? (1 para sim, 0 para nao)\n");
scanf("%d", &retornar);
}
//pula linha
printf("\n\n");

system("pause");
return 0;
}
