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

#include <alibabacloud/lmztest/model/AAbckRequest.h>

using AlibabaCloud::LmzTest::Model::AAbckRequest;

AAbckRequest::AAbckRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "AAbck") {
  setMethod(HttpRequest::Method::Get);
}

AAbckRequest::~AAbckRequest() {}

std::string AAbckRequest::getClientToken3() const {
  return clientToken3_;
}

void AAbckRequest::setClientToken3(const std::string &clientToken3) {
  clientToken3_ = clientToken3;
  setParameter(std::string("ClientToken3"), clientToken3);
}

std::string AAbckRequest::getTestDemo() const {
  return testDemo_;
}

void AAbckRequest::setTestDemo(const std::string &testDemo) {
  testDemo_ = testDemo;
  setParameter(std::string("TestDemo"), testDemo);
}

