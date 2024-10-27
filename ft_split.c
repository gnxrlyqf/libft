/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:20:23 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/26 20:51:00 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	(void)str;
	(void)c;
//	int		i;
//	int		j;
//	int		size;
//	char	**arr;
//
//	size = count_words(str, c);
//	arr = malloc((size + 1) * sizeof(char *));
//	i = 0;
//	j = 0;
//	while (str[i] && j < size)
//	{
//		if (sep[i] != c)
//		{
//			arr[j++] = ft_strdup(str, charset, i);
//			while (str[i] && str[i] != c)
//				i++;
//		}
//		else
//			i++;
//	}
//	arr[j] = NULL;
//	return (arr);
	return (void *)0;
}
