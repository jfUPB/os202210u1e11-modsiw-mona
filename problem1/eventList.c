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
    Event *evento = this->head;
    if (this -> isEmpty == 0)
    {
        return NULL;
    }
    else
    {
        while (evento != NULL)
        {
            if (*(evento -> eventName + 2) == *(name + 2) && *(evento -> eventName + 3) == *(name + 3))
            {
                return evento;
            }

            evento = evento -> next;
        }
    }

    return NULL;
}

void AddEvent(EventList *this, Event *event)
{
    Event *t = this -> head;

    if(this -> isEmpty !=0){

        while (t != NULL)
        {
            if (*(t -> eventName + 2) == *(event -> eventName +2) && *(t -> eventName +3) == *(event -> eventName +3))
            {   
                return;
            }
            t=t->next;
        }
        this -> last -> next = event;
        this -> last = event;
    }
    else
    {
        this->head = event;
        this->last = event;
        this->isEmpty = 1;
    }
}

void RemoveEvent(EventList *this, char *name)
{
    Event *temporal = this -> head;
    if (this -> isEmpty!=0){
        while(temporal!= NULL){
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
        if(this -> head == NULL){
            this -> isEmpty=0;
        }
    } 
    else {
        return;
    }
        
}

void ListEvents(EventList *this)
{
    Event *e = this -> head;

        if (this -> isEmpty == 0)
            printf("empty\n");
        else
        {
            while (e!= NULL)
            {
                printf("%s\n", e -> eventName); 
                e = e -> next;
            }
        }
}
