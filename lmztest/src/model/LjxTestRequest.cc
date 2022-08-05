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

#include <alibabacloud/lmztest/model/LjxTestRequest.h>

using AlibabaCloud::LmzTest::Model::LjxTestRequest;

LjxTestRequest::LjxTestRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "LjxTest") {
  setMethod(HttpRequest::Method::Post);
}

LjxTestRequest::~LjxTestRequest() {}

std::string LjxTestRequest::getNewparam2() const {
  return newparam2_;
}

void LjxTestRequest::setNewparam2(const std::string &newparam2) {
  newparam2_ = newparam2;
  setParameter(std::string("new-param-2"), newparam2);
}

std::vector<LjxTestRequest::std::string> LjxTestRequest::getNewparam1() const {
  return newparam1_;
}

void LjxTestRequest::setNewparam1(const std::vector<LjxTestRequest::std::string> &newparam1) {
  newparam1_ = newparam1;
  for(int dep1 = 0; dep1 != newparam1.size(); dep1++) {
    setParameter(std::string("new-param-1") + "." + std::to_string(dep1 + 1), newparam1[dep1]);
  }
}

std::map<std::string, std::string> LjxTestRequest::getCode() const {
  return code_;
}

void LjxTestRequest::setCode(const std::map<std::string, std::string> &code) {
  code_ = code;
  for(auto const &iter1 : code) {
    setParameter(std::string("code") + "." + iter1.first, iter1.second);
  }
}

std::string LjxTestRequest::getId() const {
  return id_;
}

void LjxTestRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("id"), id);
}

std::string LjxTestRequest::getBody() const {
  return body_;
}

void LjxTestRequest::setBody(const std::string &body) {
  body_ = body;
  setHeader(std::string("body"), body);
}

