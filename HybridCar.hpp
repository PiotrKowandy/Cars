#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"
#include"ElectricCar.hpp"
#include"PetrolCar.hpp"

class HybridCar : public ElectricCar, public PetrolCar
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar();

    PetrolEngine * changeEngine (int,float, int);
    ElectricEngine * changeEngine(int,int);
    void gettypeCar();
};

