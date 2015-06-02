#ifndef CALIBRATELIFTER_H
#define CALIBRATELIFTER_H

#include "../../CommandBase.h"
#include "WPILib.h"

// TODO end calibration if encoder isnt changing

class CalibrateLifter: public CommandBase
{
public:
	CalibrateLifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
