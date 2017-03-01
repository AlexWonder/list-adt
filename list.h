#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;
class List
{
    private:
	    class Node;  
	    
	    Node* frontPtr = nullptr;
	    int num_elms = 0;

    public:
	  
      void insert(int num, int k);
      
      //more functions

};

#endif
