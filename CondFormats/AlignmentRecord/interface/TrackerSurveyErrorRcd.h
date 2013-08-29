#ifndef CondFormats_AlignmentRecord_TrackerSurveyErrorRcd_H
#define CondFormats_AlignmentRecord_TrackerSurveyErrorRcd_H

/** \class TrackerSurveyErrorRcd
 *
 *  DB record to hold errors of alignment parameters from survey.
 *
 *  \author Chung Khim Lae
 */

#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"

class TrackerSurveyErrorRcd:
  public edm::eventsetup::EventSetupRecordImplementation<TrackerSurveyErrorRcd>
{
};

#endif
