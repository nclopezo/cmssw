#ifndef CondFormats_EcalObjects_EcalGainRatios_H
#define CondFormats_EcalObjects_EcalGainRatios_H
/**
 * Author: Shahram Rahatlou, University of Rome & INFN
 * Created: 22 Feb 2006
 **/
#include "CondFormats/EcalObjects/interface/EcalCondObjectContainer.h"
#include "CondFormats/EcalObjects/interface/EcalMGPAGainRatio.h"

typedef EcalCondObjectContainer<EcalMGPAGainRatio> EcalGainRatioMap;
typedef EcalGainRatioMap EcalGainRatios;

#endif
