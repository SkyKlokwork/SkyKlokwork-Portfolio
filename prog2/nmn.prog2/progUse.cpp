/*
Nicholas Needham
Program 2 use file
due: 4/7/21
*/
#include <iostream>
#include <fstream>
#include "linkedList.h"
#include "array.h"

using namespace std;

int main()
{
   int temp = 0;

   ifstream inData;
   inData.open("test.txt");
   linkedList linked;
   array array;
   
   for(int i = 0; i < 10; i++)
   {
      inData >> temp;
      linked.stackPush(temp);
      linked.enqueue(temp);
      array.stackPush(temp);
      array.enqueue(temp);
   }
   inData.close();

   cout << "Queued Linked List" << endl;
   linked.queuePrint();
   linked.dequeue();
   linked.queuePrint();
   linked.enqueue(79);
   linked.queuePrint();

   cout << "Queued Array" << endl;
   array.queuePrint();
   array.dequeue();
   array.queuePrint();
   array.enqueue(63);
   array.queuePrint();

   cout << "Stacked Linked List" << endl;
   linked.stackPrint();
   linked.stackPop();
   linked.stackPrint();
   linked.stackPush(19);
   linked.stackPrint();

   cout << "Stacked Array" << endl;
   array.stackPrint();
   array.stackPop();
   array.stackPrint();
   array.stackPush(90);
   array.stackPrint();
   return 0;
}