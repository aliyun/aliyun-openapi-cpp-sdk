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

#include <alibabacloud/ft/model/CreateInsRequest.h>

using AlibabaCloud::Ft::Model::CreateInsRequest;

CreateInsRequest::CreateInsRequest()
    : RpcServiceRequest("ft", "2015-03-03", "CreateIns") {
  setMethod(HttpRequest::Method::Post);
}

CreateInsRequest::~CreateInsRequest() {}

std::string CreateInsRequest::getNewparam1() const {
  return newparam1_;
}

void CreateInsRequest::setNewparam1(const std::string &newparam1) {
  newparam1_ = newparam1;
  setParameter(std::string("new-param-1"), newparam1);
}

std::string CreateInsRequest::getBind() const {
  return bind_;
}

void CreateInsRequest::setBind(const std::string &bind) {
  bind_ = bind;
  setParameter(std::string("Bind"), bind);
}

std::string CreateInsRequest::getTest() const {
  return test_;
}

void CreateInsRequest::setTest(const std::string &test) {
  test_ = test;
  setParameter(std::string("Test"), test);
}

std::string CreateInsRequest::getSuccess() const {
  return success_;
}

void CreateInsRequest::setSuccess(const std::string &success) {
  success_ = success;
  setParameter(std::string("Success"), success);
}

std::string CreateInsRequest::getTime() const {
  return time_;
}

void CreateInsRequest::setTime(const std::string &time) {
  time_ = time;
  setParameter(std::string("Time"), time);
}

std::string CreateInsRequest::getNewPala() const {
  return newPala_;
}

void CreateInsRequest::setNewPala(const std::string &newPala) {
  newPala_ = newPala;
  setParameter(std::string("NewPala"), newPala);
}

