#ifndef AutoDrive2_H
#define AutoDrive2_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoDrive2 : public Command {
public:
	AutoDrive2();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	double speed;
	double correction;
	double duration;
	double delay;

	double distance;
};

#endif  // AutoDrive2_H
