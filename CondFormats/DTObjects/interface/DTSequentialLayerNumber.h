#ifndef DTSequentialLayerNumber_H
#define DTSequentialLayerNumber_H
/** \class DTSequentialLayerNumber
 *
 *  Description:
 *       Class to compute a sequential number for drift tube layers
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

class DTSequentialLayerNumber {

 public:

  DTSequentialLayerNumber();
  ~DTSequentialLayerNumber();

  static int id( int      wheel, int station, int sector,
                 int superlayer, int   layer );
  static int max();

 private:

  static int layersPerWheel;
  static int layersPerSector;
  static int layersIn13Sectors;

  static int* offsetChamber;

};


#endif // DTSequentialLayerNumber_H
