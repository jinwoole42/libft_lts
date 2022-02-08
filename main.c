/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:19:54 by jinwoole          #+#    #+#             */
/*   Updated: 2022/02/08 13:38:20 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	main(void)
{
	char *str;

	str = malloc(sizeof(char) * 100);
	str = "Hello There? Tabnine is quite awesome!";
	ft_printf("%s\n", str);
}
