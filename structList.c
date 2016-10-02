/* List of Structs
 * Alex Voitik
 * Code for Linked Lists based on code
 * from http://www.cprogramming.com/tutorial/c/lesson15.html
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct idnode {
  char *name;
  struct idnode *next;
} *idnodeptr;

idnodeptr theList;

void clearBuffer()
{   

    while(getchar() != '\n');

}

void rearAdd()
{
    theList = malloc( sizeof(struct idnode) );
    theList -> next = 0;
    char thing;
    printf("What would you like to add\n");
    clearBuffer();
    scanf("%c", &thing);
    clearBuffer();
    theList -> name = thing;
    printf("Added %c to the list", theList -> name);
    return;
}

int main()
{
    int finished = 1;
    
    while(finished == 1){
        
        char option;
        
        printf("Please Make a Selection:\n");
        printf("a. Add to the front of the list\n");
        printf("b. Add to the rear of the list\n");
        printf("c. Print the list\n");
        printf("q. Quit the program\n");
        scanf("%c", &option);
        
        switch (option) {
            case 'q' : finished = 0; break;

            case 'a' : printf("Add to the front of the list\n"); break;
                
            case 'b' : printf("Add to the rear of the list\n"); rearAdd(); break;
                
            case 'c' : printf("Print the list\n"); break;
                
            default  : printf("Not Recognized\n\n"); break;
        }
        clearBuffer();
    }
    printf("Done\n");    


    /*root = malloc( sizeof(struct node) );  
    root->next = 0;   
    root->x = 12;
    conductor = root; 
    if ( conductor != 0 ) {
        while ( conductor->next != 0)
        {
            conductor = conductor->next;
        }
    }
    conductor->next = malloc( sizeof(struct node) );  

    conductor = conductor->next; 

    if ( conductor == 0 )
    {
        printf( "Out of memory" );
        return 0;
    }
    conductor->next = 0;         
    conductor->x = 42;
    
    conductor = root;
    if ( conductor != 0 ) {
        while ( conductor->next != 0 ) {
            printf( "%d\n", conductor->x );
            conductor = conductor->next;
        }
        printf( "%d\n", conductor->x );
    }   
*/
    return 0;
}