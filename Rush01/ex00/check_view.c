/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:08:13 by akolgano          #+#    #+#             */
/*   Updated: 2023/07/01 21:40:10 by wong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view(int *arr, int view)
{
	int	max_height;
	int	count;
	int	i;

	i = 0;
	max_height = 0;
	count = 0;
	while (i < 4)
	{
		if (arr[i] > max_height)
		{
			max_height = arr[i];
			count++;
		}
		i++;
	}
	return (count == view);
}
