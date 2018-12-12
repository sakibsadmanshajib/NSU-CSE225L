#include "GraphType.h"

#include "PQType.cpp"
#include "QueType.cpp"

#include <iostream>

using namespace std;

template<class VertexType>

void GraphType<VertexType>::ExtBreadthFirstSearch(VertexType startVertex, VertexType endVertex)
{
    struct NodeType
    {
        int value;
        VertexType info;
        VertexType* prev;
    }

    PQType <NodeType> pq;
    QueType <VertexType> vertexQ;

    

}