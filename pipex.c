/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:26:23 by samartin          #+#    #+#             */
/*   Updated: 2024/05/19 20:00:22 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	if(pp_check_args(argc, argv))
		return (1);
	if (!ft_strncmp(argv[1], "here_doc", 8))
	{
		if (pp_pipex_hdoc_append(argc, argv, envp))
			return (1);
	}
	else
	{
		if (pp_pipex_files(argc, argv, envp))
			return (1);
	}
	return (0);
}
