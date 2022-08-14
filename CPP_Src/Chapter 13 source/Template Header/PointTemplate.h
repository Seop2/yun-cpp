#ifndef __POINT_TEMPLATE_H_
#define __POINT_TEMPLATE_H_

template <typename T>
class Point 
{
private:
	T xpos, ypos;
public:
	Point(T x=0, T y=0);
	void ShowPosition() const;
};

#endif