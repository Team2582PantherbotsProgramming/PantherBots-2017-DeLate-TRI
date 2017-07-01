#include "TurnToShip.h"

TurnToShip::TurnToShip() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void TurnToShip::Initialize() {
	position = Robot::driveTrain->GetDirection();
	turnAng = Robot::driveTrain->TurnAngle();
}

// Called repeatedly when this Command is scheduled to run
void TurnToShip::Execute() {
	Robot::driveTrain->TurnFun(position, turnAng);
}

// Make this return true when this Command no longer needs to run execute()
bool TurnToShip::IsFinished() {
	return Robot::driveTrain->GetPos();
}

// Called once after isFinished returns true
void TurnToShip::End() {
	Wait(.5);
	Robot::driveTrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnToShip::Interrupted() {
	End();
}
