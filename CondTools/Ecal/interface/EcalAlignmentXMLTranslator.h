/**
   Translates a EcalAlignmentConstant record to XML
   and vice versa   

   \author Jean Fay
   \date 14 Sept 2010
*/

#ifndef __EcalAlignmentXMLTranslator_h_
#define __EcalAlignmentXMLTranslator_h_


#include "CondTools/Ecal/interface/XercesString.h"
#include "CondTools/Ecal/interface/EcalCondHeader.h"
#include <string>

static const char CVSId__EcalAlignmentXMLTranslator[] = 

class AlignTransform;

class EcalAlignmentXMLTranslator {

public:

  static int writeXML (const std::string& filename,
		       const EcalCondHeader& header,
		       const Alignments& record);

  static std::string dumpXML(const EcalCondHeader& header,
			     const Alignments& record);
};

#endif // __EcalAlignmentXMLTranslator_h_
