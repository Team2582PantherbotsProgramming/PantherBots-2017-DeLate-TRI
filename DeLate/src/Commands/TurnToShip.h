#ifndef TurnToShip_H
#define TurnToShip_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TurnToShip : public Command {
public:
	TurnToShip();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	std::string position;
	double turnAng;
};

#endif  // TurnToShip_H
