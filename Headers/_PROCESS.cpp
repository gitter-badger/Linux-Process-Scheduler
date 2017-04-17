#ifndef __PROCESS_CPP
#define __PROCESS_CPP

class process {

  int pID;    // Process ID
  int numOfCycles;    // Number of cycles that each process is being executed on the cpu
  int timeEntered;    // The time that it has entered to the system

  // The need of using each processor is stated using an array which is a type of the PROCESSOR
  processor **processorTypes;    // This will be allocated next in the code :D

  // Constructor - No arg
  public process()
  {
    // Default values
    pID = 0;
    numOfCycles = 0;
    timeEntered = 0;
    processorTypes = new processor();
  }

  // Constructor - 4 args
  public process(int pID, int numOfCycles, int timeEntered, processor **processorTypes)
  {
    
  }
}
