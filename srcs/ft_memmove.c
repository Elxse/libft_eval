/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 04:24:05 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:16:24 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main ()
{
	char str[] = "memmove can be very useful......";
	ft_memmove(str + 20, str + 15, 11);
	puts(str);
	puts("Expected output: memmove can be very very useful.");
	return 0;
}