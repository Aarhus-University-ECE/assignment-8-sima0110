extern "C"{
    // Add the header files required to run your main 
    #include "insertion_sort.h"
    #include "linked_list.h"
    #include "list_queue.h"
} 
    #include <assert.h>

// File for sandboxing and trying out code
int main(int argc, char **argv)
{     
   /*test insertion sort 
    int testlist[] ={6,2,5,15,12};
    linked_list* test = createLinkedList();
    for (int i = 0; i < 5; ++i)
    {
    insertFront(createNode(testlist[5-i-1]), test);
    }
    
    printLL(test);
    sort(test);
    printLL(test);
    */

    //test (A)//
    queue test;
    init_queue(&test);
    assert(empty(&test) == 1);

    //test (B)//
    int x = 5; 
    enqueue(&test, x); 
    int y = dequeue(&test); 
    assert(empty(&test) == 1 && x == y); 

    //test (C)//
    int x0 = 6; 
    int x1 = 8; 
    enqueue(&test, x0); 
    enqueue(&test, x1); 
    int y0 = dequeue(&test); 
    int y1 = dequeue(&test); 
    assert(empty(&test) == 1 && x0 == y0 && x1 == y1); 

    return 0;
}