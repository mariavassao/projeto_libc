#include "libft.h"

char **ft_split(const char *s, char c){
   int n = word_count(s, c);
   int i = 0;
   char **nova_array = malloc(sizeof(char*) * (n+1));
   while (s[i])
   {
      while ( s[i] == c)
         i++;
         
         if (s[i])
         {
            int start = i;
            int len = 0;

            while (s[i] && s[i] != c)
            {
               len++;
               i++;
            }
         }
    }
}

int word_count(const char *str, char c){
   int i = 0;
   int cont = 0;
    while (*str)
    {
       if (*str != c && i == 0)
       {
        i++;
       } else
       {
        cont++;
       }
    }
    while (s[i] && s[i] != c)
    {
      i++;
    }
    return cont;
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