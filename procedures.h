#include <conio.h>
#include <locale.h>

char nomeFuncionario[100][30];
char cargoFuncionario[100][30];
int idadeFuncionario[30], totalFuncionario = 0;
float salarioFuncionario[30];

void cadastro(){
 setlocale(LC_ALL, "");
 system("cls");
        printf("Digite o nome do funcionário que deseja cadastrar: \n");
            scanf(" %[^\n]", nomeFuncionario[totalFuncionario]);
        printf("Digite o cargo do funcionário: \n");
            scanf(" %[^\n]", cargoFuncionario[totalFuncionario]);
        printf("Digite a idade do funcionário: \n");
            scanf("%d", &idadeFuncionario[totalFuncionario]);
        printf("Digite o salário bruto do funcionário: \n");
            scanf("%f", &salarioFuncionario[totalFuncionario]);
            totalFuncionario++;
            system("cls");
            printf("Funcionário cadastrado com sucesso!\n");
            system("pause");
            system("cls");

}

void listar(){
    setlocale(LC_ALL, "");
system("cls");
    printf("LISTA DE FUNCIONÁRIOS: \n");
    for(int i = 0;i < totalFuncionario; i++){
        printf("Funcionário %d\nNome: %s\n Cargo: %s\n Idade: %d\n---------------\n",i+1, nomeFuncionario[i], cargoFuncionario[i], idadeFuncionario[i]);
    }
        printf("\\\\\\\\\FIM DA LISTA\\\\\\\\\ \n");
        system("pause");
        system("cls");
}

void taxas(){
setlocale(LC_ALL, "");
system("cls");
printf(" ==========TAXABOOT 1.0========== \n\n");
printf("Lista dos salários: \n");
for(int i = 0;i < totalFuncionario; i++){
    printf("Funcionário - %d\nNome: %s\nSalário bruto: R$%.2f\n",i+1, nomeFuncionario[i], salarioFuncionario[i]);
    printf("FGTS - %.2f\n", salarioFuncionario[i] * 0.08);

    if(salarioFuncionario[i] < 1519)
        printf("INSS - %.2f\n", salarioFuncionario[i] * 0.075);
    else if(salarioFuncionario[i] < 2801)
        printf("INSS - %.2f\n", salarioFuncionario[i] * 0.09);
    else if(salarioFuncionario[i] < 5001)
        printf("INSS - %.2f\n", salarioFuncionario[i] * 0.12);
    else if(salarioFuncionario[i] < 8001)
        printf("INSS - %.2f\n", salarioFuncionario[i] * 0.14);
    else if(salarioFuncionario[i] >= 8001)
        printf("INSS - %.2f\n", salarioFuncionario[i] * 0.2);

    if(salarioFuncionario[i] <= 2400)
        printf("Imposto de renda - ISENTO\n---------------\n");
    else if(salarioFuncionario < 3301)
        printf("Imposto de renda - %.2f\n---------------\n", salarioFuncionario[i] * 0.075);
    else if(salarioFuncionario < 4601)
        printf("Imposto de renda - %.2f\n---------------\n", salarioFuncionario[i] * 0.15);
    else if(salarioFuncionario < 5801)
        printf("Imposto de renda - %.2f\n---------------\n", salarioFuncionario[i] * 0.225);
    else if(salarioFuncionario > 5800)
        printf("Imposto de renda - %.2f\n---------------\n", salarioFuncionario[i] * 0.275);
        }
printf("\\\\\\\\\FIM DA LISTA\\\\\\\\\ \n");
        system("pause");
        system("cls");
    }


void ler_senha(char *senha, int max_len) {
    int i = 0;
    char ch;

    while (i < max_len - 1) {
        ch = _getch();

        if (ch == 13) {
            break;
        }

        if (ch == 8) {
            if (i > 0) {
                i--;
                printf("\b \b");
            }
        } else if (ch >= 32 && ch <= 126) {
            senha[i] = ch;
            i++;
            printf("*");
        }
    }
    senha[i] = '\0';
}
