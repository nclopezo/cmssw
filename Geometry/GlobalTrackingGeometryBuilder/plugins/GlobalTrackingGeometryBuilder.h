#ifndef GlobalTrackingGeometryBuilder_GlobalTrackingGeometryBuilder_h
#define GlobalTrackingGeometryBuilder_GlobalTrackingGeometryBuilder_h

/** \class GlobalTrackingGeometryBuilder
 *
 *  Build the GlobalTrackingGeometry.
 *
 *  \author Matteo Sani
 */

#include <string>

class GlobalTrackingGeometry;
class TrackerGeometry;
class DTGeometry;
class CSCGeometry;
class RPCGeometry;
class GEMGeometry;

class GlobalTrackingGeometryBuilder {
public:
  /// Constructor
  GlobalTrackingGeometryBuilder();

  /// Destructor
  virtual ~GlobalTrackingGeometryBuilder();

  /// Build the geometry
  GlobalTrackingGeometry* build(const TrackerGeometry* tk, 
				const DTGeometry* dt, 
                                const CSCGeometry* csc, 
				const RPCGeometry* rpc,
				const GEMGeometry* gem);

protected:

private:

  const std::string myName;

};
#endif