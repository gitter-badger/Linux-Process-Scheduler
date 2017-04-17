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

  /* Class setters */
  void setCacheSize(float);
  void setProcessSize(float);
  void setClockSpeed(float);
  void setProcessorName(String);
  void setProcessorScheduler(Scheduler*);
}

/* The vritual constructor must be implemented outside of the main class */
Processor::Processor(float processorCacheSize, float processSize, float processorClockSpeed, string processorName, Scheduler *scheduler) {
  this.processorClockSpeed = processorClockSpeed;
  this.processSize = processSize;
  this.processorCacheSize = processorCacheSize;
  this.processorName = processorName;
  this.scheduler = scheduler;
}

/* Class getters bodies */
float Processr::getCacheSize(){
  return this.processorCacheSize;
}
float Processor::getProcessSize(){
  return this.processSize;
}
float Processor::getClockSpeed(){
  return this.processorClockSpeed;
}
String Processor::getProcessorName(){
  return this.processorName;
}
Scheduler* Processor::getProcessorScheduler(){
  return this.scheduler;
}

/* Class setters bodies */
void Processor::setCacheSize(float processorCacheSize){
  this.processorCacheSize = processorCacheSize;
}

void Processor::setProcessSize(float processSize){
  this.processSize = processSize;
}

void Processor::setClockSpeed(float processorClockSpeed){
  this.processorClockSpeed = processorClockSpeed;
}

void Processor::setProcessorName(String processorName){
  this.processorName = processorName;
}

void Processor::setProcessorScheduler(String scheduler){
  this.scheduler = scheduler;
}

#endif
