// This is copyrighted software. More information is at the end of this file.
#pragma once

/* Thrown as an exception for canceling the emulation thread.
 */
struct EmuThreadCanceled
{ };

/* Dosbox doesn't have a top-level main loop that we can use, so instead we run it in its own thread
 * and switch between it and the main thread. Calling this function will block the current thread
 * and unblock the other.
 */
void switchThread();

/* Change current thread synchronization mode. If true, use a spinlock. If false, use condition
 * variables. Can be called from either the main thread or the emulation thread.
 */
void useSpinlockThreadSync(bool use_spinlock);

/*

Copyright (C) 2019 Nikos Chantziaras.

This file is part of DOSBox-core.

DOSBox-core is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 2 of the License, or (at your option) any later
version.

DOSBox-core is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
DOSBox-core. If not, see <https://www.gnu.org/licenses/>.

*/
