#include "GraphType.cpp"
#include <iostream>

using namespace std;

int main()
{
    GraphType <string> graph;

    graph.AddVertex("B");
    graph.AddVertex("A");
    graph.AddEdge("B", "A", 1);
    graph.AddEdge("A", "B", 1);

    graph.AddVertex("C");
    graph.AddEdge("A", "C", 1);

    graph.AddVertex("D");
    graph.AddEdge("A", "D", 1);
    graph.AddEdge("D", "A", 1);

    graph.AddVertex("E");
    graph.AddEdge("D", "E", 1);

    graph.AddVertex("G");
    graph.AddEdge("D", "G", 1);

    graph.AddVertex("F");
    graph.AddEdge("G", "F", 1);

    graph.AddVertex("H");
    graph.AddEdge("F", "H", 1);

    graph.AddEdge("H", "E", 1);

    int temp = graph.OutDegree("D");

    cout << temp << endl;

    bool f = graph.FoundEdge("A", "D");

    if(f)
        cout << "There is an edge." << endl;
    else
        cout << "There is no edge." << endl;

    f = graph.FoundEdge("B", "D");

    if(f)
        cout << "There is an edge." << endl;
    else
        cout << "There is no edge." << endl;

    graph.DepthFirstSearch("B", "E");

    graph.DepthFirstSearch("E", "B");

    graph.BreadthFirstSearch("B", "E");

    graph.BreadthFirstSearch("E", "B");

    return 0;
}
