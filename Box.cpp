#include "Box.h"

// Implement setters and getters

void Box::setLength(int l) {

	length = l;
}

void Box::setWidth(int w) {

	width = w;
}

void Box::setHeight(int h) {

	height = h;
}

int Box::getLength(void) {

	return length;
}

int Box::getWidth(void) {

	return width;
}

int Box::getHeight(void) {

	return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {

	return length * width * height;
}
