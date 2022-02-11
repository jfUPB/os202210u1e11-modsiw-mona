#include "event.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Event *CreateEvent(char *name)
{
    Event *event = malloc(sizeof(Event));
    char var1[sizeof(name)];
    if(strlen(name) > 15){
        char temp[15];
        for (int i =0; i <15; i++){
            temp[i] = name[i];
        }
        sscanf(name, "%s",event ->eventName);
    }
    else {
        sscanf(name, "%s",event ->eventName);
    }

    event ->next=NULL;
    return event;
}

void DestroyEvent(Event *this)
{
    free(this);
}
