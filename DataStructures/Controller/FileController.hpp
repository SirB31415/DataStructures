//
//  FileController.hpp
//  DataStructures
//
//  Created by Brailow, Parker on 2/2/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Data/CrimeData.hpp"
using namespace std;
class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};

#endif /* FileController_hpp */