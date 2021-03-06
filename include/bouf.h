/*
** bouf.h for boustifaille in /home/ungaro_l/mylibs/boustifaille
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Apr 12 16:44:51 2016 Luca Ungaro
** Last update Mon May 16 13:28:17 2016 Luca Ungaro
*/

#ifndef BOUF_H_
# define BOUF_H_

/*
** -----------------------------------------------------------------------------
** . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
** . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
** . . . . . . .  ____                  _   _  __      _ _ _       . . . . . . .
** . . . . . . . |  _ \                | | (_)/ _|    (_) | |      . . . . . . .
** . . . . . . . | |_) | ___  _   _ ___| |_ _| |_ __ _ _| | | ___  . . . . . . .
** . . . . . . . |  _ < / _ \| | | / __| __| |  _/ _` | | | |/ _ \ . . . . . . .
** . . . . . . . | |_) | (_) | |_| \__ \ |_| | || (_| | | | |  __/ . . . . . . .
** . . . . . . . |____/ \___/ \__,_|___/\__|_|_| \__,_|_|_|_|\___| . . . . . . .
** . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
** . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
** -----------------------------------------------------------------------------
*/

# ifndef BOUSTI_LIBMY
#  define BOUSTI_LIBC

# endif /* BOUSTI_LIBMY */

# if defined(BOUSTI_LIBMY) && defined(BOUSTI_LIBC)
#  error	"Cannot use both libmy and libc. Choose one."
#  warning	"Source : BOUSTI_LIBMY && BOUSTI_LIBC both defined"

# else /* defined(BOUSTI_LIBMY) XOR defined(BOUSTI_LIBC) */

#  if !defined(BOUSTI_LIBMY) && !defined(BOUSTI_LIBC)
#   error	"This should not happend ! (If it does, I'm sorry for you)"
#   warning	"Source : BOUSTI_LIBMY && BOUSTI_LIBC both undefined"

#  else /* defined(BOUSTI_LIBMY) XOR defined(BOUSTI_LIBC) */

/*
** +---------------------------------------------------------------------------+
** |                                                                           |
** |  What a guard, wasn't it ?                                                |
** |                                                                           |
** +---------------------------------------------------------------------------+
*/
#   include "boustifaille/actual_bouf.h"

#  endif /* !(defined(BOUSTI_LIBMY) && defined(BOUSTI_LIBC)) */

# endif /* !(!defined(BOUSTI_LIBMY) && !defined(BOUSTI_LIBC)) */

#endif /* !BOUF_H_ */
