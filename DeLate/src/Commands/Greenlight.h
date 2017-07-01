#ifndef Greenlight_H
#define Greenlight_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class Greenlight : public frc::Command {
public:
	Greenlight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Greenlight_H
