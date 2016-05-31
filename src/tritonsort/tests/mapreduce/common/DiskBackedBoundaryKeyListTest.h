#ifndef THEMIS_DISK_BACKED_BOUNDARY_KEY_LIST_TEST_H
#define THEMIS_DISK_BACKED_BOUNDARY_KEY_LIST_TEST_H

#include "gtest/gtest.h"

class DiskBackedBoundaryKeyList;

class DiskBackedBoundaryKeyListTest : public ::testing::Test {
protected:
  DiskBackedBoundaryKeyList* newTestKeyList(uint64_t numPartitions);
  void validateTestKeyList(
    DiskBackedBoundaryKeyList* boundaryKeyList, uint64_t numPartitions);
};

#endif // THEMIS_DISK_BACKED_BOUNDARY_KEY_LIST_TEST_H
