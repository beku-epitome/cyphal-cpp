/**
 * This software is distributed under the terms of the MIT License.
 * Contributors: https://github.com/107-systems/107-Arduino-Cyphal/graphs/contributors.
 */

#ifndef ARDUINO_CYPHAL_RXTRANSFER_HPP_
#define ARDUINO_CYPHAL_RXTRANSFER_HPP_

/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include "libcanard/canard.h"

struct RxTransfer : public CanardRxTransfer
{
  RxTransfer() : CanardRxTransfer() {}
};

#endif /* ARDUINO_CYPHAL_RXTRANSFER_HPP_ */
