#ifndef __PROCESSOR_CPP_
#define __PROCESSOR_CPP_

class Processor{
private:
  float processorCacheSize;   // The cache size in the processor in Megabytes
  float processSize;    // Specified in nanometers (nm), and defines the size of the smallest individual elements on a processor die
  float processorClockSpeed;    // The clock speed for the processor in Mhz
  String processorName;   // A name for our processor :D
  Scheduler* scheduler;   // The scheduler which is used in the processor

public:
  virtual Processor(float, float, float, string, Scheduler);    // Constructor prototype
  virtual ~Processor();   // Virtual class constructor

  /* Class getters */
  float getCacheSize();
  float getProcessSize();
  float getClockSpeed();
  String getProcessorName();
  Scheduler* getProcessorScheduler();

}

/* The vritual constructor must be implemented outside of the main class */
Processor::Processor(float processorCacheSize, float processSize, float processorClockSpeed, string processorName, Scheduler *scheduler) {
  this.processorClockSpeed = processorClockSpeed;
  this.processSize = processSize;
  this.processorCacheSize = processorCacheSize;
  this.processorName = processorName;
  this.scheduler = scheduler;
}

#endif
