#include <stdio.h>
#include "libft.h"

void f(void *content)
{
	printf("%s",(char *)content);
}
int main()
{
	//split main
	// char c = ' ';
	// char *s = "selam arkadaslar";
	// char **ret;
	// int i = 0;

	// ret = ft_split(s,c);
	// while (i < 2)
	// {
	// 	printf("%s\n",ret[i]);
	// 	i++;
	// }
	// return (0);

	//memcpy main
	// char dst[] = "merhabalar arkadaslar";
	// char src[] = "asdasdasd";
	// ft_memcpy(dst,src,7);
	// printf("%s\n",dst);

	// lstnew main
	// t_list *p;
	// p = ft_lstnew(ft_strdup("selam"));
	// printf("%s",(char *)p -> content);

	// ft_lstiter ve lst_add_back main
	// t_list *p;
	// p = ft_lstnew(ft_strdup("selam1"));
	// ft_lstadd_back(&p,ft_lstnew(ft_strdup("arkadaslar2")));
	// ft_lstiter(p,f);
}