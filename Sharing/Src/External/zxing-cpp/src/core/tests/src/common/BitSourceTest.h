// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#ifndef __BIT_SOURCE_TEST_H__
#define __BIT_SOURCE_TEST_H__

/*
 *  BitSourceTest.h
 *  zxing
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <zxing/common/BitSource.h>

namespace zxing {
class BitSourceTest : public CPPUNIT_NS::TestFixture {
  CPPUNIT_TEST_SUITE(BitSourceTest);
  CPPUNIT_TEST(testSource);
  CPPUNIT_TEST_SUITE_END();

public:

protected:
  void testSource();

private:
};
}

#endif // __BIT_SOURCE_TEST_H__
