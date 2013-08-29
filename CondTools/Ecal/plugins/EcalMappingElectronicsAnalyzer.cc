/** Declaration of the analyzer class for EcalMappingElectronics
    
    \author Stefano Argiro
 */

#include "CondCore/PopCon/interface/PopConAnalyzer.h"
#include "CondTools/Ecal/interface/EcalMappingElectronicsHandler.h"
#include "FWCore/Framework/interface/MakerMacros.h"



typedef popcon::PopConAnalyzer<EcalMappingElectronicsHandler>  
                                         EcalMappingElectronicsAnalyzer;


//define this as a plug-in
DEFINE_FWK_MODULE(EcalMappingElectronicsAnalyzer);
