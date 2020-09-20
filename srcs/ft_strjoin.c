/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 04:11:06 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/20 04:11:27 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
	char str1[] = "str1 ";
	char str2[] = "str2";
	printf("User:\n%s\nExpected:\nstr1 str2\n", ft_strjoin(str1, str2));
	return 0;
}
