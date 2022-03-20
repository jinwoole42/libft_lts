/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstselete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:41:56 by jinwoole          #+#    #+#             */
/*   Updated: 2022/03/20 11:54:59 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstselete(t_list *lst, size_t index)
{
	size_t	lstsize;

	lstsize = ft_lstsize(lst);
	if (index >= lstsize)
	{
		ft_printf("<ft_lstselete : Max index is %d. rtn [0]>", lstsize - 1);
		write(1, "\n", 1);
		return (lst);
	}
	while (index)
	{
		lst = lst->next;
		index--;
	}
	return (lst);
}
