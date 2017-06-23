class Rectangle{
public:
	Rectangle();
	Rectangle(double width, double height);
	double getWidth();
	double getHeight();
	void setWidth(double width);
	void setHeight(double height);
	double getArea();//返回矩形面积
	double getPerimeter();//返回矩形周长

private:
	double Width;
	double Height;
};