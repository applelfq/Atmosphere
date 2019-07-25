/*
 * Copyright (c) 2019 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "traps.h"

void doSystemRegisterRead(ExceptionStackFrame *frame, u32 iss, u32 reg1, u32 reg2);
void doSystemRegisterWrite(ExceptionStackFrame *frame, u32 iss, u32 reg1, u32 reg2);

void handleMsrMrsTrap(ExceptionStackFrame *frame, ExceptionSyndromeRegister esr);
void handleMcrMrcTrap(ExceptionStackFrame *frame, ExceptionSyndromeRegister esr);
void handleMcrrMrrcTrap(ExceptionStackFrame *frame, ExceptionSyndromeRegister esr);
void handleLdcStcTrap(ExceptionStackFrame *frame, ExceptionSyndromeRegister esr);
