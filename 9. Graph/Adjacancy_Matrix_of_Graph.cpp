#include <iostream>

using namespace std;

int nodes, edges;

void adjcancyMatrixPrint(int adjMat[100][100]){
	cout << endl << "Adjecancy Matrix:" << endl << endl;
	for (int i = 0; i < edges; ++i){
		cout << i << " | ";
		for (int j = 0; j < edges; ++j)
		{
			cout << adjMat[i][j] << "\t"; 
		}
		cout << endl;
	}
}


int main(){
	int nodes, edges;
	cout << "No. of nodes: ";
	cin >> nodes;
	cout << "No. of edges: ";
	cin >> edges;
	int adjMat[100][100];
	int node1, node2;
	cout << "Please input " << edges << " connected nodes: " << endl;
	for(int i = 0; i < edges; i++){
		cout << i+1 << "th connected Edges : ";
		cin >> node1;
		cin >> node2;
		adjMat[node1][node2] = 1;
		adjMat[node2][node1] = 1;
	}

	adjcancyMatrixPrint(adjMat);
	return 0;
}