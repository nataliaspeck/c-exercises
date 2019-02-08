#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* comentário */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int i = 0, x=0;
	char str[1000], newstr[1000];
    printf ("Insira uma string:\n");
    fgets(str, 999, stdin);     
    while (str[i] != '\0')
    {
        if (str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i]== 'u' || str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] =='O'|| str[i] == 'U')
        {
            i++;
            continue;
        }
        else
        {
            if (str[i] != ' ')
            {
                newstr[x++] = str [i];
            }
        }
        i++;
    }
    puts(newstr);
	system ("pause");
	return 0;
}

