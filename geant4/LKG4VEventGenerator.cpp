#include "LKG4VEventGenerator.h"
#include "TSystem.h"

LKG4VEventGenerator::LKG4VEventGenerator()
: TNamed("LKG4VEventGenerator","");
{
    lk_error << "this is dummy class!" << endl;
}

LKG4VEventGenerator::LKG4VEventGenerator(TString fileName)
: TNamed("LKG4VEventGenerator",fileName);
{
    lk_error << "this is dummy class!" << endl;
}

LKG4VEventGenerator::~LKG4VEventGenerator()
{
}

bool LKG4VEventGenerator::ReadNextEvent(double &vx, double &vy, double &vz)
{
    lk_error << "this is dummy class method!" << endl;
    return false;
}

bool LKG4VEventGenerator::ReadNextTrack(int &pdg, double &vx, double &vy, double &vz, double &px, double &py, double &pz, double &energy, double &kill_energy_threshold)
{
    lk_error << "this is dummy class method!" << endl;
    return false;
}
