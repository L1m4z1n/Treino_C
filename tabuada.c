int main(int argc, char const *argv[])
{
    int n,tabu;
    printf("Digite o número no qual você deseja ter a tabuada:");
    scanf("%d",&n);
    if (n>0)
    {
        for ( int i = 0; i <= 10; i++)
        {
            tabu=i*n;
            printf("%d x %d = %d\n", i,n,tabu);
        }
        
    } else {
        printf("Todo número multiplicado por 0 é igual a 0, não será permitido número negativo!");
    }
    
    return 0;
}
