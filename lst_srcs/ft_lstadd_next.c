/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_next.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:15:31 by jinwoole          #+#    #+#             */
/*   Updated: 2022/03/20 17:28:48 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_next(t_list *lst, t_list *new)
{
	if (lst == 0 || new == 0)
		return ;
	new->next = lst->next;
	lst->next = new;
}
