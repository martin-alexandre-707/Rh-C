#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>
#include "procedures.h"

int opc;
void menu(){
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    do{

        printf("BEM-VINDO AO SISTEMA, ADMINISTRADOR!\n\n");
        printf("1 - Cadastrar funcionários\n");
        printf("2 - Listar funcionários\n");
        printf("3 - Calcular taxas\n");
        printf("4 - Encerrar\n");
        printf("Digite a opção que deseja executar: ");
            scanf("%d", &opc);
        switch(opc){
            case 1: cadastro();
                        break;
            case 2: listar();
                        break;
            case 3: taxas();
                        break;
            case 4: system("cls");printf("DESLIGANDO...");
                            break;
            default: printf("\nValor inválido, Tente Novamente...\n\n");
                            system("pause");
                            system("cls");
                    }
    }while(opc != 4);
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("color a");

    char user[10], senha[10];
    do{
    printf("===== BEM-VINDO =====\n");
    printf("Digite o usuário: ");
        scanf("%s", user);

    printf("Digite a senha: ");
        ler_senha(senha, 15);

        printf("\n");

    if(strcmp("admin", user)!= 0 || strcmp("senha", senha)!= 0){
        printf("Usuário ou senha inválidos! Tente novamente!\n");
            system("pause");
                system("cls");
    }
    }while(strcmp("admin", user)!= 0 || strcmp("senha", senha)!= 0);

    menu();

    return 0;
}
