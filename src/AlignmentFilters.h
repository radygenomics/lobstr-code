/*
Copyright (C) 2014 Thomas Willems <twillems@mit.edu>

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


#ifndef SRC_ALIGNMENTFILTERS_H_
#define SRC_ALIGNMENTFILTERS_H_

#include <string>
#include <vector>

#include "src/AlignedRead.h"

namespace AlignmentFilters {
  /* Returns the vector of CigarOps corresponding to the CIGAR string. */
  std::vector<BamTools::CigarOp> GetCigarOps(std::string cigar_string);
  
  /* Returns the CIGAR string corresponding to the vector of CigarOps. */
  std::string GetCigarString(std::vector<BamTools::CigarOp>& cigar_ops); 
  
  /* Length of perfect base matches at 5' and 3' end of read. */
  std::pair<int,int> GetNumEndMatches(AlignedRead* aln, const std::string& ref_seq, int ref_seq_start);
  
  /* Minimum distances from 5' and 3' end of reads to first indel. If no such indel exists, returns (-1,-1). */
  std::pair<int,int> GetEndDistToIndel(AlignedRead* aln);

  /* Returns true iff the alignment ends match maximally compared to other positions within the specified window. */
  bool HasLargestEndMatches(AlignedRead* aln, const std::string& ref_seq, int ref_seq_start, int max_upstream, int max_downstream);
}

#endif
