//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Brailow, Parker on 3/23/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "/Users/pbra1660/Documents/Cplusplus/DataStructures/DataStructures/Model/Structures/Nonlinear/Graph.hpp"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};

#endif /* GraphTester_hpp */
