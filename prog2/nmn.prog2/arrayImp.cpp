/*
Nicholas Needham
Program 2 Array Implementation file
due: 4/7/21
*/
#include "array.h"
#include <iostream>

using namespace std;

// ||STACKS||
//pushes the data into the top of the stack
void array::stackPush(int num)
{
   Stack[top] = num;
   top--;
}
//pops off the top value of the stack
void array::stackPop()
{
   top++;
   Stack[top] = 0;
   cout << " Top popped" << endl;
}
//prints the stack
void array::stackPrint()
{
   for(int i = 1; i <= 10; i++)
      cout << " " << Stack[i];
   cout << endl;
}

// ||QUEUE||
//enqueue the data to the rear of the array
void array::enqueue(int num)
{
   Queue[rear] = num;
   rear++;
}
//dequeue the "front" of the array
void array::dequeue()
{
   for(int i = 0; i < rear; i++)
   {
      Queue[i] = Queue[i+1]; // moves the data down one slot in the queue
   }
   rear--;
   cout << " Front dequeued" << endl;
}
//prints the queue
void array::queuePrint()
{
   for(int i = 0; i < rear; i++)
      cout << " " << Queue[i];
   cout << endl;
}
//constructor
array::array()
{
   top = 10;
   rear = 0;
}