int main(int argc, char const *argv[])
{
    int n;
    printf("Digite números(negativo encerra o programa):");
    
    while (1)
    {
        scanf("%d",&n);
        if (n<0)
        {
            printf("Programa encerrado");
        }
        
    }
    
    return 0;
}
