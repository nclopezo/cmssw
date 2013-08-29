/*
 * Payload definition(s): Chamber Gas Flow In and Out (RPCObGas)
 *
 *  \author D. Pagano - Dip. Fis. Nucl. e Teo. & INFN Pavia
 */

#ifndef RPCObGas_h
#define RPCObGas_h
#include <vector>

class RPCObGas {
    public:
      struct Item {
        int dpid;
        float flowin;
        float flowout;
        int day;
        int time;
      };
    RPCObGas(){}
    virtual ~RPCObGas(){}
    std::vector<Item>  ObGas_rpc;
   };

#endif

