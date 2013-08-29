#ifndef CondFormats_AlignmentRecord_CSCSurveyErrorRcd_H
#define CondFormats_AlignmentRecord_CSCSurveyErrorRcd_H

/** \class CSCSurveyErrorRcd
 *
 *  DB record to hold errors of alignment parameters from survey.
 *
 *  \author Jim Pivarski
 */

#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"

class CSCSurveyErrorRcd:
  public edm::eventsetup::EventSetupRecordImplementation<CSCSurveyErrorRcd>
{
};

#endif
