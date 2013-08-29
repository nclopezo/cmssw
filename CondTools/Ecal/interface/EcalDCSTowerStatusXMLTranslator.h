/**
   Translates a EcalGainRatio record to XML and vice versa   
   \author Francesco RUBBO
   \date 3 Jun 2010
*/

#ifndef __EcalDCSTowerStatusXMLTranslator_h_
#define __EcalDCSTowerStatusXMLTranslator_h_

#include "CondFormats/EcalObjects/interface/EcalDCSTowerStatus.h"

#include "CondTools/Ecal/interface/XercesString.h"
#include "CondTools/Ecal/interface/EcalCondHeader.h"
#include <string>
#include <xercesc/dom/DOMNode.hpp>

static const char CVSId__EcalDCSTowerStatusXMLTranslator[] = 


//class EcalDCSTowerStatus;

class EcalDCSTowerStatusXMLTranslator {

public:

  static int readXML (const std::string& filename, 
	              EcalCondHeader& header,
	              EcalDCSTowerStatus& record);

  static  int writeXML(const std::string& filename, 
		       const EcalCondHeader& header,
		       const EcalDCSTowerStatus& record);

  static std::string dumpXML(const EcalCondHeader& header,
			     const EcalDCSTowerStatus& record);

  static void plot(std::string, const EcalDCSTowerStatus& record);
};

#endif // __EcalDCSTowerStatusXMLTranslator_h_
