/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
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

#include <alibabacloud/lmztest/model/AndBackRequest.h>

using AlibabaCloud::LmzTest::Model::AndBackRequest;

AndBackRequest::AndBackRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "AndBack") {
  setMethod(HttpRequest::Method::Get);
}

AndBackRequest::~AndBackRequest() {}

std::string AndBackRequest::getClientToken2() const {
  return clientToken2_;
}

void AndBackRequest::setClientToken2(const std::string &clientToken2) {
  clientToken2_ = clientToken2;
  setParameter(std::string("ClientToken2"), clientToken2);
}

std::string AndBackRequest::getTestDemo() const {
  return testDemo_;
}

void AndBackRequest::setTestDemo(const std::string &testDemo) {
  testDemo_ = testDemo;
  setParameter(std::string("TestDemo"), testDemo);
}

