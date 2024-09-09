#include <platform.h>
#include <stdio.h>
// #include <vector>
// #include <quadflashlib.h>
// #include <xcore/port.h>
// #include <xcore/clock.h>
// #include <string>

#include "flashydebug.hpp"

int main() {
  printf("Flashy Debug Test\n");


  int cxResult = fdebug.connect();
  printf("fl_connect: %d\n", cxResult);
  if(cxResult) {
    printf("flash connection error\n");
  }else{
    fdebug.printFlashInfo();
    fdebug.addInt("cheese",17);
    fdebug.addFloat("pi", 3.1415926f);
    fdebug.addFloatVector("weights", {123.4, 0.1, -17.4, 0});
    fdebug.addFloatVector2D("biases", {{0.1,-4,2},{-22.1, 1293.2, 19832.5}});
    fdebug.writeToFlash();
  //   //write data
  //   // std::vector<__uint8_t> data='abc';
  //   // std::string s="MEMLDATA";
  //   // std::string dataStr = "{\"weights\":[110.2, 0.2, 0.222, 1e-2]}";
  //   // size_t dataStrSize = dataStr.size();
  //   // unsigned char* sizeBytes = reinterpret_cast<unsigned char*>(dataStrSize);
  //   // std::string sizeString(sizeBytes);
  //   // s = s + sizeString + dataStr;
  //   // std::vector<unsigned char> data(s.begin(), s.end());
  //   // for(size_t i=0; i < 30; i++) {
  //   //   data.push_back(17);
  //   // }

  //   size_t scratchSize = fl_getWriteScratchSize(0, data.size());
  //   printf("# scratch size: %x\n", scratchSize);
  //   std::vector<unsigned char> scratch(scratchSize);
  //   size_t writeRes = fl_writeData(0, data.size(), data.data(), scratch.data());
  //   printf("write: %x\n", writeRes);

  //   // size_t eraseResult = fl_eraseDataSector(0);
  //   // printf("# erase: %x\n", eraseResult);


  //   // printf("Attempting to write data to flash\n");
  }

}
