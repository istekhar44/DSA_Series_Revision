

#include <iostream>
#include <list>
#include <vector>
using namespace std;
class graph{
    int V;  //vertices
    list <int> * l; // create  the dynamic list because the no idea how many vertice inthe graph
    public:

    graph(int V){
    this -> V= V;         //initlize the vertices
    l =new list<int> [V];   // initlize the list of size vertices
    }

    void addEdge(int u ,int v  ){  //this are the two values
        l[u].push_back(v);  //at index u push back value v
        l[v].push_back(u);  //at index v push back value u
    }

    //print the graph
    void printAdjancyList(){
        for(int i = 0 ; i< V ; i++){
            cout<<i<<" : ";
            for(int neigh : l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }



};
int main(){

    graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.printAdjancyList();

    return 0 ;

}


