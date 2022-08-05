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

#include <alibabacloud/lmztest/model/DemoGrayReleaseTestTwoRequest.h>

using AlibabaCloud::LmzTest::Model::DemoGrayReleaseTestTwoRequest;

DemoGrayReleaseTestTwoRequest::DemoGrayReleaseTestTwoRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "DemoGrayReleaseTestTwo") {
  setMethod(HttpRequest::Method::Post);
}

DemoGrayReleaseTestTwoRequest::~DemoGrayReleaseTestTwoRequest() {}

std::string DemoGrayReleaseTestTwoRequest::getNumberCode() const {
  return numberCode_;
}

void DemoGrayReleaseTestTwoRequest::setNumberCode(const std::string &numberCode) {
  numberCode_ = numberCode;
  setParameter(std::string("NumberCode"), numberCode);
}

long DemoGrayReleaseTestTwoRequest::getCode() const {
  return code_;
}

void DemoGrayReleaseTestTwoRequest::setCode(long code) {
  code_ = code;
  setParameter(std::string("Code"), std::to_string(code));
}

