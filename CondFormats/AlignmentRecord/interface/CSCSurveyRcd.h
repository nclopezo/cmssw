#ifndef CondFormats_AlignmentRecord_CSCSurveyRcd_H
#define CondFormats_AlignmentRecord_CSCSurveyRcd_H

/** \class CSCSurveyRcd
 *
 *  DB record to hold values of alignment parameters from survey.
 *
 *  \author Jim Pivarski
 */

#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"

class CSCSurveyRcd:
  public edm::eventsetup::EventSetupRecordImplementation<CSCSurveyRcd>
{
};

#endif
