#include <iostream>
using namespace std;

#include "LittleComputer.h"
#include <vector>

LittleComputer::LittleComputer()
{
  m_Accumulator = 0;
  m_ProgramCounter = 0;
}

size_t LittleComputer::getProgramCounter()
{
  return m_ProgramCounter;
}

int LittleComputer::getAccumulator()
{
  return m_Accumulator;
}
