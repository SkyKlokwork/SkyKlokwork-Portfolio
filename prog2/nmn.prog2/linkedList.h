/*
Nicholas Needham
Program 2 Linked List class
due: 4/7/21
*/
#ifndef LL
#define LL

#include "node.h"

class linkedList : protected node 
{
   public:
      void stackPush(int);
      void stackPop();
      void stackPrint();

      void enqueue(int);
      void dequeue();
      void queuePrint();
      
      linkedList();

   private:
      node *top, *current;
      node *front, *rear;
};
#endif