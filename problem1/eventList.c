#include "eventList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

EventList *CreateEventList(void)
{
    EventList *eventList = malloc(sizeof(EventList));
    eventList -> head = NULL;
    eventList -> last = NULL;
    eventList -> isEmpty = 0;
    return eventList;
}

void DestroyEventList(EventList *this)
{

    free(this);
}

Event *SearchEvent(EventList *this, char *name)
{

    return NULL;
}

void AddEvent(EventList *this, Event *event)
{
    if(this->isEmpty !='0'){
        this -> last-> next = event; 
        this -> last = event;
    }
    else{
        this -> head = event;
        this -> last = event;
        this -> isEmpty = 1;
    }
}

void RemoveEvent(EventList *this, char *name)
{
    Event *temporal = this -> head;
    if (this -> isEmpty!=0)
    {
        while(temporal! = NULL ){
        if( *(this -> head -> eventName+2) == *(name+2)){
            this -> head = this -> head -> next;
            break;
        }
        else if ( *(temporal -> next -> eventName +2) == *(name+2)){
            temporal -> next = temporal -> next -> next;
            break;
        }
        temporal=temporal -> next;
    }
    if(this -> head = NULL){
        this -> isEmpty=0;
    }
    } else 
{
    return;
}
        
}

void ListEvents(EventList *this)
{
    // imprime esto si la lista está vacía
    printf("empty\n");
}
