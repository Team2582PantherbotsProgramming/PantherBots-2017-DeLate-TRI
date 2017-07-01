#include "AutoGearPickup.h"
#include "AutoGearIntake.h"
#include "AutoIntakeLift.h"
#include "AutoBoxDrop.h"
#include "AutoIntakeToss.h"
#include "AutoIntakeDrop.h"
#include "AutoBoxLift.h"

AutoGearPickup::AutoGearPickup() {
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

	AddParallel(new AutoBoxLift()); //read reverse
	AddParallel(new AutoIntakeLift()); //read reverse
	AddSequential(new AutoGearIntake());

	AddSequential(new AutoIntakeDrop());
	AddSequential(new AutoIntakeToss());
	AddParallel(new AutoIntakeLift());
	//AddSequential(new AutoBoxDrop());
}
