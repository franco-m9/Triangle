class Triangle						// declaring class
{
public:							// member functions in public for general use 

	Triangle(int s,char b='#', char f='*');		// chars are parameters
	int GetSize();					// functions which returns SIZE
	int Perimeter();				// function which returns Perimeter
	double Area();					// function which return's Area
	void Grow();					// function which sets SIZE+1
	void Shrink();					// function which sets SIZE-1	
	void SetBorder(char);				// function for user to set border char
	void SetFill(char);				// function for user to set fill char	
	void Draw();					// function which draws triangle	
	void Summary();					// function which displays some info
private:						// variables in private sector
	int SIZE;
	char border, fill;
};
	
