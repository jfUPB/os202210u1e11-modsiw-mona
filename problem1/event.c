#include "event.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Event *CreateEvent(char *name)
{
    Event *event = malloc(sizeof(Event));
    char temp[sizeof(name)];
    if(strlen(name) > 15){
        char var[15];
        for (int i = 0; i < 15; i++){
            var[i] = name[i];
        }     
        sscanf(var, "%s", event -> eventName);
    }
    else{
        sscanf(name, "%s", event -> eventName);    
    }  
    event -> next = NULL;
    return event;
}

void DestroyEvent(Event *this)
{
    free(this);
}
