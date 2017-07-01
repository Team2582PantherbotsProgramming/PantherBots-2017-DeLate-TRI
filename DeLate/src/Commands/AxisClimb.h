#ifndef AxisClimb_H
#define AxisClimb_H

//#include "../CommandBase.h"
#include "Commands/Subsystem.h"
#include "Robot.h"
#include "OI.h"
#include "Subsystems/Climber.h"

class AxisClimb : public Command {
public:
	AxisClimb();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // AxisClimb_H
