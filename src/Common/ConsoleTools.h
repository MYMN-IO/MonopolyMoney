// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, The MonopolyMoney developers
//
// This file is part of MonopolyMoney.
//
// MonopolyMoney is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// MonopolyMoney is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with MonopolyMoney.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstdint>

namespace Common { namespace Console {

enum class Color : uint8_t {
  Default,

  Blue,
  Green,
  Red,
  Yellow,
  White,
  Cyan,
  Magenta,

  BrightBlue,
  BrightGreen,
  BrightRed,
  BrightYellow,
  BrightWhite,
  BrightCyan,
  BrightMagenta
};

void setTextColor(Color color);
bool isConsoleTty();

}}
