/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:35:57 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/31 22:05:11 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;
	size_t	asg;

	asg = (count * size);
	aux = malloc(asg);
	if (!aux)
		return (0);
	ft_memset(aux, 0, asg);
	return (aux);
}
/*
int main ()
{
    int i,n;
    int * pData;
         printf ("El número de dígitos que se introducirán:");
    scanf ("%d",&i);
    pData = (int*) calloc (i,sizeof(int));
    if (pData==NULL) exit (1);
    for (n=0;n<i;n++)
    {
                 printf ("Ingrese un número #% d:", n + 1);
        scanf ("%d",&pData[n]);
    }
         printf ("El número que ingresaste es:");
    for (n=0;n<i;n++) printf ("%d ",pData[n]);
   
    free (pData);
    system("pause");
    return 0;
}*/
