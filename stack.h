
#ifndef stack_h
#define stack_h
#include "node.h"

class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
          

            // Left missing for exercises…
            //1.connect to the previoUs top
              new_node->set_next(top);
            //2. change top
              top=new_node;
            //3. change size
              size++;

   }
   else cout<<"Not enough memory. "<<endl;
         // Left missing for exercises…
    
}

int Stack::pop(){
     NodePtr t=top;
    if(t!=NULL){
        int value;
        value=t->get_value();
    //  move top to the next one
        top=top->get_next();
    //  decrease the size
        --size;
        delete t;
        return value;
    }
    cout <<"Empty stack"<<endl;
    return 0;
	//be careful of the empty stack!!!
    }

Stack::Stack(){
    //initialize stack
    top=NULL;
    size=0;
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    cout<<"Clear the stack"<<endl;
 
    while(size>0)   pop();
    
    
    
}


#endif
