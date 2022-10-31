#include "insertion_sort.h"
#include "linked_list.h"

void sort(linked_list *llPtr)
{
 // Add your sort function here
node_t *temp = NULL; 
node_t *temp_next = NULL; 
node_t *cur = llPtr->head->next; 
node_t *prev = llPtr->head;

if(llPtr->head == NULL){ //checks if the list is empty, as empty lists can't be sorted//
	printf("The list is empty");
	return;
}  

while(prev->next != NULL){ //runs through all the list//
    if(cur->data < prev->data){ //compares the values, if the current node is smaller than the previous one, cur changes position//
    temp = cur; 
    temp_next = cur->next; 
    prev->next = cur->next;
    
node_t *position =llPtr->head;
    while (position->next->data < temp->data) {
        position = position->next;
    }
    if (llPtr->head == position) {
        temp->next=llPtr->head;
        llPtr->head = temp;
    } else {
        temp->next = position->next;
        position->next = temp;
    }
 }
//prev and cur move to the right positions// 
 prev = cur;
 cur = prev->next;
}
}

