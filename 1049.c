#include <stdio.h>
#include <string.h>

int main() {
    char tipo1[20];
    char tipo2[20];
    char tipo3[20];

    scanf("%s\n", tipo1);
    scanf("%s\n", tipo2);
    scanf("%s", tipo3);

    if (strcmp(tipo1, "vertebrado") == 0)
    {
        if (strcmp(tipo2, "ave") == 0)
        {
           if (strcmp(tipo3, "carnivoro") == 0)
           {
            printf("%s\n", "aguia");
           }
           else if (strcmp(tipo3, "onivoro") == 0)
           {
            printf("%s\n", "pomba");
           }
        }
        else if (strcmp(tipo2, "mamifero") == 0)
        {
            if (strcmp(tipo3, "onivoro") == 0)
            {
                printf("%s\n", "homem");
            }
            else if (strcmp(tipo3, "herbivoro") == 0)
           {
            printf("%s\n", "vaca");
           }
        }    
    }
    else if (strcmp(tipo1, "invertebrado") == 0)
    {
        if (strcmp(tipo2, "inseto") == 0)
        {
           if (strcmp(tipo3, "hematofago") == 0)
           {
            printf("%s\n", "pulga");
           }
           else if (strcmp(tipo3, "herbivoro") == 0)
           {
            printf("%s\n", "lagarta");
           }
        }
        else if (strcmp(tipo2, "anelideo") == 0)
        {
            if (strcmp(tipo3, "hematofago") == 0)
            {
                printf("%s\n", "sanguessuga");
            }
            else if (strcmp(tipo3, "onivoro") == 0)
           {
            printf("%s\n", "minhoca");
           }
        }    
    }


    return 0;
}