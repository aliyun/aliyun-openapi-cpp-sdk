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

#include <alibabacloud/lmztest/model/ReqBeanTestRequest.h>

using AlibabaCloud::LmzTest::Model::ReqBeanTestRequest;

ReqBeanTestRequest::ReqBeanTestRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "ReqBeanTest") {
  setMethod(HttpRequest::Method::Post);
}

ReqBeanTestRequest::~ReqBeanTestRequest() {}

std::vector<ReqBeanTestRequest::std::string> ReqBeanTestRequest::getCodes() const {
  return codes_;
}

void ReqBeanTestRequest::setCodes(const std::vector<ReqBeanTestRequest::std::string> &codes) {
  codes_ = codes;
  for(int dep1 = 0; dep1 != codes.size(); dep1++) {
    setParameter(std::string("codes") + "." + std::to_string(dep1 + 1), codes[dep1]);
  }
}

std::string ReqBeanTestRequest::getXhostheadertest() const {
  return xhostheadertest_;
}

void ReqBeanTestRequest::setXhostheadertest(const std::string &xhostheadertest) {
  xhostheadertest_ = xhostheadertest;
  setHeader(std::string("x-host-header-test"), xhostheadertest);
}

std::string ReqBeanTestRequest::getId() const {
  return id_;
}

void ReqBeanTestRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::vector<ReqBeanTestRequest::long> ReqBeanTestRequest::getNums() const {
  return nums_;
}

void ReqBeanTestRequest::setNums(const std::vector<ReqBeanTestRequest::long> &nums) {
  nums_ = nums;
  for(int dep1 = 0; dep1 != nums.size(); dep1++) {
    setParameter(std::string("nums") + "." + std::to_string(dep1 + 1), std::to_string(nums[dep1]));
  }
}

std::vector<ReqBeanTestRequest::users> ReqBeanTestRequest::getUsers() const {
  return users_;
}

void ReqBeanTestRequest::setUsers(const std::vector<ReqBeanTestRequest::users> &users) {
  users_ = users;
  for(int dep1 = 0; dep1 != users.size(); dep1++) {
    setParameter(std::string("users") + "." + std::to_string(dep1 + 1) + ".name", users[dep1].name);
    setParameter(std::string("users") + "." + std::to_string(dep1 + 1) + ".id", users[dep1].id);
  }
}

