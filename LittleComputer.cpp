#include <iostream>
using namespace std;

#include "LittleComputer.h"
#include <vector>

LittleComputer::LittleComputer()
{
  m_Accumulator = 0;
  m_ProgramCounter = 0;
}

LittleComputer::LittleComputer(vector<int> instructions)
{
  m_Accumulator = 0;
  m_ProgramCounter = 0;
  m_memory = instructions;
}

size_t LittleComputer::getProgramCounter()
{
  return (m_ProgramCounter);
}

int LittleComputer::getAccumulator()
{
  return m_Accumulator;
}

int LittleComputer::getMemoryAt(size_t location)
{
  return m_memory.at(location);
}

+ getCurrentInstruction():int

    + step()

    + isHalted():bool

    + restart()