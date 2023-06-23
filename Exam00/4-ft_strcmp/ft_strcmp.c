#include <stdio.h>
#include <string.h>

// int main() {
//     char a[] = "abcd";
//     char b[] = "xyz";
//     char c[] = "abcd";
//     int result;
//     result = strcmp(a, c);
//     printf("%d", result);
// }

int	ft_strcmp(char *s1, char *s2) {
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main() {
    char a[] = "abcd";
    char b[] = "xyz";
    char c[] = "abcd";
    int result;
    result = ft_strcmp(a, b);
    printf("%d", result);
}