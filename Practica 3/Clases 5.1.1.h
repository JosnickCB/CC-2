#include "Clases 3.cpp"
class Polygon{
	protected:
		static int numPolygons;
		Point Arraypoints;
	public:
		Polygon(const PointArray&pa);
		Polygon(const Pointpoints[],const int numPoints);
		virtual double area()const=0;
		static int getNumPolygons(){return numPolygons;}
		int getNumSides()const{return points.getSize();}
		const PointArray *getPoints()const{return&points;}
		~Polygon(){--numPolygons;}
};
