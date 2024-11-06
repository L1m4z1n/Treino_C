int main(int argc, char const *argv[])
{
    int n, fat=1;
    printf("Digite o número que você deseja saber o fatorial:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fat*=i;
        printf("O fatorial de %d é %d\n", n,fat);
    }
    
    return 0;
}