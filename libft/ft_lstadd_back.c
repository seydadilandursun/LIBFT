/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdursun <sdursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:28:27 by sdursun           #+#    #+#             */
/*   Updated: 2023/01/14 11:28:30 by sdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		ft_lstlast(*lst)-> next = new;
		ft_lstlast(*lst)-> next = NULL;
	}
}
