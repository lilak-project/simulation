#include "LKG4VEventGenerator.h"
#include "TSystem.h"

LKG4VEventGenerator::LKG4VEventGenerator()
{
    e_error << "this is dummy class!" << std::endl;
}

LKG4VEventGenerator::LKG4VEventGenerator(TString fileName)
{
    fNumEvents = 10;
    e_error << "this is dummy class!" << std::endl;
}

LKG4VEventGenerator::~LKG4VEventGenerator()
{
}

bool LKG4VEventGenerator::ReadNextEvent()
{
    e_error << "this is dummy ReadNextEvent method!" << std::endl;
    return false;
}

bool LKG4VEventGenerator::ReadNextTrack(int &pdg, double &vx, double &vy, double &vz, double &px, double &py, double &pz, double &energy, double &kill_energy_threshold)
{
    e_error << "this is dummy ReadNextTrack method!" << std::endl;
    return false;
}
