/* Main file of the first challenge "ContainsDuplicate" of Arrays_Hashing
 *
 * Resume/Objective:
 * Given an integer array nums, return true if any value appears at least
 * twice in the array, and return false if every element is distinct.
 *
 * Notes/Learning:
 * << new operator in c++ called overload when used with streams
 * gets the information (stream or strings) to the variable
 * (stream or string) that is pointing
 *
 * std::cout the '::' operator is called a scope resolution operator, it tells
 * us where cut is being declared.
 *
 * static cast<variable type> safe cast better than c cast
 * only convert if you have a rule version of conversion, protection!!
 *
 * << endl new line and flush the stream
 *
 * operator ',' is used when performing and execution and given a variable also
 * used in an execution
 * for example (cin >> input , input) firstly fills input with the input from
 * the standard input stream and the uses input to do whatever is the variable
 * there for
 *
 * In C we use pointers to simulate call by reference in C++ we have direct
 * call by reference for example int& x, so no stars needed. Look in the
 * following example of the same function in C and C++.
 *
 * C: So you would use swap(&m, &n)
 * void swap(int* i,int* j){
 *  int temp = *i;
 *  *i = *j;
 *  *j = temp;
 * }
 * C++: So when we use the & after the type it means it is a reference variable
 * inline void swap(int& i,int& j){
 * int temp = i;
 * i = j;
 * j = temp;
 * }
 *
 * in C++ overloading exists, what this means is that we can have two functions
 * with the same name, but differ in their input parameters. So the following
 * would not give an error:
 *
 * inline void swap(int& i, int& j);
 *
 * inline void swap(double& i,double& j);
 *
 * overloading involves signatures, meaning discriminating the signatures (the
 * types and number of arguments passed to the function).
 *
 * template<class T> template for a class with the identifier T that will later
 * be changed to a type, this helps to swap to exist only once
 * template
 *
 *
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

//global consts
const int sides = 6;
const vector<int> aux = {};

//inlines4
template<class T> inline string containsDuplicate(T input) {
  return input == '1' ? "TRUE" : "FALSE";
}

//main function
int main() {
    int input;
    cout <<
         containsDuplicate<char>((cin >> input , input))
    << endl;
    return 0;
}

