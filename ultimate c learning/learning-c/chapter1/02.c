#include<stdio.h>

int main()
{
   int a;
   a = 12;
   printf("the output is %d \n", a);
   //also you can do 
   int _a = 13;
   printf("the output again is %d", _a);
   //types of data types other than int 
   float b = 3.77;//used to have decimal no's
   const c = 45;//used to make a const which can't be changed no matter what
   char b = "ansh is a good boy";
   // this is to store a sentence 
   /* (so every type of container uses memory in ram when its, used different types of containers use different size of memory)
   Size of int : 4 bytes
   Size of char : 1 byte 
   size of float: 4 bytes
   and etc
   and you can also use sizeof operator to know the size
   */
    return 0;
    //the rules of naming variable is same as c++
