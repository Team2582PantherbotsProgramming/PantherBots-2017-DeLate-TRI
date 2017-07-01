#ifndef Arduino_H
#define Arduino_H

#include <Commands/Subsystem.h>
#include "Robot.h"


class Arduino : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Arduino();
	void InitDefaultCommand();

	frc::I2C* i2c;
	std::vector<frc::SensorBase>* sensors;
	unsigned char info[];

	void I2CBoard(int);
	void RegisterSensor(frc::SensorBase);

	void GetFromArduino();
};

#endif  // Arduino_H
