/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mymain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:16:16 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/17 14:47:09 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char	strmapitest(unsigned int i, char c)
// {
//
// 	return (c);
// }

int main()
{
	// char c1 = 'z';
	// char str[] = "hunter x hunter"; //size 16
	// char str1[] = "gullible"; //size 9
	// char str2[] = "9876543210"; //size 10
	// char fuckstrlcat[20] = "hallo";
	void *ptr = NULL;
	void *ptr1 = NULL;

	// printf("------------------------------PART 1------------------------------\n");
	//
	// printf("|strlen  - [%lu]\n", ft_strlen(str));
	// printf("|isalpha - %d\n", ft_isalpha('a'));
	// printf("|isdigit - %d\n", ft_isdigit(48));
	// printf("|isalnum - %d\n", ft_isalnum('c'));
	// printf("|isascii - %d\n", ft_isascii('C'));
	// printf("|isprint - %d\n", ft_isprint('C'));
	// printf("|toupper - ");
	// putchar(ft_toupper(c1));
	// printf("\n");
	// printf("|tolower - ");
	// putchar(ft_tolower(c1));
	// printf("\n");
	// printf("|atoi    - %d\n", ft_atoi("-6"));
	// printf("|strncmp - %d\n", ft_strncmp(str, str1, 10));
	// printf("|strnstr - %s\n", ft_strnstr(str2, "5", 10));
	// printf("|strchr  - %s\n", ft_strchr(str, 't'));
	// printf("|strrchr - %s\n", ft_strrchr(str, 'x'));
	// printf("|memset  - %s\n", ft_memset(ptr, 77, 5));
	// char b[80];
	// ft_memset(b, '8', 5);
	// printf("|B bzero - %s\n", b);
	// ft_bzero(b, 80);
	// printf("|A bzero - %s\n", b);
	printf("|memcpy  - %s\n", ft_memcpy(ptr1, ptr, 0));
	// printf("|memccpy - %s\n", ft_memccpy(ptr1, ptr, 'e', 9));
	// printf("|memchr  - %s\n", ft_memchr(ptr1, 'x', 20));
	// printf("|memmove - %s\n", ft_memmove(ptr1+5, ptr, 0));
	// printf("|memcmp  - %d\n", ft_memcmp(str, str1, 0));
	// printf("|strlcpy - [%lu] %s\n", ft_strlcpy(str2, str, 5), str2);
	// printf("|strlcat - [%lu] %s\n", ft_strlcat(fuckstrlcat, str, 77), fuckstrlcat);
	// printf("|strdup  - [%lu] %s\n", ft_strlen(str),ft_strdup(str));
	// char *cal = (ft_calloc(5, 5));
	// cal = "hi";
	// printf("|calloc  - [%s] \n", cal);
//-----------------------PART 2-------------------------------------------------

	printf("------------------------------PART 2------------------------------\n");

	char s1[] = "";
	char *s2 = ft_substr(s1, 2, 10);
	printf("|substr  - %s [%lu]\n", s2, ft_strlen(s2));
//
	char	j1[] = "fuck";
	char	j2[] = " you ;)";
	printf("|strjoin - %s\n", ft_strjoin(j1, j2));

	printf("|strtrim - %s\n", ft_strtrim(s1, ".x"));

	char **split1;
	int i = 0;
	split1 = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	while(split1[i]){
		printf("|ft_split[%d] %s\n", i, split1[i]);
		i++;
	}
	free(split1);
//
	printf("|ft_itoa - %s\n", ft_itoa(453465));

	// printf("|ft_strmapi - %s\n", ft_strmapi(s1);
}
