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

#include <alibabacloud/ens/model/AuthorizeSecurityGroupRequest.h>

using AlibabaCloud::Ens::Model::AuthorizeSecurityGroupRequest;

AuthorizeSecurityGroupRequest::AuthorizeSecurityGroupRequest()
    : RpcServiceRequest("ens", "2017-11-10", "AuthorizeSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

AuthorizeSecurityGroupRequest::~AuthorizeSecurityGroupRequest() {}

std::string AuthorizeSecurityGroupRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void AuthorizeSecurityGroupRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string AuthorizeSecurityGroupRequest::getPortRange() const {
  return portRange_;
}

void AuthorizeSecurityGroupRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string AuthorizeSecurityGroupRequest::getIpProtocol() const {
  return ipProtocol_;
}

void AuthorizeSecurityGroupRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string AuthorizeSecurityGroupRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void AuthorizeSecurityGroupRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

int AuthorizeSecurityGroupRequest::getPriority() const {
  return priority_;
}

void AuthorizeSecurityGroupRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string AuthorizeSecurityGroupRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void AuthorizeSecurityGroupRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string AuthorizeSecurityGroupRequest::getPolicy() const {
  return policy_;
}

void AuthorizeSecurityGroupRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

