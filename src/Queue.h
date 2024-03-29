//  Joseph Castaner, Nathan Kruger
//
//  Queue.h
//
//  This file defines a Queue class.
//  You SHOULD modify this file.
//  You may not add any instance variables to this class.
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

#ifndef queue_hpp
#define queue_hpp

#include "SequentialCollection.h"

using namespace std;

namespace csi281 {
    template
    <typename T>
    class Queue : public SequentialCollection<T> {
    public:
        // YOUR CODE HERE
        //using member functions from the reference for <list>
        //cplusplus.com/reference/list/list
        void push(const T &item)
        {
            backingStore.push_back(item); //puts new item at the end of the list
        }
        T pop()
        {
			backingStore.pop_front(); //deletes 1st item in list. Goes along with FIFO model
			return backingStore.front();
        }
        T &peek()
        {
            return backingStore.front(); //returns the value at the beginning
        }
    protected:
        using SequentialCollection<T>::backingStore;
    };
}

#endif /* queue_hpp */
