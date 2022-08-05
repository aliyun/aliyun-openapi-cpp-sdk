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

#include <alibabacloud/lmztest/model/DemoGreyReleaseTestRequest.h>

using AlibabaCloud::LmzTest::Model::DemoGreyReleaseTestRequest;

DemoGreyReleaseTestRequest::DemoGreyReleaseTestRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "DemoGreyReleaseTest") {
  setMethod(HttpRequest::Method::Post);
}

DemoGreyReleaseTestRequest::~DemoGreyReleaseTestRequest() {}

long DemoGreyReleaseTestRequest::getNumber() const {
  return number_;
}

void DemoGreyReleaseTestRequest::setNumber(long number) {
  number_ = number;
  setParameter(std::string("Number"), std::to_string(number));
}

