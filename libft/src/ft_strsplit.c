
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:36:24 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/21 18:33:47 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_word_count(char *s, int c)
{
    int i;
    int	words;
    
    i = 0;
    words = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i] != '\0')
            words++;
        while (s[i] != c && s[i])
            i++;
    }
    return (words);
}

int		get_word_len(char *s, int c, int index)
{
    int	end;
    int	start;
    int	word_len;
    
    end = 0;
    word_len = 0;
    start = index;
    while (s[index] != c && s[index])
    {
        index++;
        end = index;
    }
    word_len = end - start;
    return (word_len);
}

int     hasword(char *s, int c)
{
    if (get_word_count(s, c))
        return (1);
    return (0);
}

char	**ft_strsplit(char *str, int c)
{
    int i;
    int	j;
    int	index;
    char *word;
    char **sptr;
    
    i = 0;
    j = 0;
    sptr = 0;
    word = 0;
    sptr = (char **)malloc(sizeof(char *) * (get_word_count(str, c) + 1));
    if (hasword(str, c))
    {
        while (str[i] != '\0')
        {
            index = 0;
            while (str[i] == c && str[i] != '\0')
                i++;
            if (str[i] != '\0')
            {
                word = (char *)malloc(sizeof(char) * (get_word_len(str, c, i) + 1));
                while (str[i] != c && str[i] != '\0')
                {
                    word[index] = str[i];
                    i++;
                    index++;
                }
                word[index] = '\0';
                sptr[j] = word;
                j++;
            }
        }
    }
    sptr[j] = 0;
    return (sptr);
}