#ifndef Redlight_H
#define Redlight_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class Redlight : public frc::Command {
public:
	Redlight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Redlight_H
