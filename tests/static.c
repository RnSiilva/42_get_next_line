/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:18:06 by resilva           #+#    #+#             */
/*   Updated: 2023/10/23 22:35:09 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define const 0

void function(void) 
{
    int var = const;
    static int stc = const;
    var++;
    stc++;
    printf("variable = %d, static = %d\n", var, stc);
}

int main(void) 
{
    for (int i = 0; i < 10; ++i)
        function();
}