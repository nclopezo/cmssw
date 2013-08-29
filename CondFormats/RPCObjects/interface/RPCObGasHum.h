/*
 * Payload definition(s): Chamber Gas Humidity (RPCObGasHum)
 *
 *  \author D. Pagano - Dip. Fis. Nucl. e Teo. & INFN Pavia
 */

#ifndef RPCObGasHum_h
#define RPCObGasHum_h
#include <vector>

class RPCObGasHum {
    public:
      struct Item {
        int unixtime;
        float value;
        int dpid;
      };
    RPCObGasHum(){}
    virtual ~RPCObGasHum(){}
    std::vector<Item>  ObGasHum_rpc;
   };

#endif

