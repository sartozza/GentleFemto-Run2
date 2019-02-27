/*
 * CandidateCounter.h
 *
 *  Created on: Feb 27, 2019
 *      Author: schmollweger
 */

#ifndef FORGIVINGQA_CANDIDATECOUNTER_H_
#define FORGIVINGQA_CANDIDATECOUNTER_H_
#include "ForgivingReader.h"
class CandidateCounter {
 public:
  CandidateCounter();
  virtual ~CandidateCounter();
  void SetNumberOfCandidates(ForgivingReader* reader);
  void ResetCounter() {
    fnTracks = 0;
    fnv0s = 0;
    fnCascades = 0;
  }
  int GetNumberOfTracks() {return fnTracks;};
  int GetNumberOfV0s() {return fnv0s;};
  int GetNumberOfCascades() {return fnCascades;};
 private:
  int fnTracks;
  int fnv0s;
  int fnCascades;
};

#endif /* FORGIVINGQA_CANDIDATECOUNTER_H_ */
