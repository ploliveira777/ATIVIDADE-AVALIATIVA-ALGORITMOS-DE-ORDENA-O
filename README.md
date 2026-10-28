# ATIVIDADE-AVALIATIVA-ALGORITMOS-DE-ORDENA-O

# Ordenação de Preços de Supermercado

## 1. Objetivo da aplicação

O objetivo deste projeto é aplicar e comparar os algoritmos de ordenação Bubble Sort e Quick Sort utilizando a linguagem C. A aplicação organiza os preços de produtos de supermercado em ordem crescente, facilitando a visualização e a comparação dos valores.

## 2. Situação-problema

Em um supermercado, comparar os preços de diferentes produtos pode ser uma tarefa trabalhosa quando os valores estão desorganizados. Para facilitar essa análise, a aplicação utiliza dois algoritmos de ordenação para organizar os preços e apresentar os resultados, permitindo observar como cada método realiza a ordenação.

## 3. Funcionalidades

- Cadastro de 10 produtos predefinidos.
- Exibição dos produtos antes da ordenação.
- Ordenação dos preços utilizando Bubble Sort.
- Ordenação dos preços utilizando Quick Sort.
- Comparação dos resultados obtidos pelos dois algoritmos.

## 4. Tecnologias utilizadas

- Linguagem C.
- Compilador GCC.
- Git e GitHub para versionamento e armazenamento do código-fonte.

## 5. Instruções de execução

O código-fonte está disponível no arquivo `Código.c`.

### Linux

Compile o programa:

```bash
gcc "Código.c" -o supermercado
```

Execute:

```bash
./supermercado
```

### Windows

Com o GCC instalado, compile:

```bash
gcc "Código.c" -o supermercado.exe
```

Execute:

```bash
supermercado.exe
```

## 6. Explicação dos algoritmos

### Bubble Sort

O Bubble Sort percorre a lista comparando elementos vizinhos. Quando dois elementos estão fora da ordem desejada, eles são trocados. Esse processo se repete até que os valores estejam ordenados. Sua complexidade de tempo média e no pior caso é O(n²).

### Quick Sort

O Quick Sort utiliza a estratégia de divisão e conquista. Ele escolhe um elemento como pivô, divide os demais elementos em grupos conforme sua relação com o pivô e ordena essas partes recursivamente. Sua complexidade média é O(n log n), embora no pior caso possa ser O(n²).

## 7. Execução online

O programa também pode ser consultado no compilador online:

https://onlinegdb.com/Pz8qhMEaM

## 8. Autor

Paulo Victor Oliveira dos Santos
