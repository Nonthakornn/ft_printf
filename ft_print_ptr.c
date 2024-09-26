/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:27:37 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/26 17:49:48 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_print_hex(ptr, 'x');
	return (count);
}

/*
#include <stdio.h>
#include "ft_print_hex.c"
#include "ft_print_char.c"
int main(void)
{
	int num = 42;
	int *ptr = &num;
	int *null_ptr = NULL;

	ft_print_ptr((unsigned long long)ptr);
	printf("\n");

	ft_print_ptr((unsigned long long)null_ptr);
	return (0);
}
*/