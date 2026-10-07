#include <iostream>
using namespace std;

#include "LittleComputer.h"
#include <vector>

LittleComputer::LittleComputer()
{
  m_Accumulator = 0;
  m_ProgramCounter = 0;
}

int LittleComputer::getProgramCounter()
{
  return static_cast<int>(m_ProgramCounter);
}

int LittleComputer::getAccumulator()
{
  return m_Accumulator;
}
