#include "libft.h"

 char *ft_sttrirm(const char *s1, const char *set){
    size_t start, end, i,j;
    char*novaS;
    novaS = (char *) malloc(ft_strlen(s1) + 1);
   if (!novaS)
   {
      return NULL;
   }
   
   start = 0;
   end = ft_strlen(s1) - 1;
   i=0;
   while (start <= end && s1[i] == set)
   {
      start = start +1;
      i++;
   }

   //verifica ate onde set existe em s1 
   i=0;
   while (end >= start && s1[i] == set)
   {
      
      end = end - 1;
      i--;
   }

   j=0;
   while (s1[start] <= end)
   {
      novaS[j++] = s1[start];
      start++; 
   }
   novaS[j] = '\0';
   return novaS;
 }