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
   * @brief Construct a new Little Computer object with the provided program
   *
   * @param vector<int> The instructions to be processed
   */
  LittleComputer(vector<int> instructions);
  /**
   * @brief Get the Program Counter
   *
   * @return int Current program counter
   */
  size_t getProgramCounter();

  /**
   * @brief Get the Accumulator value
   *
   * @return int Current accumulator value
   */
  int getAccumulator();

  /**
   * @brief return the value in specified memory location
   *
   * @param size_t the location in memory to return
   *
   * @return int Current value in location
   */
  int LittleComputer::getMemoryAt(size_t location);

  /**
   * @brief return the value in current working memory location
   *
   * @return int Current value in location
   */
  int getCurrentInstruction();

  // Add other public member functions / constructors here

private:
  int m_Accumulator = 0;       /// Current number stored in the accumulator
  size_t m_ProgramCounter = 0; /// current program being run
  std::vector<int> m_memory;   /// loaded program in memory
};

#endif // LITTLECOMPUTER_H
