/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:39:38 by resilva           #+#    #+#             */
/*   Updated: 2023/10/24 00:58:58 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program to illustrate 
// open system call 
#include <errno.h> 
#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h>
#include <string.h>
  
extern int errno; 
  
int	main(void) 
{
	// if file does not have in directory 
	// then file foo.txt is created. 
	int	fd = open("foo.txt", O_RDWR | O_CREAT, 0666);

	
	printf("fd = %d\n", fd);
	if (fd == -1) 
	{ 
		// print which type of error have in a code 
		printf("Error Number %d\n", errno); 
		// print program detail "Success or failure"
		perror("Program"); 
    }
	else
	{
		char 	text[] = "0 0 0 foo.foo.";
		write (fd, text, strlen(text));
	}
	return (0); 
}