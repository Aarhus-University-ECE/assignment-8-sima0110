#include "list_queue.h"


void init_queue(queue *q)
{
  // Add your init_queue
  q->front = NULL;
  q->rear = NULL;
  q->size = 0; 
}

int empty(queue *q)
{
  // Add your empty function 
  if (q->size == 0) { //checks if the the queue is empty//
    return 1;
  } else {
    return 0;
  }
}

void enqueue(queue *q, int x)
{
  // Add your enqueue function
  qnode *new_node = malloc(sizeof(qnode)); //creating a new node//
  new_node->data = x; //new_node gets the value x// 

  if (q->rear == NULL) { //if the list is empty// 
    q->rear = new_node; 
    q->rear->next = NULL; 
    q->front = new_node; 
  }
  else{ //if the list is not empty// 
    q->rear->next=new_node;
    q->rear=new_node; 
  }
  q-> size += 1; 

}

int dequeue(queue *q)
{
  // Add your dequeue function
  int frontie = q->front->data; //frontie is the value that is going to be the first in the stack// 
  q->front = q->front->next; 
  q->size -= 1; 

  if (q->size == 0){
    q->rear = NULL; 
  } 
return frontie; 
}
