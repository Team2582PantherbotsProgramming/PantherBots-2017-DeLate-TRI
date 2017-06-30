#include "Arduino.h"
#include "../RobotMap.h"

Arduino::Arduino():Subsystem("Arduino")
{

}

void Arduino::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Arduino::I2CBoard(int address)
{
	i2c = new frc::I2C(frc::I2C::kOnboard, address);
	sensors = new std::vector<frc::SensorBase>();
}


void Arduino::RegisterSensor(frc::SensorBase sensor)
{
	//sensor
}

 void Arduino::GetFromArduino()
 {

 }
