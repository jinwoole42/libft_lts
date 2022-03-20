/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_next.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:15:14 by jinwoole          #+#    #+#             */
/*   Updated: 2022/03/20 17:15:50 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel_next(t_list *lst)
{
	t_list	*target_node;

	target_node = lst->next;
	if (lst == 0)
		return ;
	lst->next = target_node->next;
	free(target_node);
}
