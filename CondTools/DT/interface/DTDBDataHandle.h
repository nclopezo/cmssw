#ifndef DTDBDataHandle_H
#define DTDBDataHandle_H
/** \class DTDBDataHandle
 *
 *  Description: Class to convert data types from/to DB types
 *
 *
 *  \author Paolo Ronchese INFN Padova
 *
 */

//----------------------
// Base Class Headers --
//----------------------


//------------------------------------
// Collaborating Class Declarations --
//------------------------------------


//---------------
// C++ Headers --
//---------------


//              ---------------------
//              -- Class Interface --
//              ---------------------

class DTDBDataHandle {

public:

  /** Constructor
   */
  DTDBDataHandle();

  /** Destructor
   */
  virtual ~DTDBDataHandle();

  /** Operations
   */
  /// 
  static   int nearestInt( double d );
  static  bool toBool( short s );
  static short toShort( bool b );

 private:


};


#endif // DTDBDataHandle_H

