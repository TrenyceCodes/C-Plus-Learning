#ifndef STACK_HPP
#define STACK_HPP
/*
* Stack is a data structure that deals with First in, Last Out
*/
class Stack {
    private:
        int maxSize = 0; //stack size
        int topNumber = 0; //stack top number that will be popped out. This number is the one on the top or the end of the array
        int* items; //items in stack array, dynamic array to grow it easier

    public:
        //methods, PUSH, POP, PEEK, SIZE, ISEMPTY
    

        //PUSH method - to push method into stack
        // push element pointer into the items array, parameter would be elements integer
        void push(int elements);

        // POP method - to pop the top number from the array, returning the top number
        void pop();

        // PEEK method - returns the top element on the stack
        void peek();
        
        //ISEMPTY method - checks if the stack is empty
        void isEmpty();

        // GET stack size - finds the number of elements in stack
        void getStackSize();
};

#endif //STACK_HPP