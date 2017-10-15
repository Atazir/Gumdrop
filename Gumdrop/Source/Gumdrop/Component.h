#include "Actor.h"

class Component : public Actor
{
	/*
		This is the second level up from our actor. The component class contains reference to the actor's transform, and reference to the object itself, As such, this 
		class must inherit from base actor. Any additional components such graphics will be attached to our actor will inherit from component
	*/
};