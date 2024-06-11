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

#include <alibabacloud/beian/model/DeleteUnbeianIpCheckTypeRequest.h>

using AlibabaCloud::Beian::Model::DeleteUnbeianIpCheckTypeRequest;

DeleteUnbeianIpCheckTypeRequest::DeleteUnbeianIpCheckTypeRequest()
    : RpcServiceRequest("beian", "2016-08-10", "DeleteUnbeianIpCheckType") {
  setMethod(HttpRequest::Method::Post);
}

DeleteUnbeianIpCheckTypeRequest::~DeleteUnbeianIpCheckTypeRequest() {}

std::string DeleteUnbeianIpCheckTypeRequest::getIp() const {
  return ip_;
}

void DeleteUnbeianIpCheckTypeRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string DeleteUnbeianIpCheckTypeRequest::getRemark() const {
  return remark_;
}

void DeleteUnbeianIpCheckTypeRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

int DeleteUnbeianIpCheckTypeRequest::getCheckType() const {
  return checkType_;
}

void DeleteUnbeianIpCheckTypeRequest::setCheckType(int checkType) {
  checkType_ = checkType;
  setParameter(std::string("CheckType"), std::to_string(checkType));
}

std::string DeleteUnbeianIpCheckTypeRequest::getCaller() const {
  return caller_;
}

void DeleteUnbeianIpCheckTypeRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

