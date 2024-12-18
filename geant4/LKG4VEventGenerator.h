#ifndef LKG4VEVENTGENGENERATOR_HH
#define LKG4VEVENTGENGENERATOR_HH

#include "TVector3.h"
#include "LKLogger.h"
#include "TNamed.h"

class LKG4VEventGenerator : public TNamed
{
    public:
        LKG4VEventGenerator();
        LKG4VEventGenerator(TString fileName);
        virtual ~LKG4VEventGenerator();

        int GetNumEvents() const { return fNumEvents; };
        int GetNumTracks() const { return fNumEvents; };

        /// Read and initiailze next event
        virtual bool ReadNextEvent();

        /// Read next track and set pull track values
        /// @param pdg    particle idenfication number
        /// @param vx     particle vertex x
        /// @param vy     particle vertex y
        /// @param vz     particle vertex z
        /// @param px     particle momentum x
        /// @param py     particle momentum y
        /// @param pz     particle momentum z
        /// @param energy particle kinetic energy
        /// @param kill_energy_threshold    energy threshold to kill the track default is -1 and will not kill the track until geant4 kills it
        virtual bool ReadNextTrack(int &pdg, double &vx, double &vy, double &vz, double &px, double &py, double &pz, double &energy, double &kill_energy_threshold=-1)

    protected:
        int fNumEvents = 0;
        int fNumTracks = 0;
        int fCurrentTrackID = 0;
};

#endif
