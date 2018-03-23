//
//  Controller.hpp
//  DataStructures
//
//  Created by Brailow, Parker on 2/2/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structures/Array.hpp"
#include "../Testers/RecursionTester.hpp"
#include "../Testers/GraphTester.hpp"

class Controller
{
private:
    void testArray();
    void findMaxAndMin();
    
public:
    void start();
};

#endif /* Controller_hpp */

