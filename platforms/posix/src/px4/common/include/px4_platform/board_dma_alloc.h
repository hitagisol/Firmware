/****************************************************************************
 *
 *   Copyright (C) 2016-2019 PX4 Development Team. All rights reserved.
 *                 Author: David Sidrane <david_s5@nscdg.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file board_dma_alloc.h
 *
 * Provide DMA capable memory allocation interface
 */

#pragma once

#include <errno.h>
#include <stdint.h>
#include <stdbool.h>

#include <board_config.h>

__BEGIN_DECLS

/************************************************************************************
 * Name: dma_alloc
 *
 * Description:
 *   All boards may optionally provide this API to supply DMA capable memory
 *
 * Input Parameters:
 *   size     -  A pointer to receive the total allocation size of the memory
 *                    allocated with board_dma_alloc_init. It should be equal to
 *                    BOARD_DMA_ALLOC_POOL_SIZE.
 *
 * Returned Value:
 *   Zero (OK) is returned on success;
 *
 ************************************************************************************/
#define board_dma_alloc(size) malloc(size)

/************************************************************************************
 * Name: dma_free
 *
 * Description:
 *   All boards may optionally provide this API to supply DMA capable memory
 *
 * Input Parameters:
 *   memory     -  A pointer to previously allocated DMA memory
 *   size      -  Size of the previously allocated DMA memory
 *
 ************************************************************************************/
#define board_dma_free(memory, size) free(memory)

__END_DECLS
