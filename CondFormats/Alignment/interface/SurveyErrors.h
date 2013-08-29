#ifndef CondFormats_Alignment_SurveyErrors_H
#define CondFormats_Alignment_SurveyErrors_H

/** \class SurveyErrors
 *
 *  Container of SurveyError to be stored in DB.
 *
 *  For more info, see CondFormats/Alignment/interface/SurveyError.h
 *
 *  \author Chung Khim Lae
 */

#include "CondFormats/Alignment/interface/SurveyError.h"

struct SurveyErrors
{
  SurveyErrors() {}

  std::vector<SurveyError> m_surveyErrors;
};

#endif
