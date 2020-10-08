/**
 *!
 * \file        algo_hmac_sha1.h
 * \version     v0.0.1
 * \date        2020/04/27
 * \author      Bean(notrynohigh@outlook.com)
 *******************************************************************************
 * @attention
 *
 * Copyright (c) 2020 Bean
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *******************************************************************************
 */
#ifndef __B_ALGO_HMAC_SHA1_H__
#define __B_ALGO_HMAC_SHA1_H__

#ifdef __cplusplus
extern "C" {
#endif

/*Includes ----------------------------------------------*/
#include "b_config.h"

/**
 * \addtogroup ALGORITHM
 * \{
 */

/**
 * \addtogroup HMAC_SHA1
 * \{
 */

/**
 * \defgroup HMAC_SHA1_Exported_TypesDefinitions
 * \{
 */

/**
 * \}
 */

/**
 * \defgroup HMAC_SHA1_Exported_Defines
 * \{
 */

//#define SHA1_DEBUG      1

/**
 * \}
 */

/**
 * \defgroup HMAC_SHA1_Exported_Macros
 * \{
 */

/**
 * \}
 */

/**
 * \defgroup HMAC_SHA1_Exported_Variables
 * \{
 */

/**
 * \}
 */

/**
 * \defgroup HMAC_SHA1_Exported_Functions
 * \{
 */

void hmac_sha1(uint8_t *key, int key_length, uint8_t *data, int data_length, uint8_t *digest);

/**
 * \}
 */

/**
 * \}
 */

/**
 * \}
 */

#ifdef __cplusplus
}
#endif

#endif

/************************ Copyright (c) 2020 Bean *****END OF FILE****/
