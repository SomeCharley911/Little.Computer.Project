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
  vector<int> digits;
  bool step = true;
  int temp = getCurrentInstruction();
  int num = temp % 100;
  switch (temp / 100) {
  case 0:
    return;
  case 1:
    m_Accumulator += m_memory.at(num);
    break;
  case 2:
    m_Accumulator -= m_memory.at(num);
    break;
  case 3:
    m_memory.at(num) = m_Accumulator;
    break;
  case 5:
    m_Accumulator = m_memory.at(num);
    break;
  case 6:
    m_ProgramCounter = num;
    step = false;
    break;
  case 7:
    if (m_Accumulator == 0) {
      m_ProgramCounter = num;
      step = false;
    }
    break;
  }
  if (step)
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
  m_ProgramCounter = 0;
  m_Accumulator = 0;
}