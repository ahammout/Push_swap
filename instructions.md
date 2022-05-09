# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    instructions.md                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammout <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 12:12:50 by ahammout          #+#    #+#              #
#    Updated: 2022/05/09 12:12:52 by ahammout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Rules & steps of push swap project 

1. git arguments & put them inside an array

    + [Done]checking arguments and doing the right actions.
    + first argument should be on the top of the stack, and like so(follow the order).
    + The smallest number should be on the top of the stack (FIFO).
    + instruction must separated by a '\n'.
    + 

2. check the array & check errors 

    + [Done]check duplicate numbers/
        
         compare the first element with all the rest of elements, if it duplicate exit and show error ; if not : go to the next element and do the same operation until the stack finished.
         
    + [Done] Check if the array has just one parameter.`
    + create stack_b and check if it empty;
    + [Done] if some argument aren't integer.
    + [Done]if some argument are big than integer limit (max int).

4. operations/

    * swap operations; (file name : swap.c)
        + sa : swap a
        + sb : swap b
        + ss : sa & sb at the same time
    * push operations; (file name : push.c)
        + pa : push a
        + pb : push b
    * retate operations; (file name : retate.c)
        + ra : retate a
        + rb : retate b
        + rr : ra & rb at the same time
    * reverse operations; (file name : reverse.c)
        + rra : reverse retate a
        + rrb : reverse retate b
        + rrr : rra & rrb at the same time

# 4.4 / swap_a

5. principal function (sorting algorithme)
