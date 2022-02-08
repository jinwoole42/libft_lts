/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bouns.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:21:47 by jinwoole          #+#    #+#             */
/*   Updated: 2021/12/11 12:07:27 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_new;

	lst_new = (t_list *)malloc(sizeof(t_list));
	if (lst_new == 0)
		return (0);
	lst_new->content = content;
	lst_new->next = 0;
	return (lst_new);
}
