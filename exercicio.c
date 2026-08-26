#include <stdio.h>

char nome [50];
int idade;
int main(){
printf("Digite o seu nome: ");
scanf("%s", &nome);

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Seu nome é %s e usa idade é %d\n", nome, idade);
return 0;
}
