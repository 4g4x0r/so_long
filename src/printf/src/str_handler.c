/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guortun- <guortun-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:09:25 by guortun-          #+#    #+#             */
/*   Updated: 2023/02/08 12:34:05 by guortun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	str_handler(char *s, int fd)
{
	if (!s)
		s = "(null)";
	ft_putstr_fd(s, fd);
	return (ft_strlen(s));
}
