#include <iostream>
#include <vector>

using namespace std;

int nodes, edges;
vector<int> graph[100];

void adjcancyListPrint(vector<int> graph[], int nodes){
	cout << endl << "Adjecancy List:" << endl << endl;
	for (int i = 0; i < nodes; i++){
		cout << i << " -> ";
		for (int j = 0; j < graph[i].size(); j++)
		{
			cout << graph[i][j] << "\t"; 
		}
		cout << endl;
	}
}


int main(int argc, char const *argv[])
{
	int nodes, edges;
	cout << "No. of nodes: ";
	cin >> nodes;
	cout << "No. of edges: ";
	cin >> edges;
	int node1, node2;
	cout << "Please input " << edges << " connected nodes: " << endl;
	for (int i = 0; i < edges; ++i)
	{
		cout << i+1 << "th connected Edges : ";
		cin >> node1;
		cin >> node2;
		graph[node1].push_back(node2);
		graph[node2].push_back(node1);
	}

	adjcancyListPrint(graph, nodes);

	return 0;
}