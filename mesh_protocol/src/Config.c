/* Copyright (c) 2022-23 California Institute of Technology (Caltech).
 * U.S. Government sponsorship acknowledged.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 * - Neither the name of Caltech nor its operating division,
 *   the Jet Propulsion Laboratory, nor the names of its contributors may be
 *   used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Open Source License Approved by Caltech/JPL
 *
 * APACHE LICENSE, VERSION 2.0
 * - Text version: https://www.apache.org/licenses/LICENSE-2.0.txt
 * - SPDX short identifier: Apache-2.0
 * - OSI Approved License: https://opensource.org/licenses/Apache-2.0
 */

#include "../include/Config.h"

Config Config_Create() {
  Config self = calloc(1, sizeof(ConfigStruct));

  // all time values in time tics
  // 4 nodes:
  self->frameLength = 10000;
  self->slotLength = 2500;
  self->slotGoal = 1;
  self->initialPingUpperLimit = 10000;
  self->initialWaitTime = 10000;
  self->guardPeriodLength = 500;
  self->networkAgeToleranceSameNetwork = 490;
  self->rangingTimeOut = 500;
  self->slotExpirationTimeOut = 12500;
  self->ownSlotExpirationTimeOut = 22500; 
  self->absentNeighborTimeOut = 15000; 
  self->rangingRefreshTime = 2500; 
  self->occupiedTimeout = 20000;
  self->occupiedToFreeTimeoutMultiHop = 12500;
  self->collidingTimeoutMultiHop = 10000;
  self->collidingTimeout = 2500;

  //// 6 nodes:
  //self->frameLength = 2400;
  //self->slotLength = 400;
  //self->slotGoal = 1;
  //self->initialPingUpperLimit = 10000;
  //self->initialWaitTime = 2400;
  //self->guardPeriodLength = 50;
  //self->networkAgeToleranceSameNetwork = 49; 
  //self->rangingTimeOut = 500;
  //self->slotExpirationTimeOut = 2800;
  //self->ownSlotExpirationTimeOut = 4800; 
  //self->absentNeighborTimeOut = 3600; 
  //self->rangingRefreshTime = 2500; 
  //self->occupiedTimeout = 4800;
  //self->occupiedToFreeTimeoutMultiHop = 2800;
  //self->collidingTimeoutMultiHop = 2400;
  //self->collidingTimeout = 400;


  self->sleepFrames = 0;
  self->wakeFrames = 0; // only relevant if sleepFrames set

  return self;
};
