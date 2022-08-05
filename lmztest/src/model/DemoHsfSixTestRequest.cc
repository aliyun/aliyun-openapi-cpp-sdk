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

#include <alibabacloud/lmztest/model/DemoHsfSixTestRequest.h>

using AlibabaCloud::LmzTest::Model::DemoHsfSixTestRequest;

DemoHsfSixTestRequest::DemoHsfSixTestRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "DemoHsfSixTest") {
  setMethod(HttpRequest::Method::Post);
}

DemoHsfSixTestRequest::~DemoHsfSixTestRequest() {}

std::vector<DemoHsfSixTestRequest::std::map<std::string, std::map<std::string, ObjectOfAny>>> DemoHsfSixTestRequest::getStrListMap() const {
  return strListMap_;
}

void DemoHsfSixTestRequest::setStrListMap(const std::vector<DemoHsfSixTestRequest::std::map<std::string, std::map<std::string, ObjectOfAny>>> &strListMap) {
  strListMap_ = strListMap;
  for(int dep1 = 0; dep1 != strListMap.size(); dep1++) {
    for(auto const &iter2 : strListMap[dep1]) {
      for(auto const &iter3 : iter2.second) {
        setBodyParameter(std::string("StrListMap") + "." + std::to_string(dep1 + 1) + "." + iter2.first + "." + iter3.first, std::to_string(iter3.second));
      }
    }
  }
}

std::string DemoHsfSixTestRequest::getData() const {
  return data_;
}

void DemoHsfSixTestRequest::setData(const std::string &data) {
  data_ = data;
  setBodyParameter(std::string("Data"), data);
}

std::string DemoHsfSixTestRequest::getMap() const {
  return map_;
}

void DemoHsfSixTestRequest::setMap(const std::string &map) {
  map_ = map;
  setBodyParameter(std::string("Map"), map);
}

std::map<std::string, DemoHsfSixTestRequest::codeMap> DemoHsfSixTestRequest::getCodeMap() const {
  return codeMap_;
}

void DemoHsfSixTestRequest::setCodeMap(const std::map<std::string, DemoHsfSixTestRequest::codeMap> &codeMap) {
  codeMap_ = codeMap;
  for(auto const &iter1 : codeMap) {
    setParameter(std::string("codeMap") + "." + iter1.first + ".Name", iter1.second.name);
    setParameter(std::string("codeMap") + "." + iter1.first + ".Id", iter1.second.id);
  }
}

