/*
** bousti_link_in_tree.c for boustifaille in /home/ungaro_l/mylibs/boustifaille
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue May  3 16:50:31 2016 Luca Ungaro
** Last update Wed May 04 16:56:07 2016 Luca Ungaro
*/

#include "bouf.h"

t_bousti_tree	*bouti_link_in_head(t_bousti_tree	*node,
				    t_bousti_tree	*new)
{
  if (new)
    {
      new->head = node;
      if (node)
	node->head = new;
    }
  return (new);
}

t_bousti_tree	*bouti_link_in_left(t_bousti_tree	*node,
				    t_bousti_tree	*new)
{
  if (new)
    {
      new->head = node;
      if (node)
	node->left = new;
    }
  return (new);
}

t_bousti_tree	*bouti_link_in_right(t_bousti_tree	*node,
				     t_bousti_tree	*new)
{
  if (new)
    {
      new->head = node;
      if (node)
	node->right = new;
    }
  return (new);
}
