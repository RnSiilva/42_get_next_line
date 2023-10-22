/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:18:06 by resilva           #+#    #+#             */
/*   Updated: 2023/10/22 20:18:26 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define constante 0

void funcao(void) 
{
    int variavel = constante; // se colocasse 0 aqui daria na mesma
    static int estatica = constante;
    variavel++;
    estatica++;
    printf("variavel = %d, estatica = %d\n", variavel, estatica);
}

int main(void) 
{
    for (int i = 0; i < 10; ++i) funcao();
}