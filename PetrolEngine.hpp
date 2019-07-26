#pragma once

class PetrolEngine
{
public:
    PetrolEngine(int power, float capacity, int gears=6);
    ~PetrolEngine();

    void changeGear(int gear);
    int getGear();
    bool isGearValid(int gear);

    int power_;         // in HP
    float capacity_;    // in ccm
    int gears_;
    int currentGear_;
};
