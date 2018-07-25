#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct People // type definition
{
    int age; // member variable
    char name[ 10 ];
    People* next;
};

People* headNode = NULL;

void PrintPeople(People* p) // member function
{
    People* current = p;
    while( current != NULL )
    {
        printf( "%s : %i\r\n", current->name, current->age );
        current = current->next;
    }
}

People* CreatePeople()
{
    People* p = new People;
    p->next = NULL;
    return p;
}

void DeletePeople( People* p )
{
    People* current = p;
    while( current != NULL )
    {
        People* next = current->next;
        delete current;
        current = next;
    }
}

void SetPeople( People* p, int age_, const char* name_ )
{
    p->age = age_;
    strcpy( p->name, name_ );
}

void Insert( People* currentNode, People* newNode )
{
    People* prevNext = currentNode->next;
    currentNode->next = newNode; // (1)
    newNode->next = prevNext; // (2)
}

void main()
{
    headNode = CreatePeople();
    SetPeople( headNode, 1, "Head" );
    People* p = CreatePeople();
    SetPeople( p, 2, "Hello" );
    Insert( headNode, p );

    p = CreatePeople();
    SetPeople( p, 3, "World" );
    Insert( headNode, p );

    PrintPeople( headNode );

    DeletePeople( headNode );
}
