/**
 * Author: Paolo Meridiani
 * Created: 14 Nov 2006
 **/

#include "CondFormats/EcalObjects/interface/EcalDAQStatusCode.h"

EcalDAQStatusCode::EcalDAQStatusCode() {
  status_ = 0;
}

EcalDAQStatusCode::EcalDAQStatusCode(const EcalDAQStatusCode & ratio) {
  status_ = ratio.status_;
}

EcalDAQStatusCode::~EcalDAQStatusCode() {
}

EcalDAQStatusCode& EcalDAQStatusCode::operator=(const EcalDAQStatusCode& rhs) {
  status_ = rhs.status_;
  return *this;
}
