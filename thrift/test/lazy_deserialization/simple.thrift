/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

namespace cpp2 apache.thrift.test
namespace py3 apache.thrift.test

struct Foo {
  1: list<double> field1; // fast to skip in CompactProtocol
  2: list<i32> field2; // slow to skip in CompactProtocol
  3: list<double> field3; // fast to skip in CompactProtocol
  4: list<i32> field4; // slow to skip in CompactProtocol
}

// Identical to Foo, except field3 and field4 are lazy
struct LazyFoo {
  1: list<double> field1;
  2: list<i32> field2;
  3: list<double> field3 (cpp.experimental.lazy);
  4: list<i32> field4 (cpp.experimental.lazy);
}

struct LazyCppRef {
  1: optional list<i32> field1 (cpp.ref_type = "unique", cpp.experimental.lazy);
  2: optional list<i32> field2 (cpp.ref_type = "shared", cpp.experimental.lazy);
  3: optional list<i32> field3 (
    cpp.ref_type = "shared_const",
    cpp.experimental.lazy,
  );
}
