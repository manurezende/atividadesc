#include <stdio.h>

    int main()
    {
        float nota1,nota2,nota3,nota4,rs;
        printf("qual foi a nota do aluno no primeiro bimestre?\n");
            scanf("%f" ,&nota1);

        printf("qual foi a nota do aluno no segundo bimestre?\n");
            scanf("%f" ,&nota2);

        printf("qual foi a nota do aluno no terceiro bimestre?\n");
            scanf("%f" ,&nota3);

        printf("qual foi a nota do aluno no quarto bimestre?\n");
            scanf("%f" ,&nota4);

        rs = (nota1 + nota2 + nota3 + nota4) / 2;

        if (rs < 6)
        {
            printf("infelizmente você foi reprovado!");
        }
        else
        {
            printf("parabens você foi aprovado e passou de ano!");
        }

        return 0;
    }