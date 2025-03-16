# **Sistema de Cadastro de Clientes**

Este é um programa simples em C que permite inserir dados de clientes, como nome, e-mail e telefone, e os salva em um arquivo de texto. O arquivo é armazenado na pasta **Downloads** do seu sistema.

## **Funcionalidade**

1. O programa solicita ao usuário para inserir o **nome**, **e-mail** e **telefone** de um cliente.
2. Os dados são salvos em um arquivo chamado `clientes.txt` na pasta **Downloads**.
3. O arquivo é gerado automaticamente e pode ser acessado para ver os dados salvos.

## **Requisitos**

- Um compilador C (como GCC).
- Sistema operacional Windows, Linux ou MacOS.

## **Instruções de Uso**

1. **Clone o repositório** ou **faça o download do código fonte**.
    
2. Abra o terminal ou prompt de comando.
    
3. **Compilar o código**:
    
    - Para **Windows** (com GCC no MinGW ou outro compilador):
        
        ```bash
        gcc -o salvar_cliente salvar_cliente.c
        ```
        
    - Para **Linux/MacOS** (com GCC):
        
        ```bash
        gcc -o salvar_cliente salvar_cliente.c
        ```
        
4. **Executar o programa**:
    
    - No **Windows**:
        
        ```bash
        ./salvar_cliente.exe
        ```
        
    - No **Linux/MacOS**:
        
        ```bash
        ./salvar_cliente
        ```
        
5. O programa solicitará a quantidade de clientes a inserir. Após a inserção, ele criará ou atualizará o arquivo `clientes.txt` na pasta **Downloads**.
    

## **Exemplo de Saída no Terminal**

```C
Digite a quantidade de clientes a inserir: 2

Digite o nome do cliente 1: João Silva 
Digite o email do cliente 1: joao@gmail.com
Digite o telefone do cliente 1: 123456789

Digite o nome do cliente 2: Maria Souza 
Digite o email do cliente 2: maria@gmail.com 
Digite o telefone do cliente 2: 987654321  

Arquivo criado e salvo com sucesso na pasta Downloads!
```

## **Formato do Arquivo de Saída**

O arquivo `clientes.txt` terá a seguinte estrutura:

```plaintext
1 | João Silva | joao@gmail.com | 123456789
---------------------------------------------- 
2 | Maria Souza | maria@gmail.com | 987654321
---------------------------------------------- 
```

Cada linha representa um cliente, e os dados são separados por **pipe (|)**.

## **Notas**

- No **Windows**, substitua o caminho no código para refletir o seu nome de usuário na pasta **Downloads**.
- No **Linux/MacOS**, o código utiliza o caminho `~/Downloads` para salvar o arquivo.
- O programa pode ser modificado facilmente para salvar em outro diretório ou manipular diferentes tipos de dados.
