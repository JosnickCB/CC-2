#include<stdexcept>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Graph{
	protected:
	map <int,vector <int> > outgoing;
	public:
	Graph(const vector <int>&startPoints ,const vector <int>&endPoints){
		if(startPoints.size()!=endPoints.size()){
		throw invalid_argument("Start/end point lists differ in length");
		}
	}
	int numOutgoing(const int nodeID)const{
		return adjacent(nodeID).size();
	}
	const vector <int>&adjacent(const int nodeID)const{
		map <int,vector <int> > :: const_iterator i = outgoing.find(nodeID);
		if(i==outgoing.end()){
			throw invalid_argument("Invalid node ID");
		}
	return i->second;
	}
};
int main(){

	return 0;
}
