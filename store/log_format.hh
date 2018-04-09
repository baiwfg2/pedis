/*
* Pedis is free software: you can redistribute it and/or modify
* it under the terms of the GNU Affero General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* You may obtain a copy of the License at
*
*     http://www.gnu.org/licenses
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
* KIND, either express or implied.  See the License for the
* specific language governing permissions and limitations
* under the License.
*
*  Copyright (c) 2016-2026, Peng Jian, pengjian.uest@gmail.com. All rights reserved.
*
*/
#pragma once
namespace store {
enum record_type {
  zero   = 0,
  full   = 1,
  first  = 2,
  middle = 3,
  last   = 4,
};
static constexpr const int MAX_RECORD_TYPE = record_type::last;
static constexpr const int LOG_BLOCK_SIZE = 1024 * 32;
// Header is checksum (4 bytes), length (2 bytes), type (1 byte).
static constexpr const int HEADER_SIZE = 4 + 2 + 1;
}
