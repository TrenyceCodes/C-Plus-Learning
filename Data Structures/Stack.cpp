#include <iostream>
#include "Stack.hpp"

void Stack::push(int elements) {
   //we need to check for stack size and check for current elements
    // if the stack has a maxSize > 0 and there are already elements in items, we append to the end of the array
   //else if maxSize == 0(considering there are no elements in item), then we append to array
   
   if (maxSize > 0) {
    //since maxSize is > 0
    std::cout << "since the stack size is more than 0, currently Stack size is currently " << maxSize << std::endl;
    maxSize = elements;
    int* newArray = (int *)realloc(items, sizeof(int) * maxSize);

      for (int i = 0; i < maxSize; i++) {
         newArray[i] = i + 1;
      }

      for (int i = maxSize; i >= 0; i--) {
         std::cout << "Stack size is currently " << maxSize << " with " << newArray[i] << " items " << i << " " << std::endl;
      }
   } else if (maxSize == 0) {
    std::cout << "Stack size is currently " << maxSize << std::endl;
    std::cout << "Stack size is currently " << maxSize << std::endl;
    items = (int *)malloc(sizeof(int) * elements);
    maxSize = elements;

      for (int i = 0; i < maxSize; i++) {
         items[i] = i + 1;
      }
   
      for (int i = maxSize; i >= 0; i--) {
         std::cout << "Stack size is currently " << maxSize << " with " << items[i] << " items " << i << " " << std::endl;
      }
   } else {
      std::cout << "Stack size undetermined" << std::endl;
   }
}

void Stack::peek() {
   topNumber = items[maxSize-1];

   if (maxSize > 0) {
      std::cout << "The top number is: " << topNumber << std::endl;
   } else {
      std::cout << "Stack is empty. No top number" << std::endl;
   }
}

void Stack::pop() {
   if (maxSize > 0) {
      maxSize--;

      //create a new array without the top number. So we need to realloc
      int* newArray = (int *)realloc(items, sizeof(int) * maxSize);
      for (int i = 0; i < maxSize; i++) {
         newArray[i] = i + 1;
      }

      //print out items new array
      for (int i = 0; i < maxSize; i++) {
         std::cout << "here is the new array " << newArray[i] << " with position: " << i << " with top number: " << newArray[maxSize-1] << std::endl;
      }
   } else {
      std::cout << "Stack is empty. No number(s) to pop" << std::endl;
   }
}

void Stack::isEmpty() {
   if (maxSize > 0) {
      std::cout << "False: Stack is not empty" << std::endl;
   } else {
      std::cout << "True: Stack is empty" << std::endl;
   }
}

void Stack::getStackSize() {
   if (maxSize > 0) {
      std::cout << "Stack size: " << maxSize << std::endl;
   } else {
      std::cout << "Stack size: " << maxSize << std::endl;
   }
}