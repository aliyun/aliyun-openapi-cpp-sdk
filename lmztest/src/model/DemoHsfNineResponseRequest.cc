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

#include <alibabacloud/lmztest/model/DemoHsfNineResponseRequest.h>

using AlibabaCloud::LmzTest::Model::DemoHsfNineResponseRequest;

DemoHsfNineResponseRequest::DemoHsfNineResponseRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "DemoHsfNineResponse") {
  setMethod(HttpRequest::Method::Post);
}

DemoHsfNineResponseRequest::~DemoHsfNineResponseRequest() {}

std::string DemoHsfNineResponseRequest::getName() const {
  return name_;
}

void DemoHsfNineResponseRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

std::string DemoHsfNineResponseRequest::getTestF1() const {
  return testF1_;
}

void DemoHsfNineResponseRequest::setTestF1(const std::string &testF1) {
  testF1_ = testF1;
  setParameter(std::string("TestF1"), testF1);
}

std::map<std::string, DemoHsfNineResponseRequest::userMap> DemoHsfNineResponseRequest::getUserMap() const {
  return userMap_;
}

void DemoHsfNineResponseRequest::setUserMap(const std::map<std::string, DemoHsfNineResponseRequest::userMap> &userMap) {
  userMap_ = userMap;
  for(auto const &iter1 : userMap) {
    setParameter(std::string("userMap") + "." + iter1.first + ".Uaa", iter1.second.uaa);
    setParameter(std::string("userMap") + "." + iter1.first + ".Uas", iter1.second.uas);
    setParameter(std::string("userMap") + "." + iter1.first + ".name", iter1.second.name);
    setParameter(std::string("userMap") + "." + iter1.first + ".id", iter1.second.id);
  }
}

