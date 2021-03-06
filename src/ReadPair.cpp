/*
Copyright (C) 2011-2014 Melissa Gymrek <mgymrek@mit.edu>

This file is part of lobSTR.

lobSTR is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

lobSTR is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with lobSTR.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "src/ReadPair.h"

ReadPair::ReadPair() {};
ReadPair::~ReadPair() {};

void ReadPair::ResetAlignmentFlags() {
  read1_passed_alignment = false;
  read2_passed_alignment = false;
  found_unique_alignment = false;
  aligned_read_num = -1;
  alternate_mappings = "";
  other_spanned_strs = "";
}
