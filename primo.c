#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, isPrimo = 1;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrimo = 0;  
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrimo = 0;  
                break;
            }
        }
    }

    if (isPrimo)
        printf("%d é um número primo!\n", n);
    else
        printf("%d não é um número primo.\n", n);

    return 0;
}
