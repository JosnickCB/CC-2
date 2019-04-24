classPoint{
	private:
	int x,y;
	public:
	Point(int u,int v):x(u),y(v){}
	int getX(){returnx;}
	int getY(){returny;}
	void doubleVal(){
		x*=2;
		y*=2;
	}
};

int main(){
	Point myPoint(5,3)
	myPoint.doubleVal();
	cout<<myPoint.getX()<<""<<myPoint.getY()<<"\n";
	return 0;
}
