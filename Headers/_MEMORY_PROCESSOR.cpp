#ifndef __MEMORY_PROCESSOR_CPP_
#define __MEMORY_PROCESSOR_CPP_
#include <__PROCESS_CPP_>

/* Inherit from the Processor class */
class MemoryProcessor : public Processor
{
public:
  MemoryProcessor(float processorCacheSize, float processSize, float processorClockSpeed, string processorName, Scheduler *scheduler)
  /* Call the superclass(Processor) constructor */
  :Processor(processorCacheSize, processSize, processorClockSpeed, processorName, scheduler)
  ~MemoryProcessor() {
    /* Code Cleanup */
    /* Memory unallocation */
  }

}
