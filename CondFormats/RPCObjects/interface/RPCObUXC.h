/*
 * Payload definition(s): UXC Temperature, Pressure and Humidity (RPCObUXC)
 *
 *  \author D. Pagano - Dip. Fis. Nucl. e Teo. & INFN Pavia
 */

#ifndef RPCObUXC_h
#define RPCObUXC_h
#include <vector>

class RPCObUXC {
    public:
      struct Item {
        float temperature;
        float pressure;
        float dewpoint;
	int unixtime;
      };
    RPCObUXC(){}
    virtual ~RPCObUXC(){}
    std::vector<Item>  ObUXC_rpc;
   };

#endif

