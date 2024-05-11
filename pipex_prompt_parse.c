/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_prompt_parse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:13:55 by samartin          #+#    #+#             */
/*   Updated: 2024/05/11 12:14:04 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	pp_check_args (int argc, char **argv)
{
	if (argc < 5)
	{
		ft_putstr_fd("Error: At least input file or heredoc, two commands and \
			output file\n", 2);
		return (1);
	}
	if (!ft_strncmp(argv[1], "here_doc", 8))
	{
		if (argc < 6)
		{
			ft_putstr_fd("Error: At least input file or heredoc, two commands and output file\n", 2);
			return (1);
		}
	}
	else if (access(argv[1], F_OK) == -1)
	{
		ft_putstr_fd("Error: Input file does not exist\n", 2);
		return (1);
	}
	return (0);
}