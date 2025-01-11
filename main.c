int	main(void)
{
	int     x;
	int     y;
	x = printf("Test 0 : %d, %i, %x, %X, %u\n", 0, 0, 0, 0, 0);
	printf("%d\n", x);
	y = ft_printf("Test 0 : %d, %i, %x, %X, %u\n", 0, 0, 0, 0, 0);
	printf("%d\n", y);

	x = printf("Test plus petit int : %d, %i\n", INT_MIN, INT_MIN);
	printf("%d\n", x);
	y = ft_printf("Test plus petit int : %d, %i\n", INT_MIN, INT_MIN);
	printf("%d\n", y);

	x = printf("Test chaîne vide : %s\n", "");
	printf("%d\n", x);
	y = ft_printf("Test chaîne vide : %s\n", "");
	printf("%d\n", y);

	x = printf("Test pointeur NULL : %p\n", (void *)NULL);
	printf("%d\n", x);
	y = ft_printf("Test pointeur NULL : %p\n", (void *)NULL);
	printf("%d\n", y);
}


// int main(void)
// {
// 	int x;
// 	int y;
// 	int *ptr = &x;

// 	x = printf("mon prenom commence par %c, je m'apl %s, j'ai %d ans et %i 
// 	chat et je suis a 100 %%, %x, %X, %u, adresse: %p\n", 'i', "imran", 25,
// 	1, 255, 255, 4294967295U, (void *)ptr);
// 	printf("%d\n", x);
// 	y = ft_printf("mon prenom commence par %c, je m'apl %s, j'ai %d ans et 
// 	%i chat et je suis a 100 %%, %x, %X, %u, adresse: %p\n", 'i', "imran",
// 	25, 1, 255, 255, 4294967295U, (void *)ptr);
// 	printf("%d\n", y);
// 	return (0);
// }

