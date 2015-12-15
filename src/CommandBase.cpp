#include "CommandBase.h"

CommandBase::CommandBase(const char *name) : Command(name) { //bruh
}

CommandBase::CommandBase() : Command() {
}

DriveTrain* CommandBase::drivetrain = NULL;
RangeFinder* CommandBase::rangefinder = NULL;
OI* CommandBase::oi = NULL;
DataLogger* CommandBase::datalogger = NULL;

void CommandBase::init() {
	drivetrain = new DriveTrain();
	datalogger = new DataLogger();
	rangefinder = new RangeFinder();
	oi = new OI();

	SmartDashboard::PutData(drivetrain);
}
