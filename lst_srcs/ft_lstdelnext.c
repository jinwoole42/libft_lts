/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:15:14 by jinwoole          #+#    #+#             */
/*   Updated: 2022/03/20 16:24:11 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdelnext(t_list *lst)
{
	t_list	*target_node;

	target_node = lst->next;
	if (lst == 0)
		return ;
	lst->next = target_node->next;
	free(target_node);
}
