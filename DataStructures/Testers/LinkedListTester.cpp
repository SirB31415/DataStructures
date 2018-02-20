//
//  LinkedListTester.cpp
//  DataStructures
//
//  Created by Brailow, Parker on 2/20/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#include "LinkedListTester.hpp"

void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << " Is is at thefront of the list and should be 9" << endl;
}
