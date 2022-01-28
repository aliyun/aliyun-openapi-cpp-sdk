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

#include <alibabacloud/ens/model/AuthorizeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ens::Model::AuthorizeSecurityGroupEgressRequest;

AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest()
    : RpcServiceRequest("ens", "2017-11-10", "AuthorizeSecurityGroupEgress") {
  setMethod(HttpRequest::Method::Post);
}

AuthorizeSecurityGroupEgressRequest::~AuthorizeSecurityGroupEgressRequest() {}

std::string AuthorizeSecurityGroupEgressRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void AuthorizeSecurityGroupEgressRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string AuthorizeSecurityGroupEgressRequest::getPortRange() const {
  return portRange_;
}

void AuthorizeSecurityGroupEgressRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpProtocol() const {
  return ipProtocol_;
}

void AuthorizeSecurityGroupEgressRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

int AuthorizeSecurityGroupEgressRequest::getPriority() const {
  return priority_;
}

void AuthorizeSecurityGroupEgressRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string AuthorizeSecurityGroupEgressRequest::getDestCidrIp() const {
  return destCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setDestCidrIp(const std::string &destCidrIp) {
  destCidrIp_ = destCidrIp;
  setParameter(std::string("DestCidrIp"), destCidrIp);
}

std::string AuthorizeSecurityGroupEgressRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string AuthorizeSecurityGroupEgressRequest::getPolicy() const {
  return policy_;
}

void AuthorizeSecurityGroupEgressRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

