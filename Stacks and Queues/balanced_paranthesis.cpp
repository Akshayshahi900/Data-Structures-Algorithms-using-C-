/*Whenever we get the opening bracket we will push it into the stack. I.e ‘{‘, ’[’, ’(‘.
Whenever we get the closing bracket we will check if the stack is non-empty or not.
If the stack is empty we will return false, else if it is nonempty then we will check if the topmost element of the stack is the opposite pair of the closing bracket or not.
If it is not the opposite pair of the closing bracket then return false, else move ahead.
After we move out of the string the stack has to be empty if it is non-empty then return it as invalid else it is a valid string.*/
#include<iostream>
using namespace std;
