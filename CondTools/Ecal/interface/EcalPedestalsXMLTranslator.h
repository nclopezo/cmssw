/**
   Translates a EcalGainRatio record to XML and vice versa   
   \author Francesco RUBBO
   \date 26 Apr 2010
*/

#ifndef __EcalPedestalsXMLTranslator_h_
#define __EcalPedestalsXMLTranslator_h_

#include "CondFormats/EcalObjects/interface/EcalPedestals.h"

#include "CondTools/Ecal/interface/XercesString.h"
#include "CondTools/Ecal/interface/EcalCondHeader.h"
#include <string>
#include <xercesc/dom/DOMNode.hpp>

static const char CVSId__EcalPedestalsXMLTranslator[] = 


//class EcalPedestals;

class EcalPedestalsXMLTranslator {

public:

  static int readXML (const std::string& filename, 
	              EcalCondHeader& header,
	              EcalPedestals& record);

  static  int writeXML(const std::string& filename, 
		       const EcalCondHeader& header,
		       const EcalPedestals& record);

  static std::string dumpXML(const EcalCondHeader& header,
			     const EcalPedestals& record);

};

#endif // __EcalPedestalsXMLTranslator_h_
