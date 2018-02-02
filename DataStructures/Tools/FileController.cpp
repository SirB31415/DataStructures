//
//  FileController.cpp
//  DataStructures
//
//  Created by Brailow, Parker on 2/2/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}