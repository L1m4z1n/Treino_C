int main(int argc, char const *argv[])
{
    int n,soma=0;
    printf("Digite até onde deseja somar:");
    scanf("%d", &n);
    if (n>=0)
    {
        for (int i = 0; i <= n; i++)
        {
            soma+=i;
            printf("A soma de 1 até %d é = %d\n",n,soma);
        }
        
    } else {
        printf("Somente número positivo");
    }
    
    return 0;
}
