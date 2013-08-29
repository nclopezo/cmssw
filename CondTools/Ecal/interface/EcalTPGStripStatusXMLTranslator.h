/**
   Translates a Ecal record to XML
   \date 14 Jun 2011
*/

#ifndef __EcalTPGStripStatusXMLTranslator_h_
#define __EcalTPGStripStatusXMLTranslator_h_

#include "CondFormats/EcalObjects/interface/EcalTPGStripStatus.h"

#include "CondTools/Ecal/interface/XercesString.h"
#include "CondTools/Ecal/interface/EcalCondHeader.h"
#include <string>
#include <xercesc/dom/DOMNode.hpp>

static const char CVSId__EcalTPGStripStatusXMLTranslator[] = 


//class EcalTPGStripStatus;

class EcalTPGStripStatusXMLTranslator {

public:

  static int readXML (const std::string& filename, 
	              EcalCondHeader& header,
	              EcalTPGStripStatus& record);

  static  int writeXML(const std::string& filename, 
		       const EcalCondHeader& header,
		       const EcalTPGStripStatus& record);

  static std::string dumpXML(const EcalCondHeader& header,
			     const EcalTPGStripStatus& record);

};

#endif // __EcalTPGStripStatusXMLTranslator_h_
