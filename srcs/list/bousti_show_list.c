/*
** my_show_list.c for libmy in /home/ungaro_l/rendu/C_prog_elem/CPE_2015_Pushswap
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Nov  4 10:54:25 2015 Luca Ungaro
** Last update Thu Apr 28 19:55:49 2016 Luca Ungaro
*/

#include "bouf.h"

void	bousti_show_list(t_list *list)
{
  while (list != NULL)
    {
      if (list->data)
	bousti_printf("%s\n", (char *)list->data);
      list = list->next;
    }
}

int	bousti_get_list_len(t_list *list)
{
  int	len;

  len = 0;
  while (list && list->data)
    {
      list = list->next;
      len += 1;
    }
  return (len);
}

char		**bousti_list_to_wordtab(t_list *list)
{
  int		i;
  int		len;
  char		**ret;

  i = -1;
  len = 0;
  if (list)
    {
      if (!list->data)
	list = list->next;
      len = bousti_get_list_len(list);
      ret = bousti_malloc((len + 1) * sizeof(char *));
      while (ret && ++i < len)
	{
	  ret[i] = (char *)list->data;
	  list = list->next;
	}
      ret[i] = NULL;
    }
  return (ret);
}
