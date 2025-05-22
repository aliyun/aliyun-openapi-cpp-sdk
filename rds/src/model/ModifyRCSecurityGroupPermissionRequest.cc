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

#include <alibabacloud/rds/model/ModifyRCSecurityGroupPermissionRequest.h>

using AlibabaCloud::Rds::Model::ModifyRCSecurityGroupPermissionRequest;

ModifyRCSecurityGroupPermissionRequest::ModifyRCSecurityGroupPermissionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyRCSecurityGroupPermission") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRCSecurityGroupPermissionRequest::~ModifyRCSecurityGroupPermissionRequest() {}

std::string ModifyRCSecurityGroupPermissionRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void ModifyRCSecurityGroupPermissionRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string ModifyRCSecurityGroupPermissionRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifyRCSecurityGroupPermissionRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string ModifyRCSecurityGroupPermissionRequest::getRegionId() const {
  return regionId_;
}

void ModifyRCSecurityGroupPermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyRCSecurityGroupPermissionRequest::getDirection() const {
  return direction_;
}

void ModifyRCSecurityGroupPermissionRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string ModifyRCSecurityGroupPermissionRequest::getPolicy() const {
  return policy_;
}

void ModifyRCSecurityGroupPermissionRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string ModifyRCSecurityGroupPermissionRequest::getPortRange() const {
  return portRange_;
}

void ModifyRCSecurityGroupPermissionRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string ModifyRCSecurityGroupPermissionRequest::getIpProtocol() const {
  return ipProtocol_;
}

void ModifyRCSecurityGroupPermissionRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string ModifyRCSecurityGroupPermissionRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void ModifyRCSecurityGroupPermissionRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

std::string ModifyRCSecurityGroupPermissionRequest::getPriority() const {
  return priority_;
}

void ModifyRCSecurityGroupPermissionRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string ModifyRCSecurityGroupPermissionRequest::getDestCidrIp() const {
  return destCidrIp_;
}

void ModifyRCSecurityGroupPermissionRequest::setDestCidrIp(const std::string &destCidrIp) {
  destCidrIp_ = destCidrIp;
  setParameter(std::string("DestCidrIp"), destCidrIp);
}

std::string ModifyRCSecurityGroupPermissionRequest::getSecurityGroupRuleId() const {
  return securityGroupRuleId_;
}

void ModifyRCSecurityGroupPermissionRequest::setSecurityGroupRuleId(const std::string &securityGroupRuleId) {
  securityGroupRuleId_ = securityGroupRuleId;
  setParameter(std::string("SecurityGroupRuleId"), securityGroupRuleId);
}

