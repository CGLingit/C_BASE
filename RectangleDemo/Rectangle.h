class Rectangle{
public:
	Rectangle();
	Rectangle(double width, double height);
	double getWidth();
	double getHeight();
	void setWidth(double width);
	void setHeight(double height);
	double getArea();//���ؾ������
	double getPerimeter();//���ؾ����ܳ�

private:
	double Width;
	double Height;
};