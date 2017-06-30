// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Climber.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Climber::Climber() : Subsystem("Climber") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    climb1 = RobotMap::climberClimb1;
    climb2 = RobotMap::climberClimb2;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    //Climber Power
    powertwo = 1.000;

    climbY = 0.000;
}

void Climber::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Climber::ToTheTop()
{
	climb1->Set(powertwo);
	climb2->Set(-powertwo);
}

void Climber::Stop()
{
	climb1->Set(0.0);
	climb2->Set(0.0);
}

double Climber::ClimberPower()
{
	powertwo = frc::SmartDashboard::GetNumber("ClimberPower", powertwo);
	return powertwo;
}

void Climber::ControlClimb(std::shared_ptr<frc::Joystick> pad)
{
	climbY = std::abs(pad->GetRawAxis(2));
	climb1->Set(climbY);
	climb2->Set(-climbY);
}
