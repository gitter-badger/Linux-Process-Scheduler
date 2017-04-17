#ifndef __PROCESSOR_CPP_
#define __PROCESSOR_CPP_

class Processor{
private:
  float processorClockSpeed;    // The clock speed for the processor
  String processorName;   // A name for our processor :D
  Scheduler *scheduler;   // The scheduler which is used in the processor


public:
  virtual ~Processor();   // Virtual class constructor
}
