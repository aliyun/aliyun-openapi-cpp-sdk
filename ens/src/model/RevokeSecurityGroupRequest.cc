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

#include <alibabacloud/ens/model/RevokeSecurityGroupRequest.h>

using AlibabaCloud::Ens::Model::RevokeSecurityGroupRequest;

RevokeSecurityGroupRequest::RevokeSecurityGroupRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RevokeSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

RevokeSecurityGroupRequest::~RevokeSecurityGroupRequest() {}

std::string RevokeSecurityGroupRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void RevokeSecurityGroupRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string RevokeSecurityGroupRequest::getPortRange() const {
  return portRange_;
}

void RevokeSecurityGroupRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string RevokeSecurityGroupRequest::getIpProtocol() const {
  return ipProtocol_;
}

void RevokeSecurityGroupRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string RevokeSecurityGroupRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void RevokeSecurityGroupRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

int RevokeSecurityGroupRequest::getPriority() const {
  return priority_;
}

void RevokeSecurityGroupRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string RevokeSecurityGroupRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void RevokeSecurityGroupRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string RevokeSecurityGroupRequest::getPolicy() const {
  return policy_;
}

void RevokeSecurityGroupRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

