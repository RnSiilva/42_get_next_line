/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:25:06 by resilva           #+#    #+#             */
/*   Updated: 2023/10/25 21:59:41 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program to illustrate 
// read system Call 
#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>

int main() 
{ 
    int		fd, sz; 
    char	*c = (char *)calloc(100, sizeof(char));
  
    fd = open("foo.txt", O_RDWR | O_CREAT, 0666);
    if (fd < 0) { 
        perror("r1"); 
        exit(1); 
    }

    sz = read(fd, c, 10); 
    printf("called read(%d, c, 10). returned that %d bytes were read.\n",
			fd, sz); 
    c[sz] = '\0'; 
    printf("Those bytes are as follows: %s\n", c); 
  
    return (0); 
}

