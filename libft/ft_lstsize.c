/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdursun <sdursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:29:33 by sdursun           #+#    #+#             */
/*   Updated: 2023/01/14 11:29:35 by sdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_len;

	lst_len = 1;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		lst_len++;
		lst = lst -> next;
	}
	return (lst_len);
}
