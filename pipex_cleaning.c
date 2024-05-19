/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_cleaning.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:50:29 by samartin          #+#    #+#             */
/*   Updated: 2024/05/19 19:54:00 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	pp_lst_clean(t_list *lst)
{
	t_list	*swap;

	while (lst)
	{
		swap = lst->next;
		free(lst);
		lst = swap;
	}
}
