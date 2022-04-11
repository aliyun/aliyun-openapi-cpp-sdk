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

#include <alibabacloud/vod/model/SetAuditSecurityIpRequest.h>

using AlibabaCloud::Vod::Model::SetAuditSecurityIpRequest;

SetAuditSecurityIpRequest::SetAuditSecurityIpRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SetAuditSecurityIp") {
  setMethod(HttpRequest::Method::Post);
}

SetAuditSecurityIpRequest::~SetAuditSecurityIpRequest() {}

std::string SetAuditSecurityIpRequest::getSecurityGroupName() const {
  return securityGroupName_;
}

void SetAuditSecurityIpRequest::setSecurityGroupName(const std::string &securityGroupName) {
  securityGroupName_ = securityGroupName;
  setParameter(std::string("SecurityGroupName"), securityGroupName);
}

std::string SetAuditSecurityIpRequest::getOperateMode() const {
  return operateMode_;
}

void SetAuditSecurityIpRequest::setOperateMode(const std::string &operateMode) {
  operateMode_ = operateMode;
  setParameter(std::string("OperateMode"), operateMode);
}

std::string SetAuditSecurityIpRequest::getIps() const {
  return ips_;
}

void SetAuditSecurityIpRequest::setIps(const std::string &ips) {
  ips_ = ips;
  setParameter(std::string("Ips"), ips);
}

