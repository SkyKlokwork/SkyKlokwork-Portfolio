#include "linkedList.h"
#include <iostream>
using namespace std;

//Creates and adds nodes to the list
void linkedList::addNum(int num)
{  
   node* listed = new node();
   if(head == NULL) //sets the header if there is none
   {
      head = listed;
      head->setNextPtr(NULL);
   }
   current=head;
   while(current->getNextPtr()!=NULL)
   {
      current=current->getNextPtr();
   }

   current->setNextPtr(listed);
   current = listed;
   current->setData(num);
   current->setNextPtr(NULL);
}

//Removes a number from the linked list.
void linkedList::removeNum(int num)
{
   int i = 1;
   current = head;
   if(head->getData() == num)
   {
      node* remove;
      remove = head;

      head = head->getNextPtr();
      current = head;
      delete(remove);
      cout << "Head deleted and moved" << endl;
   }
   while(current->getNextPtr()!= NULL)
   { 
      i++;
      if(current->getNextPtr()->getData() == num)
      { 

         //sets next equal to the pointer of the node to be deleted
         next = current->getNextPtr()->getNextPtr();

         //marks the node to be deleted as remove to access it easy
         node* remove;
         remove = current->getNextPtr();

         //makes the pointer of current to the node next is set to
         current->setNextPtr(next);

         //cout << next << " stored" << endl;
         //cout << current->getNextPtr() << " stored" << endl;

         //deletes the node marked for deletion
         delete(remove);

         //cout << next << " stored" << endl;

         cout << "|O| node with number " << num << " at column " << i << " deleted." << endl;
         return;
      }
        current = current->getNextPtr();
    }

   cout << "|X| " << num << " does not exist in the linked list." << endl;
}

//Tries to find a number in the linked list.
void linkedList::findNum(int num)
{
   current = head;
   int i = 1;
   while(current!=NULL)
   {
      i++;
      if(current->getData()==num)
      {
         cout << "|O| number " << num << " is in the list at column " << i << "." << endl;
         return;
      }
      current = current->getNextPtr();
   }
   cout << "|X| " << num << " is not in the list." << endl;
}

//Prints out the data from the nodes.
void linkedList::printList(){
   cout << "List {";
   current = head;
   while(current!=NULL)
   { 
      if(head == current) //tells where the head of the list is
         cout << "H|";

      if(current->getNextPtr() == NULL) //tells where the tail of the list is
         cout << "T|";

      cout << current->getData() << " "; //prints the number

      current = current->getNextPtr();
   }
   cout << "}" << endl;
}

//Constructor.
linkedList::linkedList(){
   head = NULL;
   current = NULL;
   next = NULL;
}