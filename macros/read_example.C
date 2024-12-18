void read_example()
{
    auto fileName = "exampl.root";
    auto eventGenerator = new LKG4VEventGenerator(fileName);
    auto numEvents = eventGenerator -> GetNumEvents();

    int pdg;
    double vx, vy, vz, px, py, pz, energy, kill_energy_threshold;

    if (numEvents>100) numEvents = 100; 
    for (auto iEvent=0; iEvent<numEvents; ++iEvent)
    {
        eventGenerator -> ReadNextEvent();
        while (eventGenerator -> ReadNextTrack(pdg, vx, vy, vz, px, py, pz, energy, kill_energy_threshold)) {
            cout << pdg << " " << vx << " " << vy << " " << vz << " " << px << " " << py << " " << pz << " " << energy << " " << kill_energy_threshold << endl;
        }
    }
}
