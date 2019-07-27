/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:13:13 by bannabel          #+#    #+#             */
/*   Updated: 2019/04/01 16:13:14 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void brainfuck (char *str)
{
  char *array[2048] = {0};
  int i = 0;
  int b = 0;
  while(*str)
  {
    if(*str == '+')
      array[i]++;
    else if (*str == '-')
      array[i]--;
    else if (*str == '>')
      i++;
    else if (*str == '<')
      i--;
    else if (*str == ']' != 0)
      while(true)
      {
        if(b == 0 && *str=='[')
        {
          str--;
          b--;
          break;
        }
        else if(*str == ']')
          b++;
        else if(*str == '[')
          b--;
        str--;
      }
    else if (*str == '[' && array[i] == 0)
      while(true)
      {
        if(b == 0 && *str==']')
        {
          str++;
          b--;
          break;
        }
        else if(*str == ']')
          b--;
        else if(*str == '[')
          b++;
        str++;
      }
    else if (*str == '.')
      write(1, str, 1);

    str++;
  }



}

int main(int argc, char **argv)
{
  brainfuck(argv[1]);

}
