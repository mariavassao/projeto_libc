#include "libft.h"


int word_count(const char *str, char c){
   int i = 0;
   int cont = 0;
    while (*str)
    {
       if (*str != c && i == 0)
       {
         i = 1;
         cont++;
       } else if (*str == c)
       {
        i = 0;
       }
      str++;
    }
    return cont;
}

char *fill_word(const char *nova, int start, int end){
   char *res = malloc((end + 1) * sizeof(char));
   if (!res)
   {
      return NULL;
   }
   
   int i = 0;

   while (i < end)
   {
      res[i] = nova[start];
      i++;
      start++;
   }
   res[i] = 0;
   return res;
}

char **ft_split(const char *s, char c){
   int n = word_count(s, c);
   int i = 0;
   char **nova_array = malloc(sizeof(char*) * (n+1));
   if (!nova_array)
   {
      return NULL;
   }
   
   int start;
   int len;
   int j = 0;

   while (s[i])
   {
      while ( s[i] == c)
        {
          i++;
        }

         if (s[i])
         {
            start = i;
            len = 0;

            while (s[i] && s[i] != c)
            {
               len++;
               i++;
            }
          nova_array[j] = fill_word(s, start, len);
          j++;
         }
    }
    nova_array[j] = 0;
    return nova_array;
}



void ft_free( ){

}

