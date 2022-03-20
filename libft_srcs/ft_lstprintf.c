/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 09:09:38 by jinwoole          #+#    #+#             */
/*   Updated: 2022/03/20 09:15:05 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstprintf(t_list *lst)
{
	if (lst == 0)
		return ;
	while (lst)
	{
		ft_printf("%d ", lst->content);
		lst = lst->next;
	}
}
