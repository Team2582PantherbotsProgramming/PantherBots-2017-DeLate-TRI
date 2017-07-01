#include "Redlight.h"

Redlight::Redlight() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::intakeGear.get());
}

// Called just before this Command runs the first time
void Redlight::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Redlight::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool Redlight::IsFinished() {
	return !(Robot::intakeGear->LaserInfo());
}

// Called once after isFinished returns true
void Redlight::End() {
	Robot::intakeGear->Red();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Redlight::Interrupted() {

}
