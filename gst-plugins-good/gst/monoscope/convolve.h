/* convolve.h: Header for convolutions.
 *
 *  Copyright (C) 1999 Ralph Loader <suckfish@ihug.co.nz>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 *
 * Note: 7th December 2004: This file used to be licensed under the GPL,
 *       but we got permission from Ralp Loader to relicense it to LGPL.
 *
 *
 */

#ifndef CONVOLVE_H
#define CONVOLVE_H

#ifdef __cplusplus
extern "C" {
#endif

/* convolve_match takes two blocks, one twice the size of the other.  The
 * sizes of these are CONVOLVE_BIG and CONVOLVE_SMALL respectively. */
#define CONVOLVE_DEPTH 8
#define CONVOLVE_SMALL (1 << CONVOLVE_DEPTH)
#define CONVOLVE_BIG (CONVOLVE_SMALL * 2)

/* Convolution stuff */
typedef struct _struct_convolve_state convolve_state;

convolve_state *convolve_init (void);
void convolve_close (convolve_state * state);

int convolve_match (const int * lastchoice,
                    const short int * input,
                    convolve_state * state);

#ifdef __cplusplus
}
#endif

#endif
