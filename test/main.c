
#include "libtest.h"

int	main()
{
/*1. libc functions*/

	char	*s;
	char	*t;
	size_t	n;
	char a, b, c;
	char	*is, *ls, *us;

	s = "Hi Tom";
	t = "Hi Rob";
	n = 3;
	a = 'a';
	b = '0';
	c = '\t';
	is = "123";
	ls = "small";
	us = "big";

	ft_putstr("test string: ");
	ft_putstr(s);
	ft_putstr("\n\n");
/*1. ft_strlen*/
	t_strlen(s);
/*2. ft_strdup*/
	t_strdup(s);
/*3. ft_strcpy*/
	t_strcpy(s);
/*4. ft_strncpy*/
	t_strncpy(s, n);
/*5. ft_isalpha*/
	t_isalpha(a, b, c);
/*6. ft_isdigit*/
	t_isdigit(a, b, c);
/*7. ft_isalnum*/
	t_isalnum(a, b, c);
/*8. ft_toupper*/
	t_toupper(ls);
/*9. ft_tolower*/
	t_tolower(us);
/*10. ft_strcmp*/
	t_strcmp(s, t);
/*11. ft_strncmp*/
	t_strncmp(s, t, n);
/*12. ft_atoi*/
	t_atoi(is);
/*13. ft_memset*/
	t_memset(a, n);
/*14. ft_bzero*/
	t_bzero(n);
/*15. ft_memcpy*/
/*16. ft_memccpy*/
/*17. ft_memmove*/
/*18. ft_memchr*/
/*19. ft_memcmp*/
/*20. ft_strcat*/
/*21. ft_strncat*/
/*22. ft_strlcat*/
/*23. ft_strchr*/
/*24. ft_strrchr*/
/*25. ft_strstr*/
/*26. ft_strnstr*/
/*27. ft_isascii*/
	t_isascii(a, b, c);
/*28. ft_isprint*/
	t_isprint(a, b, c);

				/*2. additional functions*/

/*29. ft_putchar*/
/*30. ft_putstr*/
/*31. ft_putnbr*/
/*32. ft_memalloc*/
/*33. ft_memdel*/
/*34. ft_strnew*/
/*35. ft_strdel*/
/*36. ft_strclr*/
/*37. ft_striter*/
/*38. ft_striteri*/
/*39. ft_strmap*/
/*40. ft_strmapi*/
/*41. ft_strequ*/
/*42. ft_strnequ*/
/*43. ft_strsub*/
/*44. ft_strjoin*/
/*45. ft_strtrim*/
/*46. ft_strsplit*/
/*47. ft_itoa*/
/*48. ft_putendl*/
/*49. ft_putchar_fd*/
/*50. ft_putstr_fd*/
/*51. ft_putendl_fd*/
/*52. ft_putnbr_fd*/

				/*3. bonus functions*/

/*53. ft_lstnew*/
/*54. ft_lstdelone*/
/*55. ft_lstdel*/
/*56. ft_lstadd*/
/*57. ft_lstiter*/
/*58. ft_lstmap*/

	return (0);
}
