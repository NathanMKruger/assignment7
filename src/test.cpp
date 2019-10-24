//  Joseph Castaner, Nathan Kruger
//
//  test.cpp
//
//  Tests to prove your code works.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#include "Queue.h"
#include "Stack.h"
#include "catch.h"
#include <string>

using namespace std;
using namespace csi281;

TEST_CASE( "Queue Tests", "[queue]" ) {
    SECTION( "Queue w/ int tests" ) {
        Queue<int> q1 = Queue<int>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE

		q1.push(20);
		q1.push(20);
		q1.push(30);
		q1.push(40);
		q1.push(20);
		cout << "Current first element: " << q1.peek() << endl;
		cout << "The queue has: " << q1.getCount() << " items in it." << endl;

		cout << "Deleting the first element in the queue!" << endl;
		q1.pop();
		cout << "Current first element: " << q1.peek() << endl;
		cout << "The queue has: " << q1.getCount() << " items in it." << endl;

		cout << "Deleting all 20s from the queue!" << endl;
		q1.remove(20);
		cout << "Current first element: " << q1.peek() << endl;
		cout << "The queue has: " << q1.getCount() << " items in it." << endl << endl;
    }
    
    SECTION( "Queue w/ string tests" ) {
        Queue<string> q2 = Queue<string>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE

		q2.push("Hello");
		q2.push("Hello");
		q2.push("Hi");
		q2.push("Goodbye");
		q2.push("Hello");
		cout << "Current first element: " << q2.peek() << endl;
		cout << "The queue has: " << q2.getCount() << " items in it." << endl;

		cout << "Deleting the first element in the queue!" << endl;
		q2.pop();
		cout << "Current first element: " << q2.peek() << endl;
		cout << "The queue has: " << q2.getCount() << " items in it." << endl;

		cout << "Deleting all 'Hello's from the queue!" << endl;
		q2.remove("Hello");
		cout << "Current first element: " << q2.peek() << endl;
		cout << "The queue has: " << q2.getCount() << " items in it." << endl << endl;
    }
}

TEST_CASE( "Stack Tests", "[stack]" ) {
    SECTION( "Stack w/ int tests" ) {
        Stack<int> s1 = Stack<int>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE

		s1.push(20);
		s1.push(20);
		s1.push(30);
		s1.push(40);
		s1.push(20);
		cout << "Current first element: " << s1.peek() << endl;
		cout << "The stack has: " << s1.getCount() << " items in it." << endl;

		cout << "Deleting the first element in the stack!" << endl;
		s1.pop();
		cout << "Current first element: " << s1.peek() << endl;
		cout << "The stack has: " << s1.getCount() << " items in it." << endl;

		cout << "Deleting all 20s from the stack!" << endl;
		s1.remove(20);
		cout << "Current first element: " << s1.peek() << endl;
		cout << "The stack has: " << s1.getCount() << " items in it." << endl << endl;
    }
    
    SECTION( "Stack w/ string tests" ) {
        Stack<string> s2 = Stack<string>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE

		s2.push("Hello");
		s2.push("Hello");
		s2.push("Hi");
		s2.push("Goodbye");
		s2.push("Hello");
		cout << "Current first element: " << s2.peek() << endl;
		cout << "The stack has: " << s2.getCount() << " items in it." << endl;

		cout << "Deleting the first element in the stack!" << endl;
		s2.pop();
		cout << "Current first element: " << s2.peek() << endl;
		cout << "The stack has: " << s2.getCount() << " items in it." << endl;

		cout << "Deleting all 'Hello's from the stack!" << endl;
		s2.remove("Hello");
		cout << "Current first element: " << s2.peek() << endl;
		cout << "The stack has: " << s2.getCount() << " items in it." << endl << endl;
    }
}

