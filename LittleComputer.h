#ifndef LITTLECOMPUTER_H
#define LITTLECOMPUTER_H

#include <vector>

/**
 * @brief A simple little computer simulator.
 *
 */
class LittleComputer {
public:
  /**
   * @brief Construct a new Little Computer object with an empty program
   *
   */
  LittleComputer();

  /**
   * @brief Get the Program Counter
   *
   * @return int Current program counter
   */
  int getProgramCounter();

  /**
   * @brief Get the Accumulator value
   *
   * @return int Current accumulator value
   */
  int getAccumulator();

  // Add other public member functions / constructors here

private:
  int m_Accumulator = 0;       /// Current number stored in the accumulator
  size_t m_ProgramCounter = 0; /// current program being run
  vector<int> m_memory;        /// loaded program in memory
};

#endif // LITTLECOMPUTER_H
