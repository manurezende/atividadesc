#include <stdio.h>
#include "../lib/cliente.h"
#include "../lib/cliente_cad.h"

int main()
{
    Cliente cliente;


    cadastrar_cliente(&cliente);


    //gravar os dados no arquivo
    FILE *arquivo = fopen("cliente.txt", "a");
    if (arquivo == NULL)
    {
        printf("erro ao abrir arquivo. \n");
        return 1;
    }


    fprintf(arquivo, "%s; %s; %s; %d\n", cliente.nome, cliente.cpf, cliente.email, cliente.idade);
    fclose(arquivo);


    printf("cliente cadastrado com sucesso!\n");


    return 0;


}
