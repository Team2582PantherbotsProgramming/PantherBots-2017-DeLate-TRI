#include "AxisClimb.h"

AxisClimb::AxisClimb() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::climber.get());
}

// Called just before this Command runs the first time
void AxisClimb::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AxisClimb::Execute() {
	Robot::climber->ControlClimb(Robot::oi->getGamepad());
}

// Make this return true when this Command no longer needs to run execute()
bool AxisClimb::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void AxisClimb::End() {
	Robot::climber->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AxisClimb::Interrupted() {
	End();
}
