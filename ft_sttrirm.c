#include "libft.h"

 char *ft_sttrirm(const char *s1, const char *set){
    size_t start, end, j;
    char*novaS;

    novaS = (char *) malloc(ft_strlen(s1) + 1);
   if (!novaS)
   {
      return NULL;
   }
   
   start = 0;
   end = ft_strlen(s1);

   //pula caracteres do inicio
   while (s1[start] && ft_strchr(set, s1[start]))
   {
      start++;
   }

   //pula caracteres do fim
   while (end >= start && ft_strchr(set, s1[end - 1]))
   {
      end--;
   }

   j=0;
   while (start < end)
   {
      novaS[j++] = s1[start++];
   }
   novaS[j] = '\0';
   return novaS;
 }