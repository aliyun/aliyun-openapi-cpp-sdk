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

#include <alibabacloud/beian/model/ManageAccessorDomainWhiteListRequest.h>

using AlibabaCloud::Beian::Model::ManageAccessorDomainWhiteListRequest;

ManageAccessorDomainWhiteListRequest::ManageAccessorDomainWhiteListRequest()
    : RpcServiceRequest("beian", "2016-08-10", "ManageAccessorDomainWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

ManageAccessorDomainWhiteListRequest::~ManageAccessorDomainWhiteListRequest() {}

std::string ManageAccessorDomainWhiteListRequest::getEndTime() const {
  return endTime_;
}

void ManageAccessorDomainWhiteListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::vector<std::string> ManageAccessorDomainWhiteListRequest::getDomains() const {
  return domains_;
}

void ManageAccessorDomainWhiteListRequest::setDomains(const std::vector<std::string> &domains) {
  domains_ = domains;
}

std::string ManageAccessorDomainWhiteListRequest::getRemark() const {
  return remark_;
}

void ManageAccessorDomainWhiteListRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ManageAccessorDomainWhiteListRequest::getStartTime() const {
  return startTime_;
}

void ManageAccessorDomainWhiteListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ManageAccessorDomainWhiteListRequest::getCaller() const {
  return caller_;
}

void ManageAccessorDomainWhiteListRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string ManageAccessorDomainWhiteListRequest::getOperation() const {
  return operation_;
}

void ManageAccessorDomainWhiteListRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

