#include "SideAuto.h"

SideAuto::SideAuto() {
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.

	//AddSequential(new AutoDrive2b()); //robot is heading forward;
									  //ultrasonic facing back wall
	//AddSequential(new AutoDrive2()); //this works
	//Robot::driveTrain->ResetGyro();
	AddSequential(new TurnToShip());  //robot turns to airship according to where
									  //airship is in relation to where it is from robot
									  //should be turned around in a way that makes
									  //the ultrasonic face the peg
	//AddSequential(new AutoDriveB());  //robot uses ultrasonic to deliver peg like normal
									  //autonomous

}
