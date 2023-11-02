/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:07:47 by resilva           #+#    #+#             */
/*   Updated: 2023/10/24 00:12:22 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program to illustrate close system Call 
#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>
  
int main(void) 
{ 
    int fd1 = open("foo.txt", O_RDONLY); 
    if (fd1 < 0) { 
        perror("c1"); 
        exit(1); 
    } 
    printf("opened the fd = %d\n", fd1); 
  
    // Using close system Call 
    if (close(fd1) < 0) { 
        perror("c1"); 
        exit(1); 
    } 
    printf("closed the fd.\n");
	return (0);
}