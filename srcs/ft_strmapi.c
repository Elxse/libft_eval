/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:38:01 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/21 13:00:53 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

char	ft_test(unsigned int i, char c)
{
	return (c + i);
}

void 	test1()
{
	{
		printf("User		: %s\n", ft_strmapi("Salut", &ft_test));
	}
	{
		printf("Expected	: Sbnxx\n");
	}
}

void 	test2()
{
	{
		printf("User		: %s\n", ft_strmapi("", &ft_test));
	}
	{
		printf("Expected	: \n");
	}
}

void 	test3()
{
	{
		printf("User		: %s\n", ft_strmapi(0, &ft_test));
	}
	{
		printf("Expected	: (null)\n");
	}
}

void 	test4()
{
	{
		printf("User		: %s\n", ft_strmapi("Salut", 0));
	}
	{
		printf("Expected	: (null)\n");
	}
}

int		main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	printf("===== TEST3 =====\n\n");
	test3();
	printf("===== TEST4 =====\n\n");
	test4();
	return (0);
}
