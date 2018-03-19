//
//  Graph.hpp
//  DataStructures
//
//  Created by Brailow, Parker on 3/19/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraveral(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    void addVertex(const Type& value);
    void addEdge(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    void removeEdge(int source, int target);
    void removeEdgeCost(int source, int target);
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target)const;
    std::set<int> neighbors(int vertex) const;
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversa(Graph<Type> & graph, int vertex);
}

#endif /* Graph_hpp */
