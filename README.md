
# 📚 Libft

> Primeira biblioteca estática desenvolvida no currículo da 42 School.
> Reimplementação de funções da libc + utilitários adicionais + lista encadeada.

---

## 📌 Sobre o Projeto

O **Libft** consiste na recriação de diversas funções da biblioteca padrão da linguagem C, além da implementação de funções adicionais e uma estrutura de lista encadeada.

O objetivo principal é compreender profundamente:

* Manipulação de memória
* Ponteiros
* Strings
* Alocação dinâmica
* Estruturas de dados
* Organização modular de código
* Criação de biblioteca estática

Essa biblioteca será utilizada como base em projetos futuros do cursus.

---

## 🛠️ Tecnologias Utilizadas

* Linguagem C
* GCC
* Makefile
* Norma 42
* Biblioteca estática (`ar`)

---

## 📂 Estrutura do Projeto

```
libft/
├── includes/
│   └── libft.h
├── src/
│   ├── ft_strlen.c
│   ├── ft_memcpy.c
│   ├── ft_atoi.c
│   ├── ft_split.c
│   ├── ...
├── Makefile
└── libft.a
```

---

## ⚙️ Compilação

Para compilar a biblioteca:

```bash
make
```

Isso gerará:

```
libft.a
```

Outros comandos disponíveis:

```bash
make clean     # Remove arquivos objeto
make fclean    # Remove objetos + libft.a
make re        # Recompila tudo
```

---

## 📚 Funções Implementadas

### 🔹 Parte 1 – Funções da libc

#### Manipulação de memória

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`

#### Manipulação de strings

* `ft_strlen`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strdup`

#### Conversão

* `ft_atoi`

#### Verificação de caracteres

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`

---

### 🔹 Parte 2 – Funções Adicionais

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

---

### 🔹 Parte 3 – Lista Encadeada (Bonus)

Estrutura utilizada:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

Funções implementadas:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## 🧠 Conceitos Técnicos Desenvolvidos

### 🔹 Gerenciamento de Memória

* Uso seguro de `malloc`
* Liberação correta com `free`
* Prevenção de memory leaks
* Tratamento de ponteiros NULL

### 🔹 Manipulação de Ponteiros

* Ponteiros simples
* Ponteiros para ponteiros
* Endereçamento de memória
* Casting de `void *`

### 🔹 Estruturas de Dados

* Implementação de lista encadeada
* Navegação entre nós
* Alocação dinâmica encadeada

### 🔹 Modularização

* Separação em `.c` e `.h`
* Uso de header guards
* Organização escalável
* Criação de biblioteca reutilizável

### 🔹 Build System

* Criação de Makefile
* Uso de `ar` para biblioteca estática
* Regras de compilação automatizadas

---

## 🔎 Desafios Técnicos

* Implementação correta de `ft_memmove` (overlapping memory)
* Gerenciamento de memória em `ft_split`
* Conversão numérica robusta em `ft_atoi`
* Manipulação genérica de dados em listas (`void *`)

---

## 🚀 Exemplo de Uso

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello 42");
    printf("%s\n", str);
    free(str);
    return (0);
}
```

Compilação:

```bash
gcc main.c -L. -lft
```

---

## 📈 O Que Este Projeto Demonstra

* Base sólida em C
* Entendimento de baixo nível
* Capacidade de recriar funcionalidades padrão
* Controle de memória manual
* Estruturação profissional de projeto

---

## 🏁 Status

✔️ Projeto em Andameento
✔️ Conforme Norma 42
✔️ Biblioteca reutilizável em projetos futuros


