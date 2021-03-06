/*
 * Copyright (c) 2012-2020 MIRACL UK Ltd.
 *
 * This file is part of MIRACL Core
 * (see https://github.com/miracl/core).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "arch.h"
#include "ecp_C1174.h"

namespace C1174 {

/* Curve C1174 */

#if CHUNK==16

#error Not supported

#endif

#if CHUNK==32

using namespace B256_29;

const int CURVE_Cof_I= 4;
const BIG CURVE_Cof= {0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const int CURVE_B_I= -1174;
const BIG CURVE_B= {0x1FFFFB61,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x7FFFF};
const BIG CURVE_Order= {0x1166C971,0xA26A2FE,0x14C1CD22,0x12CB89BF,0x1FFFFF77,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFF};
const BIG CURVE_Gx= {0x1CE29EDA,0x1091F93D,0xBB35945,0x3B2D492,0x1A190C02,0x1773E014,0x111E4D0E,0x19D4611,0x37FBB};
const BIG CURVE_Gy= {0x1B46360E,0x6658DFC,0xFE5DAE9,0x5BDC55E,0xE0C4FE,0x208B4C2,0x1F31995A,0x105A8FF6,0x6B72F};
const BIG CURVE_HTPC= {0x1FFFFFF6,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x7FFFF};
#endif

#if CHUNK==64

using namespace B256_56;

const int CURVE_Cof_I= 4;
const BIG CURVE_Cof= {0x4L,0x0L,0x0L,0x0L,0x0L};
const int CURVE_B_I= -1174;
const BIG CURVE_B= {0xFFFFFFFFFFFB61L,0xFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFL,0x7FFFFFFL};
const BIG CURVE_Order= {0x44D45FD166C971L,0x65C4DFD3073489L,0xFFFFFFFFFFF779L,0xFFFFFFFFFFFFFFL,0x1FFFFFFL};
const BIG CURVE_Gx= {0x123F27BCE29EDAL,0xD96A492ECD6516L,0xE7C029A190C021L,0xEA308C479343AEL,0x37FBB0CL};
const BIG CURVE_Gy= {0xCCB1BF9B46360EL,0xDEE2AF3F976BA4L,0x1169840E0C4FE2L,0xD47FB7CC665684L,0x6B72F82L};
const BIG CURVE_HTPC= {0xFFFFFFFFFFFFF6L,0xFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFL,0x7FFFFFFL};
#endif

}
