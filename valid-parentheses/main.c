#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void output(int isValid)
{
    if (isValid)
        printf("true\n");
    else
        printf("false\n");
}

int main(void)
{
    char str[250];
    int size;
    int half;
    int aux;

    scanf("%s", str);
    size = strlen(str);
    half = size / 2;
    aux = half - 1;
    if (size % 2 != 0)
        output(0);
    else
    {
        while (aux < 0)
        {
            if (size == 2 && str[aux] != str[half])
                break ;
             if (!brackets_short(str[aux], str[half]))
             //Talvez aqui vá um outra verificação.
            aux--;
            half++;
        }
        if (aux < 0)
            output(1);
        else
            output(0);
    }
    return (0);
}