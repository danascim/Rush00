/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danascim <danascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:29:26 by danascim          #+#    #+#             */
/*   Updated: 2020/11/22 14:42:28 by danascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

ssize_t	write(int saida, const void *conteudo, size_t nbyte);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
