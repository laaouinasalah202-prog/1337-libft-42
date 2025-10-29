/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 09:18:13 by slaaouin          #+#    #+#             */
/*   Updated: 2025/10/22 12:29:56 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!f || !lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}

int main()
{
	t_list *lst1;
	t_list *lst2;

	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));


	lst1->content = malloc(ft_strlen("my name is") + 1);
	void *temp = lst1->content;

	lst2->content = malloc(ft_strlen("salah eddine but you can call me")+1);
	void *tmp1 = lst2->content;
	lst1->content = "my name is";
	lst2->content = "salah eddine but you can call me";
	// free(lst1->content);
	// free(lst2->content);
	// ft_strlcpy(lst1->content, "my name is", ft_strlen("my name is")+1);
	// ft_strlcpy(lst2->content, "salah eddine but you can call me", ft_strlen("salah eddine but you can call me")+1);


	printf("the first node cotain %p\n", lst1->content);
	printf("the first node cotain %p\n", lst2->content);
	printf("the first node cotain %p\n", temp);
	printf("the first node cotain %p\n", tmp1);
	printf("%p\n", lst1->next);
		free(temp);
		free(tmp1);
		free(lst1);
		free(lst2);

}
