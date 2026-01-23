#include "libft.h"

char **ft_split(const char *s, char c){
    /*
        chama função word_count passando a string para verificação de quantidade
        aloca memoria
        percorre a string s
        encontra o inicio da palavra e chama fill para copiar e retonar UMA palavra
    */
   int n = word_count(s, c);
   int i = 0;
   char *nova_array = (char*) malloc(n+1);
   while ( s[i] == c)
   {
     fill_word(s[i], c);
   }
   
}

int word_count(const char *i, char j){
    /*
        percorre a string e pula o delimitador 
        conta quantas palavras resultantes tem e retorna o valor
    */
   int p = 0;
   int quantidade;
   while (i[p] != j)
   {
     quantidade++;
     p++;
   }
   return quantidade;
   
}

void ft_free( ){
    /*
        libera a memoria se algo der erro
    */
}

char *fill_word(char *nova, char d){
    /*
       recebe o inicio da palavra 
       copia uma palavra 
       aloca memoria
       e retorna a palavra para o split adicionar no char 
    */
    int cont = 0; 
    char *novastring;
    for (size_t i = 0; i < nova; i++)
    {
        /* code */
    }
}