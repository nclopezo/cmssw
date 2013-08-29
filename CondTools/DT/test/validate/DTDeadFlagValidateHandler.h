#ifndef DTDeadFlagValidateHandler_H
#define DTDeadFlagValidateHandler_H
/** \class DTDeadFlagValidateHandler
 *
 *  Description: 
 *
 *
 *  \author Paolo Ronchese INFN Padova
 *
 */

//----------------------
// Base Class Headers --
//----------------------
#include "CondCore/PopCon/interface/PopConSourceHandler.h"

//------------------------------------
// Collaborating Class Declarations --
//------------------------------------
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "CondFormats/DTObjects/interface/DTDeadFlag.h"

//---------------
// C++ Headers --
//---------------


//              ---------------------
//              -- Class Interface --
//              ---------------------

class DTDeadFlagValidateHandler: public popcon::PopConSourceHandler<DTDeadFlag> {

 public:

  /** Constructor
   */
  DTDeadFlagValidateHandler( const edm::ParameterSet& ps );

  /** Destructor
   */
  virtual ~DTDeadFlagValidateHandler();

  /** Operations
   */
  /// 
  void getNewObjects();
  std::string id() const;

 private:

  int firstRun;
  int  lastRun;
  std::string dataVersion;
  std::string dataFileName;
  std::string elogFileName;
  void addNewObject( int runNumber );

};


#endif // DTDeadFlagValidateHandler_H






