/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:59:16 by resilva           #+#    #+#             */
/*   Updated: 2023/10/25 21:59:35 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>

char    *ft_clean(char *line)
{
    char    *ptr;
    char    *tmp;
    int     i;
    int     sz;

    i = 0;
    while (line[i] != '\n')
        i++;
    sz = strlen(line) - i;
    ptr = (char *)malloc(sizeof(char) * strlen(line) - sz + 1);
    if (!ptr)  
        return (NULL);
    i = 0;
    while (line[i] && line[i] != '\n')
    {
        ptr[i] = line[i];
        i++;
    }
    ptr[i] = '\n';
    ptr[i + 1] = '\0';
    return (ptr);    
}

char    *ft_strjoin(char *line, char *buff)
{
    char    *str;
    int     i;
    int     j;

    if (!line)
    {
        line = (char *)malloc(sizeof(char));
        line[0] = '\0';             
    }
    if (!line || !buff)
        return (NULL);
    str = (char *)malloc(sizeof(char) * strlen(line) + strlen(buff) + 1);
    if (!str)
        return (NULL);
    i = -1;
    j = 0;
    if (line)
        while (line[++i])
            str[i] = line[i];
    while (buff[j])
    {
        str[i++] = buff[j++];
    }
    str[i] = '\0';
    free (line);
    return (str);
}

int ft_strchr(char *str, char c)
{
    int i;

    i = 0;
    if (!str)
        return (0);
    if (str[i] == c)
        return (1);
    while (str[i] && str[i] != c)
    {
        i++;
        if (str[i] == c)
            return (1);
    }
    return (0);
}

int main() 
{ 
    int     fd, sz, i;
    char    *buff = (char *)malloc(10 + 1);
    char    *line = NULL;
  
    fd = open("foo.txt", O_RDONLY);
    if (fd < 0) { 
        perror("r1"); 
        exit(1); 
    }

    i = 0;
    sz = 1;
    while (!ft_strchr(line, '\n') && sz != 0)
    {
        sz = read(fd, buff, 10);
        printf("%d bytes\n", sz); 
        buff[sz] = '\0'; 
        printf("%s\n", buff);
        line = ft_strjoin(line, buff);
    }
    line = ft_clean(line);
    printf("\n%s", line);
    return (0); 
}