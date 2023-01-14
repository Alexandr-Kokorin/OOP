#include <iostream>
#include "Vector3.h"

Vector3::Vector3() {
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator +(Vector3 vector3) {
	return Vector3(x + vector3.x, y + vector3.y, z + vector3.z);
}

Vector3 Vector3::operator -(Vector3 vector3) {
	return Vector3(x - vector3.x, y - vector3.y, z - vector3.z);
}

float Vector3::operator *(Vector3 vector3) {
	return (x * vector3.x + y * vector3.y + z * vector3.z);
}

float Vector3::getLength() {
	return sqrtf(x * x + y * y + z * z);
}

float Vector3::getCos(Vector3 vector3) {
	return (x * vector3.x + y * vector3.y + z * vector3.z) / (getLength() * vector3.getLength());
}

void Vector3::print() {
	std::cout << "Vector3{" << x << ", " << y << ", " << z << "}" << std::endl;
}