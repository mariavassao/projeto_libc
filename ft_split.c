#include "libft.h"

char **ft_split(const char *s, char c){
   int n = word_count(s, c);
   int i = 0;
   char **nova_array = malloc(sizeof(char*) * (n+1));
   while ( s[i] == c)
   {
     fill_word(s[i], c);
   }
   
}

int word_count(const char *s, char c){
   int i = 0;
    int cont = 0;
    while (s[i])
    {
       if (s[i] == c)
       {
        i++;
       } else
       {
        cont++;
       }
       
    }
    
}

void ft_free( ){

}

char *fill_word(char *nova, char d){
    int cont = 0; 
    char *novastring;
    for (size_t i = 0; i < nova; i++)
    {
       
    }
}