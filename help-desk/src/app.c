#include "app.h"

void print(PCLIENT client)
{
    printf("name=%s\n", client->name);
    printf("name=%d\n", client->id);
    printf("priority=%c\n", client->priority);
};