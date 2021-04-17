/*
Nicholas Needham
Program 2 Node class
due: 4/7/21
*/
#ifndef NODE
#define NODE
class node{
    public:
        void setNextPtr(node*);
        node* getNextPtr();
        void setData(int);
        int getData();
        node();
        
    private:
        node *ptr;
        int intData;
};
#endif