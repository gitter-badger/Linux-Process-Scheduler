#ifndef __SCHEDULER_CPP_
#define __SCHEDULER_CPP_

class Scheduler{
private:
  /* The scheduler name */
  String schedulerName;
  /* The cpu bound time limit */
  int processorTimeLimit;
  /* The io bound time limit */
  int ioTimeLimit;
  /* The blocked state time limit */
  int blockedTimeLimit;
  /* The process interval rate */
  int processIntervalRate;

public:
  /* Constructor prototype */
  Scheduler(String schedulerName, int processorTimeLimit, int ioTimeLimit, int blockedTimeLimit, int processIntervalRate);
  virtual ~Scheduler();
}

/* The virtual constructor must be implemented outside of the class */
Scheduler::Scheduler(String schedulerName, int processorTimeLimit, int ioTimeLimit, int blockedTimeLimt, int processIntervalRate)
{
  this.schedulerName = schedulerName;
  this.processorTimeLimit = processorTimeLimit;
  this.ioTimeLimit = ioTimeLimit;
  this.blockedTimeLimt = blockedTimeLimt;
  this.processIntervalRate = processIntervalRate;
}
