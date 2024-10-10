/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-raev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:03:43 by tde-raev          #+#    #+#             */
/*   Updated: 2024/10/09 16:10:24 by tde-raev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void test_ft_atoi() {
    printf("ft_atoi(\"123\") = %d\n", ft_atoi("123"));
    printf("ft_atoi(\"-123\") = %d\n", ft_atoi("-123"));
    printf("ft_atoi(\"+123\") = %d\n", ft_atoi("+123"));
    printf("ft_atoi(\"  123\") = %d\n", ft_atoi("  123"));
    printf("ft_atoi(\"123abc\") = %d\n", ft_atoi("123abc"));
    printf("ft_atoi(\"abc123\") = %d\n", ft_atoi("abc123"));
}

void test_ft_bzero() {
    char str[] = "Hello";
    ft_bzero(str, 3);
    printf("ft_bzero(\"Hello\", 3) = %s\n", str + 3);
}

void test_ft_calloc() {
    int *arr = (int *)ft_calloc(5, sizeof(int));
    printf("ft_calloc(5, sizeof(int)) = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void test_ft_isalnum() {
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));
    printf("ft_isalnum('1') = %d\n", ft_isalnum('1'));
    printf("ft_isalnum('@') = %d\n", ft_isalnum('@'));
}

void test_ft_isalpha() {
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));
}

void test_ft_isascii() {
    printf("ft_isascii(120) = %d\n", ft_isascii(120));
    printf("ft_isascii(200) = %d\n", ft_isascii(200));
}

void test_ft_isdigit() {
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
}

void test_ft_isprint() {
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
    printf("ft_isprint('\\n') = %d\n", ft_isprint('\n'));
}

void test_ft_memchr() {
    char str[] = "Hello, world!";
    printf("ft_memchr(\"Hello, world!\", 'w', 13) = %s\n", (char *)ft_memchr(str, 'w', 13));
    printf("ft_memchr(\"Hello, world!\", 'z', 13) = %s\n", (char *)ft_memchr(str, 'z', 13));
}

void test_ft_memcmp() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hella";
    printf("ft_memcmp(\"Hello\", \"Hello\", 5) = %d\n", ft_memcmp(str1, str2, 5));
    printf("ft_memcmp(\"Hello\", \"Hella\", 5) = %d\n", ft_memcmp(str1, str3, 5));
}

void test_ft_memcpy() {
    char src[] = "Hello";
    char dest[6];
    ft_memcpy(dest, src, 6);
    printf("ft_memcpy(dest, \"Hello\", 6) = %s\n", dest);
}

void test_ft_memmove() {
    char str[] = "Hello";
    ft_memmove(str + 2, str, 3);
    printf("ft_memmove(str + 2, str, 3) = %s\n", str);
}

void test_ft_memset() {
    char str[] = "Hello";
    ft_memset(str, 'a', 3);
    printf("ft_memset(str, 'a', 3) = %s\n", str);
}

void test_ft_strchr() {
    char str[] = "Hello, world!";
    printf("ft_strchr(\"Hello, world!\", 'w') = %s\n", ft_strchr(str, 'w'));
    printf("ft_strchr(\"Hello, world!\", 'z') = %s\n", ft_strchr(str, 'z'));
}

void test_ft_strdup() {
    char *dup = ft_strdup("Hello");
    printf("ft_strdup(\"Hello\") = %s\n", dup);
}

void test_ft_strlcpy() {
    char src[] = "Hello";
    char dest[6];
    ft_strlcpy(dest, src, 6);
    printf("ft_strlcpy(dest, \"Hello\", 6) = %s\n", dest);
}

void test_ft_strlen() {
    printf("ft_strlen(\"Hello\") = %zu\n", ft_strlen("Hello"));
    printf("ft_strlen(\"\") = %zu\n", ft_strlen(""));
}

void test_ft_strncmp() {
    printf("ft_strncmp(\"Hello\", \"Hello\", 5) = %d\n", ft_strncmp("Hello", "Hello", 5));
    printf("ft_strncmp(\"Hello\", \"Hella\", 5) = %d\n", ft_strncmp("Hello", "Hella", 5));
}

void test_ft_strnstr() {
    char big[] = "Hello, world!";
    char little[] = "world";
    char little_not[] = "zzz";
    printf("ft_strnstr(\"Hello, world!\", \"world\", 13) = %s\n", ft_strnstr(big, little, 13));
    printf("ft_strnstr(\"Hello, world!\", \"zzz\", 13) = %s\n", ft_strnstr(big, little_not, 13));
}

void test_ft_strrchr() {
    char str[] = "Hello, world!";
    printf("ft_strrchr(\"Hello, world!\", 'o') = %s\n", ft_strrchr(str, 'o'));
    printf("ft_strrchr(\"Hello, world!\", 'z') = %s\n", ft_strrchr(str, 'z'));
}

void test_ft_tolower() {
    printf("ft_tolower('A') = %d\n", ft_tolower('A'));
    printf("ft_tolower('a') = %d\n", ft_tolower('a'));
}

void test_ft_toupper() {
    printf("ft_toupper('a') = %d\n", ft_toupper('a'));
    printf("ft_toupper('A') = %d\n", ft_toupper('A'));
}

int main() {
    test_ft_atoi();
    test_ft_bzero();
    test_ft_calloc();
    test_ft_isalnum();
    test_ft_isalpha();
    test_ft_isascii();
    test_ft_isdigit();
    test_ft_isprint();
    test_ft_memchr();
    test_ft_memcmp();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_memset();
    test_ft_strchr();
    test_ft_strdup();
    test_ft_strlcpy();
    test_ft_strlen();
    test_ft_strncmp();
    test_ft_strnstr();
    test_ft_strrchr();
    test_ft_tolower();
    test_ft_toupper();

    return 0;
}

