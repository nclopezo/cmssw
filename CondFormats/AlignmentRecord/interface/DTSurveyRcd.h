#ifndef CondFormats_AlignmentRecord_DTSurveyRcd_H
#define CondFormats_AlignmentRecord_DTSurveyRcd_H

/** \class DTSurveyRcd
 *
 *  DB record to hold values of alignment parameters from survey.
 *
 *  \author Jim Pivarski
 */

#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"

class DTSurveyRcd:
  public edm::eventsetup::EventSetupRecordImplementation<DTSurveyRcd>
{
};

#endif
