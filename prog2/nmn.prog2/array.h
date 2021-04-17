/*
Nicholas Needham
Program 2 Array class
due: 4/7/21
*/
#ifndef ARRAY_CLASS
#define ARRAY_CLASS

#include "node.h"

class array : protected node 
{
   public:
      void stackPush(int);
      void stackPop();
      void stackPrint();

      void enqueue(int);
      void dequeue();
      void queuePrint();

      array();

   private:
      int Stack[20], Queue[20];
      int top, rear;
};
#endif