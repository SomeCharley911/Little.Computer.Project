#include <iostream>
using namespace std;

#include "LittleComputer.h"
#include <vector>

class LittleComputer::LittleComputer {
public:
  LittleComputer();
  int getProgramCounter()
  {
    return m_ProgramCounter;
  }
  int getAccumulator()
  {
    return m_Accumulator;
  }

private:
  int m_Accumulator = 0;
  size_t m_ProgramCounter = 0;
  vector<int> m_memory;
};
