//what is the B.S.F (Breath first Search ) traverl the immidate neighoubors of the graph
// Phala sabsa pass wala vertices pa travel kernaga and mark the vertices visited out
#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
void bfs{
    
    queue<int> q;
    while(q.size() > 0){
        int u = pop() //pop the element of the queue eg => push the one
        cout<<u<<endl;  //print the u    eg => print value of the 0
        for(for all neighbour of u){     //check the all neighbour visited or not 
            if(visted[v]= true ){
                visted[v] = true;  //mark visted on the 
                q.push(v); //push in the queue
            }
        }
    }

};

int main(){


    return 0;
}



#include <iostream>
#include <vector>
#include <list>
#include <queue>
class graph{
    int V;  //vertix
    list<int> * l;  //crate the dynamic list to store value of vertice

    public:
    graph(int val){
        this V -> = V;
        l = new list<int>[V];  //create the new list of V size

    }
    void addEdge(int u , int v){
        l[u].push_vack[v];
        l[v]l->push_back[u];
    }

    //BFS travel
    void BFS(){
        queue<int>q;
        vector<int> visited(v,false);  //mark the visited 

        q.push(0);           //push the source node 
        visited[0] = true;   //mark true as visited 

        while(q.size()>0){
            int src = q.pop();
            cout<<src<<" ";

            for(int src: l[dest]){
                if(! visited[dest]){
                    visited[v]= true;
                    q.push(v);
                }
            }
            
        }
        cout<<endl;
    }

}
int main(){

    graph g(5);

    g.addEdge(3,5);
    g.addEdge(4,5);



    return 0;


}



//create the DFS traversal 
