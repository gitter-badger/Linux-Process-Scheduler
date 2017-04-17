#ifndef __PROCESS_CPP_
#define __PROCESS_CPP_

class process {

private:
  int pID;    // Process ID
  int numOfCycles;    // Number of cycles that each process is being executed on the cpu
  int timeEntered;    // The time that it has entered to the system

  // The need of using each processor is stated using an array which is a type of the PROCESSOR
  processor **processorTypes;    // This will be allocated next in the code :D

public:
  // Constructor - No arg
  process()
  {
    // Default values
    pID = 0;
    numOfCycles = 0;
    timeEntered = 0;
    processorTypes = new processor();   // This has to be an array of processors
  }

  // Constructor - 4 args
  process(int pID, int numOfCycles, int timeEntered, processor **processorTypes)
  {
    this.pID = pID;
    this.numOfCycles = numOfCycles;
    this.timeEntered = timeEntered;
    this.processorTypes = processorTypes;
    processorTypes = new processor();   // This has to be an array of processors
  }
}

#endif
