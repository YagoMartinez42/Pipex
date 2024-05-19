/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_prompt_parse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:13:55 by samartin          #+#    #+#             */
/*   Updated: 2024/05/19 20:04:54 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static int	pp_check_hdoc(int argc)
{
	if (argc < 6)
	{
		perror("Error: At least heredoc + keyword, two commands and \
output file\n");
		return (1);
	}
	return (0);
}

int	pp_check_args(int argc, char **argv)
{
	int	i;

	i = 2;
	if (argc < 5)
	{
		perror("Error: At least input file or heredoc, two commands and \
output file\n");
		return (1);
	}
	if (!ft_strncmp(argv[1], "here_doc", 8))
	{
		if (pp_check_hdoc(argc))
			return (1);
		i++;
	}
	else if (access(argv[1], R_OK) == -1)
	{
		perror("Error: Unable to open input file \n");
		return (1);
	}
	if (access(argv[argc - 1], F_OK) == 0 && access(argv[argc - 1], W_OK) == -1)
	{
		perror("Error: Output file exists and is not writable\n");
		return (1);
	}
	return (0);
}
