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

use crate::arch::Chunk;
use crate::hifive::big::NLEN;

// Base Bits= 29
// hifive Modulus
pub const MODULUS: [Chunk; NLEN] = [
    0x1FFFFFFD, 0x1FFFFFFF, 0x1FFFFFFF, 0x1FFFFFFF, 0x1FFFFFFF, 0x1FFFFFFF, 0x1FFFFFFF, 0x1FFFFFFF,
    0x1FFFFFFF, 0x1FFFFFFF, 0x1FFFFFFF, 0x1FFFF,
];
pub const ROI:[Chunk;NLEN]=[0x1559D3B8,0x1C02413F,0xFAB18DA,0x128A7172,0xB95DA4C,0x16D4FE54,0x3107D87,0xAA7BEF3,0x1C38B2B4,0x1A93C08F,0x10F80C7B,0x1F27F];
pub const R2MODP: [Chunk; NLEN] = [
    0x9000000, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
];
pub const MCONST: Chunk = 0x3;

// hifive Curve
pub const CURVE_COF_I: isize = 8;
pub const CURVE_B_I: isize = 11111;
pub const CURVE_COF: [Chunk; NLEN] = [0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0];
pub const CURVE_B: [Chunk; NLEN] = [
    0x2B67, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
];
pub const CURVE_ORDER: [Chunk; NLEN] = [
    0x1E9FA805, 0x197CACB9, 0x1E4EEA9E, 0x17AD70F, 0x1FA9850C, 0x38A0A, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4000,
];
pub const CURVE_GX: [Chunk; NLEN] = [0xC, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0];
pub const CURVE_GY: [Chunk; NLEN] = [
    0x5FE8632, 0x15F63428, 0xD976C4, 0x1AACA194, 0x35B6DB5, 0x8E3F7A, 0x52D1B0E, 0xF0A7A36,
    0x1C161D00, 0x8170C70, 0x1185AD59, 0x181B,
];
pub const CURVE_HTPC:[Chunk;NLEN]=[0x5531622,0x11FEDF60,0x182A7392,0x16BAC746,0x1A3512D9,0x49580D5,0xE77C13C,0x1AAC2086,0x1E3A6A5,0x2B61FB8,0x783F9C2,0x6C0];
