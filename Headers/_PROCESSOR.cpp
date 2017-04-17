#ifndef __PROCESSOR_CPP_
#define __PROCESSOR_CPP_

class Processor{
private:
  float processorCacheSize;   // The cache size in the processor
  float processSize;    // Specified in nanometers (nm), and defines the size of the smallest individual elements on a processor die
  float processorClockSpeed;    // The clock speed for the processor
  String processorName;   // A name for our processor :D
  Scheduler *scheduler;   // The scheduler which is used in the processor


public:
  virtual ~Processor();   // Virtual class constructor
}
