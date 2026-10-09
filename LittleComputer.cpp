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

int LittleComputer::getCurrentInstruction()
{
  return m_memory.at(m_ProgramCounter);
}

void LittleComputer::step()
{
  if (getCurrentInstruction() < 100)
    return;
  else if (getCurrentInstruction() < 200)
    m_Accumulator += m_memory.at(getCurrentInstruction() - 100);
  else if (getCurrentInstruction() < 300)
    m_Accumulator -= m_memory.at(getCurrentInstruction() - 200);
  m_ProgramCounter++;
}

bool LittleComputer::isHalted()
{
  if (getCurrentInstruction() == 0)
    return true;
  else
    return false;
}

void LittleComputer::restart()
{
}