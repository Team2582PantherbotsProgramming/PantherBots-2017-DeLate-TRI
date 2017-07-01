#include "TimedDrive.h"

TimedDrive::TimedDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain.get());
	SetTimeout(2.500);
}

// Called just before this Command runs the first time
void TimedDrive::Initialize() {
	speed = Robot::driveTrain->GetPower();
	correction = Robot::driveTrain->GetkP();



	Robot::driveTrain->ResetGyro();
	//Wait(delay);
	Robot::moveBox->DownBox();
}

// Called repeatedly when this Command is scheduled to run
void TimedDrive::Execute() {
	Robot::driveTrain->AutoGyroDrive(speed, correction);
}

// Make this return true when this Command no longer needs to run execute()
bool TimedDrive::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void TimedDrive::End() {
	Robot::driveTrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TimedDrive::Interrupted() {
	End();
}
