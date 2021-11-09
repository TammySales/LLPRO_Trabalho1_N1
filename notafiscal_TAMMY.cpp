#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL, "Portuguese_Brazil");

char produto1[18], produto2[18], produto3[18], produto4[18], produto5[18];
char produto6[18], produto7[18], produto8[18] ;
float v_n1, v_n2, v_n3;
float v_n4, v_n5, v_n6;
float v_n7,v_n8;
int qtd_n1, qtd_n2, qtd_n3, qtd_n4, qtd_n5, qtd_n6, qtd_n7, qtd_n8;
int codigo1 = 841, codigo2 = 842, codigo3 = 843, codigo4 = 844;
int codigo5 = 845, codigo6 = 846, codigo7= 847, codigo8 = 848;

float total;

printf("\nNome do produto: ");
gets(produto1);
printf("valor do Produto: ");
scanf("%f", &v_n1);
printf("Quantidade do produto: ");
scanf("%d", &qtd_n1);
fflush(stdin);

printf("\nNome do produto: ");
gets(produto2);
printf("Valor do produto: ");
scanf("%f", &v_n2);
printf("Quantidade do produto: ");
scanf("%d", &qtd_n2);
fflush(stdin);

printf("\nNome do produto: ");
gets(produto3);
printf("Valor do produto: ");
scanf("%f", &v_n3);
printf("Quantidade do produto: ");
scanf("%d", &qtd_n3);
fflush(stdin);

printf("\nNome do produto: ");
gets(produto4);
printf("Valor do produto: ");
scanf("%f", &v_n4);
printf("Quantidade do produto: ");
scanf("%d", &qtd_n4);
fflush(stdin);

printf("\nNome do produto: ");
gets(produto5);
printf("Valor do produto: ");
scanf("%f", &v_n5);
printf("Quantidade do produto: ");
scanf("%d", &qtd_n5);
fflush(stdin);

printf("\nNome do produto: ");
gets(produto6);
printf("Valor do poduto: ");
scanf("%f", &v_n6);
printf("Quantidade do produto: ");
scanf("%d", &qtd_n6);
fflush(stdin);

printf("\nNome do produto: ");
gets(produto7);
printf("Valor do produto: ");
scanf("%f", &v_n7);
printf("Quantidade do produto: ");
scanf("%d", &qtd_n7);
fflush(stdin);

printf("\nNome do produto: ");
gets(produto8);
printf("Valor do produto: ");
scanf("%f", &v_n8);
printf("Quantiade do produto: ");
scanf("%d", &qtd_n8);
fflush(stdin);


total = v_n1*qtd_n1 + v_n2*qtd_n2 + v_n3*qtd_n3 + v_n4*qtd_n4 + v_n5*qtd_n5 + v_n6*qtd_n6 + v_n7*qtd_n7 + v_n8*qtd_n8;

system("cls");

printf("|%-4s |%-4s |%-19s |%-10s |%-10s|\n", "Código", "Quant.", "Discriminação", "P.Unitário", "Preço Total");
printf("|%-4d |%-4d |%-19s |R$ %8.2f|R$ %8.2f|\n", codigo1, qtd_n1, produto1, v_n1, v_n1*qtd_n1);
printf("|%-4d |%-4d |%-19s |R$ %8.2f|R$ %8.2f|\n", codigo2, qtd_n2, produto2, v_n2, v_n2*qtd_n2);
printf("|%-4d |%-4d |%-19s |R$ %8.2f|R$ %8.2f|\n", codigo3, qtd_n3, produto3, v_n3, v_n3*qtd_n3);
printf("|%-4d |%-4d |%-19s |R$ %8.2f|R$ %8.2f|\n", codigo4, qtd_n4, produto4, v_n4, v_n4*qtd_n4);
printf("|%-4d |%-4d |%-19s |R$ %8.2f|R$ %8.2f|\n", codigo5, qtd_n5, produto5, v_n5, v_n5*qtd_n5);
printf("|%-4d |%-4d |%-19s |R$ %8.2f|R$ %8.2f|\n", codigo6, qtd_n6, produto6, v_n6, v_n6*qtd_n6);
printf("|%-4d |%-4d |%-19s |R$ %8.2f|R$ %8.2f|\n", codigo7, qtd_n7, produto7, v_n7, v_n7*qtd_n7);
printf("|%-4d |%-4d |%-19s |R$ %8.2f|R$ %8.2f|\n", codigo8, qtd_n8, produto8, v_n8, v_n8*qtd_n8);
printf("|%-4s |%-4s |%-19s |%-10s |R$ %8.2f|\n", "", "", "", "Total", total);

system("pause");

return 0;

}
