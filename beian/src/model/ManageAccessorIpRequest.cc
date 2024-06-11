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

#include <alibabacloud/beian/model/ManageAccessorIpRequest.h>

using AlibabaCloud::Beian::Model::ManageAccessorIpRequest;

ManageAccessorIpRequest::ManageAccessorIpRequest()
    : RpcServiceRequest("beian", "2016-08-10", "ManageAccessorIp") {
  setMethod(HttpRequest::Method::Post);
}

ManageAccessorIpRequest::~ManageAccessorIpRequest() {}

std::string ManageAccessorIpRequest::getIp() const {
  return ip_;
}

void ManageAccessorIpRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string ManageAccessorIpRequest::getRemark() const {
  return remark_;
}

void ManageAccessorIpRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ManageAccessorIpRequest::getCaller() const {
  return caller_;
}

void ManageAccessorIpRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

int ManageAccessorIpRequest::getIpVersion() const {
  return ipVersion_;
}

void ManageAccessorIpRequest::setIpVersion(int ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), std::to_string(ipVersion));
}

std::string ManageAccessorIpRequest::getOperation() const {
  return operation_;
}

void ManageAccessorIpRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

