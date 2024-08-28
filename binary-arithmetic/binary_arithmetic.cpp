/**
 * @file binary_arithmetic.cpp
 * @brief Part of the CS-230-003 Study Guide.
 *
 * @date August 26th, 2024
 *
 * @copyright Copyright (c) 2024 Lukas R. Jackson
 *
 * @author Lukas R. Jackson (LukasJacksonEG@gmail.com) | (LukeTheEngineer)
 *
 * @license BSD-3-Clause License
 *          Redistribution and use in source and binary forms, with or without
 *          modification, are permitted provided that the following conditions are met:
 *
 *          1. Redistributions of source code must retain the above copyright notice,
 *             this list of conditions and the following disclaimer.
 *
 *          2. Redistributions in binary form must reproduce the above copyright notice,
 *             this list of conditions and the following disclaimer in the documentation
 *             and/or other materials provided with the distribution.
 *
 *          3. Neither the name of the copyright holder nor the names of its
 *             contributors may be used to endorse or promote products derived from
 *             this software without specific prior written permission.
 *
 *          THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *          AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *          IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *          DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 *          FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *          DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 *          SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *          CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 *          OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *          OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "binary_arithmetic.hpp"
#include <cstring>

int64_t binary_to_decimal(const char *binary)
{
    int decimal = 0;

    /**
     * Note: The input string must only contain '0' and '1' characters. The function does not handle 
     * invalid input such as non-binary characters or null pointers.
     * 
     * As we iterate through the binary number, we multiply
     * by two and add together the numbers that were activated(1s)
     * 
     * For example, when given the binary number 11011, we iterate through the number
     * like so: 
     *              11011
     *            16 8 4 2 1 (corresponding powers of 2)
     * 
     * We then add together the values of the positions where digits are set to one:
     *           16 + 8 + 2 + 1 = 27
     * 
     * You will notice that we left out 4 because the corresponding binary digit is 0.
     * 
     */
    for(int i = 0; i < strlen(binary); ++i)
    {
        decimal = decimal*2; // For every iteration, we multiply the previous number by two, hence why we have the value of decimal equal to itself multiplied by two
        decimal += binary[i] - '0'; //  Since the 'binary' parameter is of 'const char *' and the corresponding ASCII values of 0 and 1 are 48 and 49, 
                                        // We subtract 0 (or 48 in ASCII) to achieve one or zero depending on the ith value. 
    }
    return decimal;
}

int64_t b_add(int64_t binary_num)
{
    
}