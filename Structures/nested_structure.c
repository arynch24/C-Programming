#include <stdio.h>
#include<string.h>
void main()
{
    typedef struct pokemon
    {
        int speed;
        int attack;
        char type[90];
    }pokemon;

    pokemon pikachu={100,121,"electric"};
    pokemon charlizard={80,130,"fire"};

    typedef struct legendarypokemon
    {
        pokemon p1;
        char ability[10];
    }legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.p1.type,"psychic");
    strcpy(mewtwo.ability,"pressure");

    printf("%s\n",mewtwo.ability);
    printf("%s\n",mewtwo.p1.type);

}