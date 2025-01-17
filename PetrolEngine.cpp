#include "PetrolEngine.hpp"
#include "InvalidGear.hpp"
#include <iostream>

PetrolEngine::PetrolEngine(int power, float capacity, int gears)
    : power_(power)
    , capacity_(capacity)
    , gears_(gears)
    , currentGear_(0)
{
    std::cout << __FUNCTION__ << std::endl;
}

PetrolEngine::~PetrolEngine()
{
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolEngine::changeGear(int gear)
{
    // TODO: Add checking if gear is between -1 and gears_
    // -1 is for REAR
    // 0 is for NEUTRAL
    if (isGearValid(gear))
    {
	try
	{
	    if (currentGear_ > 0 && gear == -1)
	    {
		throw InvalidGear();
	    }
	    else
	    {
		currentGear_ = gear;
		std::cout << "Gear has been changed to: " << currentGear_ << std::endl;
	    }

	}
	catch (const InvalidGear& e)
	{
	    std::cout << "Bad function call." << e.what() << std::endl;
	}
    	std::cout << __FUNCTION__ << std::endl;
    }
    else
    {
	std::cout<<"This gear is not valid and hasn't changed." <<std::endl;
    }
}

int PetrolEngine::getGear()
{
    return currentGear_;
}

bool PetrolEngine::isGearValid(int gear)
{
    return (gear <= gears_ && gear >= -1) ? true : false;
}
