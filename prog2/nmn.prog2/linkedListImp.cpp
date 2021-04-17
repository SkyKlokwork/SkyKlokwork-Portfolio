/*
Nicholas Needham
Program 2 Linked List Implementation file
due: 4/7/21
*/
#include "linkedList.h"
#include <iostream>
#include <iomanip>

using namespace std;

// ||STACKS||
//pushes the data to the top of the stack the 
void linkedList::stackPush(int num)
{
   node* Node = new node;
   Node->setData(num);
   Node->setNextPtr(this->top);
   this->top = Node;
   //makes top always point to the newest node
}
//pops the top of the stack off
void linkedList::stackPop()
{
   current = this->top;
   node* remove;
   remove = current;
   this->top = current->getNextPtr();
   delete remove;
   cout << " Top popped" << endl;
}
//prints out the stack
void linkedList::stackPrint()
{
   current = this->top;
   while(current != NULL)
   {
      cout << " " << current->getData();
      current = current->getNextPtr();
   }
   cout << endl;
}

// ||QUEUES||
//enqueues the data to the front of the list
void linkedList::enqueue(int num)
{
   node* Node = new node;
   if(this->rear == NULL) //checks to see if rear points to a node
      this->rear = Node;
   Node->setData(num);
   front->setNextPtr(Node); //points current node to new node
   front = Node; //makes new node the front
}
//dequeues the front value of the list
void linkedList::dequeue()
{
   node* remove;
   remove = this->rear;
   this->rear = remove->getNextPtr();
   delete remove;
   cout << " Front dequeued" << endl;
}
//prints the list
void linkedList::queuePrint()
{
   node* next = this->rear;
   while(next != NULL)
   {
      cout << " " << next->getData();
      next = next->getNextPtr();
   }
   cout << endl;
}
//constructor
linkedList::linkedList()
{
   this->top = NULL;
   this->rear = NULL;
}