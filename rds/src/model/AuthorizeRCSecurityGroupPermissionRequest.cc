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

#include <alibabacloud/rds/model/AuthorizeRCSecurityGroupPermissionRequest.h>

using AlibabaCloud::Rds::Model::AuthorizeRCSecurityGroupPermissionRequest;

AuthorizeRCSecurityGroupPermissionRequest::AuthorizeRCSecurityGroupPermissionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "AuthorizeRCSecurityGroupPermission") {
  setMethod(HttpRequest::Method::Post);
}

AuthorizeRCSecurityGroupPermissionRequest::~AuthorizeRCSecurityGroupPermissionRequest() {}

std::string AuthorizeRCSecurityGroupPermissionRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void AuthorizeRCSecurityGroupPermissionRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string AuthorizeRCSecurityGroupPermissionRequest::getRegionId() const {
  return regionId_;
}

void AuthorizeRCSecurityGroupPermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions> AuthorizeRCSecurityGroupPermissionRequest::getSecurityGroupPermissions() const {
  return securityGroupPermissions_;
}

void AuthorizeRCSecurityGroupPermissionRequest::setSecurityGroupPermissions(const std::vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions> &securityGroupPermissions) {
  securityGroupPermissions_ = securityGroupPermissions;
  for(int dep1 = 0; dep1 != securityGroupPermissions.size(); dep1++) {
    setParameter(std::string("SecurityGroupPermissions") + "." + std::to_string(dep1 + 1) + ".SourcePortRange", securityGroupPermissions[dep1].sourcePortRange);
    setParameter(std::string("SecurityGroupPermissions") + "." + std::to_string(dep1 + 1) + ".PortRange", securityGroupPermissions[dep1].portRange);
    setParameter(std::string("SecurityGroupPermissions") + "." + std::to_string(dep1 + 1) + ".IpProtocol", securityGroupPermissions[dep1].ipProtocol);
    setParameter(std::string("SecurityGroupPermissions") + "." + std::to_string(dep1 + 1) + ".SourceCidrIp", securityGroupPermissions[dep1].sourceCidrIp);
    setParameter(std::string("SecurityGroupPermissions") + "." + std::to_string(dep1 + 1) + ".Priority", std::to_string(securityGroupPermissions[dep1].priority));
    setParameter(std::string("SecurityGroupPermissions") + "." + std::to_string(dep1 + 1) + ".DestCidrIp", securityGroupPermissions[dep1].destCidrIp);
    setParameter(std::string("SecurityGroupPermissions") + "." + std::to_string(dep1 + 1) + ".Policy", securityGroupPermissions[dep1].policy);
  }
}

std::string AuthorizeRCSecurityGroupPermissionRequest::getDirection() const {
  return direction_;
}

void AuthorizeRCSecurityGroupPermissionRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

