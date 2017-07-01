// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Robot.h"
#include "LowerI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

LowerI::LowerI(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
	SetTimeout(3.5);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::moveIntake.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void LowerI::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void LowerI::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool LowerI::IsFinished() {
    return IsTimedOut();
}

// Called once after isFinished returns true
void LowerI::End() {
	Robot::moveIntake->DownIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LowerI::Interrupted() {

}