/* Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>
int main(){
int gigabytes;
int long long bytes;
printf("Digite o valor em Gigabytes: ");
int deu_certo = scanf("%i", &gigabytes);

bytes = gigabytes * 1024 * 1024 * 1024;

printf("O valor em bytes é: %llu\n", bytes);
  
return 0;
}