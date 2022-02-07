#include "event.h"
#include <string.h>
#include <stdlib.h>

Event *CreateEvent(char *name)
{
    Event *event = malloc(sizeof(Event));
    sscanf(name,"%s",event->eventName);
    //siguiente evento NULL

    return event;
}

void DestroyEvent(Event *this)
{
    free(this);
}
