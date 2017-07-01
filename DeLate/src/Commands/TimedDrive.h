#ifndef TimedDrive_H
#define TimedDrive_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TimedDrive : public Command {
public:
	TimedDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double speed;
	double duration;
	double delay;
	double correction;
};

#endif  // TimedDrive_H
