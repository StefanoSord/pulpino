/* Copyright (C) 2017 ETH Zurich, University of Bologna
 * All rights reserved.
 *
 * This code is under development and not yet released to the public.
 * Until it is released, the code is under the copyright of ETH Zurich and
 * the University of Bologna, and may contain confidential and/or unpublished
 * work. Any reuse/redistribution is strictly forbidden without written
 * permission from ETH Zurich.
 *
 * Bug fixes and contributions will eventually be released under the
 * SolderPad open hardware license in the context of the PULP platform
 * (http://www.pulp-platform.org), under the copyright of ETH Zurich and the
 * University of Bologna.
 */

/***********************************************************************/
/*************** TCDM VARIABLE TO BE CHECKED ***************************/
/***********************************************************************/
/* RESULT: block                                                       */
/* LENGTH: 64                                                          */
/***********************************************************************/
/****************** EXPECTED RESULT ************************************/
/***********************************************************************/
/* EXPECTED: check_block                                               */ 
/***********************************************************************/


// Cosine Transform Coefficients

#define W1 2841                 /* 2048*sqrt(2)*cos(1*pi/16) */
#define W2 2676                 /* 2048*sqrt(2)*cos(2*pi/16) */
#define W3 2408                 /* 2048*sqrt(2)*cos(3*pi/16) */
#define W5 1609                 /* 2048*sqrt(2)*cos(5*pi/16) */
#define W6 1108                 /* 2048*sqrt(2)*cos(6*pi/16) */
#define W7 565                  /* 2048*sqrt(2)*cos(7*pi/16) */

// Other FDCT Parameters
#define CONST_BITS  13
#define PASS1_BITS  2


#define BLOCKSIZE 64


// Image block to be transformed:
 __attribute__ ((aligned (64))) const short int block_init[BLOCKSIZE]=
  { 99 ,104 ,109 ,113 ,115 ,115 , 55 , 55,
    104 ,111 ,113 ,116 ,119 , 56 , 56 , 56,
    110 ,115 ,120 ,119 ,118 , 56 , 56 , 56,
    119 ,121 ,122 ,120 ,120 , 59 , 59 , 59,
    119 ,120 ,121 ,122 ,122 , 55 , 55 , 55,
    121 ,121 ,121 ,121 , 60 , 57 , 57 , 57,
    122 ,122 , 61 , 63 , 62 , 57 , 57 , 57,
    62 , 62 , 61 , 61 , 63 , 58 , 58 , 58,
  };


// Result Array
const short int check_block[BLOCKSIZE] = {-2480, -665, -689, 44, -350, 26, -272, -535, -628, -2044, -544, 141, 300, -147, -1, 89, -676, -551, -1820, 224, 267, -154, -281, -290,  52, 149, 262, -1508, -228, -102, 58, 100,  -425, 342, 148, -185, -2485, 802, 227, -750,  34, -62, -225, -84, 829, -1495, -172, 319,  -171, -14, -367, 67, 323, -127, -1400, 28,  -546, 38, -355, 159, -750, 316, -4, -1849 };

