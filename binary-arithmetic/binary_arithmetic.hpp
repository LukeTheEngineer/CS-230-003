/**
 * @file binary_arithmetic.h
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
#ifndef binary_arithmetic_h_
#define binary_arithmetic_h_

#include<inttypes.h>

/**
 * @brief Here we are converting a binary number to a decimal.
 * 
 * The parameter is a const char since it'll help us iterate and perform
 * the necessary steps for conversion.
 * 
 * @param binary 
 */
int64_t binary_to_decimal(const char *binary);

int64_t decimal_to_binary(int64_t *decimal);

int64_t b_add(int64_t);

int64_t b_add(int64_t, int64_t);

int64_t b_add(int64_t, int64_t, int64_t);

int64_t b_add(int64_t, int64_t, int64_t, int64_t);

int64_t b_subtract(int64_t);

int64_t b_subtract(int64_t, int64_t);

int64_t b_subtract(int64_t, int64_t, int64_t);

int64_t b_subtract(int64_t, int64_t, int64_t, int64_t);

int64_t b_multiply(int64_t);

int64_t b_multiply(int64_t, int64_t);

int64_t b_multiply(int64_t, int64_t, int64_t);

int64_t b_multiply(int64_t, int64_t, int64_t, int64_t);

int64_t b_divide(int64_t);

int64_t b_divide(int64_t, int64_t);

int64_t b_divide(int64_t, int64_t, int64_t);

int64_t b_divide(int64_t, int64_t, int64_t, int64_t);

#endif /* binary_arithmetic_h_ */