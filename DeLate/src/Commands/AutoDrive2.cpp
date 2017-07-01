#include "AutoDrive2.h"

AutoDrive2::AutoDrive2() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void AutoDrive2::Initialize() {
	//these variables can be edited from driver station
	speed = -(Robot::driveTrain->GetPower());//how fast its going
	correction = -(Robot::driveTrain->GetkP());//correction of the gyro
	duration = Robot::driveTrain->GetAutoTime();//length of autonomous command(time)
	delay = Robot::driveTrain->GetDelay();//delay in certain situations

	distance = Robot::driveTrain->GetUltraVal(); //how far we are supposed to go

	//SetTimeout(duration+delay);//set duration auto drive will run

	Robot::driveTrain->ResetGyro();
	Wait(delay);
	Robot::moveBox->DownBox();
	Wait(2);
}

// Called repeatedly when this Command is scheduled to run
void AutoDrive2::Execute() {
	Robot::driveTrain->Backwards(speed, correction);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDrive2::IsFinished() {
	return (Robot::driveTrain->GetDistance() > 95);
}

// Called once after isFinished returns true
void AutoDrive2::End() {
	Robot::driveTrain->Stop();//stops robot
	Robot::driveTrain->ResetGyro();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive2::Interrupted() {
	End();
}
