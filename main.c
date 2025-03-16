#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Cliente {
    char *name;
    char *email;
    int telefone;
} Cliente;

void save_in_file(Cliente arr, int idx) {
    FILE *file = fopen("C:\\Users\\WILLIAM\\Downloads\\clientes.txt", "a");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "\n%d | %s | %s | %d\n", idx + 1, arr.name, arr.email, arr.telefone);
    fprintf(file,"%s","----------------------------");

    fflush(file);

    fclose(file);
}

void push_clients(Cliente *arr, int idx) {
    char name[50], email[50];
    int telefone;

    printf("\nDigite o nome do cliente %d: ", idx + 1);
    scanf(" %49[^\n]", name);
    printf("Digite o email do cliente %d: ", idx + 1);
    scanf(" %49[^\n]", email);
    printf("Digite o telefone do cliente %d: ", idx + 1);
    scanf("%d", &telefone);

    arr[idx].name = (char *)malloc(strlen(name) + 1);
    arr[idx].email = (char *)malloc(strlen(email) + 1);

    if (arr[idx].name == NULL || arr[idx].email == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(EXIT_FAILURE);
    }

    strcpy(arr[idx].name, name);
    strcpy(arr[idx].email, email);
    arr[idx].telefone = telefone;

    save_in_file(arr[idx], idx);
}

void print_clients(Cliente *arr, int size) {
    printf("\n*********** Lista de clientes ***********\n\n");
    for (int i = 0; i < size; i++) {
        printf("Cliente %d:\n", i + 1);
        printf("Nome ---> %s\n", arr[i].name);
        printf("Email ---> %s\n", arr[i].email);
        printf("Telefone ---> %d\n\n", arr[i].telefone);
    }
}

void free_clients(Cliente *arr, int size) {
    for (int i = 0; i < size; i++) {
        free(arr[i].name);
        free(arr[i].email);
    }
    free(arr);
}

void start() {
    int qtd;
    printf("Digite a quantidade de clientes a inserir: ");
    scanf("%d", &qtd);

    Cliente *clientes = (Cliente *)malloc(qtd * sizeof(Cliente));
    if (clientes == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < qtd; i++) {
        push_clients(clientes, i);
    }

    print_clients(clientes, qtd);

    free_clients(clientes, qtd);

    printf("\n✅ Dados salvos em 'clientes.txt'\n");
}

int main(void) {
    start();
    return 0;
}
