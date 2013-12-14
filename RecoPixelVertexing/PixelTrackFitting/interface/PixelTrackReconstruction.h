#ifndef RecoPixelVertexing_PixelTrackFitting_PixelTrackReconstruction_H
#define RecoPixelVertexing_PixelTrackFitting_PixelTrackReconstruction_H

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "RecoPixelVertexing/PixelTrackFitting/interface/TracksWithHits.h"
#include "FWCore/Framework/interface/ConsumesCollector.h"


class PixelFitter;
class PixelTrackCleaner;
class PixelTrackFilter;
class OrderedHitsGenerator;
class TrackingRegionProducer;
class QuadrupletSeedMerger;

namespace edm { class Event; class EventSetup; class Run; }

class PixelTrackReconstruction {
public:

  PixelTrackReconstruction( const edm::ParameterSet& conf,
	   edm::ConsumesCollector && iC);
  ~PixelTrackReconstruction(); 

  void run(pixeltrackfitting::TracksWithTTRHs& tah, edm::Event& ev, const edm::EventSetup& es);

  void halt();
  void init(const edm::EventSetup& es);

private:
  edm::ParameterSet theConfig;
  const PixelFitter       * theFitter;
  PixelTrackFilter  * theFilter;
  PixelTrackCleaner * theCleaner;
  OrderedHitsGenerator * theGenerator;
  TrackingRegionProducer* theRegionProducer;
  QuadrupletSeedMerger *theMerger_;
};
#endif
