/**
 * Author: Shahram Rahatlou, University of Rome & INFN
 * Created: 22 Feb 2006
 **/

#include "CondFormats/EcalObjects/interface/EcalADCToGeVConstant.h"

EcalADCToGeVConstant::EcalADCToGeVConstant() 
{
  EBvalue_=0.;
  EEvalue_=0.;
}

EcalADCToGeVConstant::EcalADCToGeVConstant(const float & EBvalue,const float & EEvalue) {
  EBvalue_ = EBvalue;
  EEvalue_ = EEvalue;
}

EcalADCToGeVConstant::~EcalADCToGeVConstant() {

}
