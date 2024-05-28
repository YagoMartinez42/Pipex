/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_exec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:30:28 by samartin          #+#    #+#             */
/*   Updated: 2024/05/28 16:50:07 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static t_list *pp_create_pipes(int pipe_num)
{
	int		*content;
	t_list	*pipe_list;
	t_list	*node;
	int		i;

	i = 0;
	while (i < pipe_num)
	{
		content = malloc(sizeof(int) * 2);
		if (!content || pipe(content) == -1)
		{
			pp_lst_clean(pipe_list);
			return (NULL);
		}
		node = ft_lstnew(content);
		ft_lstadd_back(&pipe_list, node);
		i++;
	}
	return (pipe_list);
}

int	pp_pipex_hdoc_append(int argc, char **argv, char **envp)
{
	return (0);
}

int	pp_pipex_files(int argc, char **argv, char **envp)
{
	int		i;
	int		pid;
	t_list	*pipe_lst;

	pipe_lst = pp_create_pipes(argc - 2); //NONO!! Argc tiene 3 o 4 que no son commands
	if (!pipe_lst)
	{
		perror("Memory error creating pipes.\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
    	pid = fork();
    	if (pid == -1)
		{
      		perror("Fork failed.\n");
			pp_lst_clean(pipe_lst);
			exit(1);
		}
		else if (pid)
		{
			if (i == 1)
				//open infile and dup2 to stdin
			else if (i == argc - 2)
			{
				//open outfile and dup2 to stdout
			}
			//close all pipes except mines
			//execve my argv
		}
	}
	waitpid(pid);
	return (0);
}
