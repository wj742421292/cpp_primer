#pragma once

#include "POINT.h"
class RECTANGLE:public POINT
{
public:
	void initRectangle(float x, float y, float w, float h) {
		initPoint(x, y);
		this->w = w;
		this->h = h;
	}
	float getH()const { return h; }
	float getW()const { return w; }
private:
	float w, h;
};

