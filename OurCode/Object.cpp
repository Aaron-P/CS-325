#include <iostream>
#include "Object.h"

using namespace std;

	//Default Constructor
	Object::Object()
	{
		speed = 0;
		maxSpeed = 0;
		xcoord = 0;
		ycoord = 0;
		direction = 0;
		height = 0;
		width = 0;
		alive = 0;
		isKillable = 0;
	}

	//Initializing Constructor
	Object::Object(int dSpeed, double dDirection, double dX, double dY, 
		bool dKillable, int dmaxSpeed, int dHeight, int dWeigth, bool dAlive)
	{
		speed = dSpeed;
		maxSpeed = dmaxSpeed;
		xcoord = dX;
		ycoord = dY;
		direction = dDirection;
		height = dHeight;
		width = dWeigth;
		alive = dAlive;
		isKillable = dKillable;
	}

	//Object destructor
	Object::~Object()
	{
		Die();
	}

	//Returns the speed of the Object
	int Object::getSpeed()
	{
		return speed;
	}

	//Sets the speed of the Object
	void Object::setSpeed(int newSpeed)
	{
		speed = newSpeed;
	}

	//Gets the X coordinate of the object
	double Object::getX()
	{
		return xcoord;
	}

	//Sets the X coordinate for the location of the object.
	void Object::setX(double newX)
	{
		xcoord = newX;
	}

	//Gets the Y coordinate of the object.
	double Object::getY()
	{
		return ycoord;
	}

	//Sets the Y coordinate for the location of the object
	void Object::setY(double newY)
	{
		ycoord = newY;
	}

	//Gets the direction of the Object
	double Object::getDirection()
	{
		return direction;
	}

	//Sets the direction of the Object
	void Object::setDirection(double newDirection)
	{
		direction = newDirection;
	}

	void Object::Move()
	{

	}

	void Object::Shoot()
	{
		
	}

	void Object::Die()
	{
		if(isKillable == true)
		{
			delete this;
		}
	}