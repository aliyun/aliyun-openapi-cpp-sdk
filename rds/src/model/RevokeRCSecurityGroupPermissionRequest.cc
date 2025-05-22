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

#include <alibabacloud/rds/model/RevokeRCSecurityGroupPermissionRequest.h>

using AlibabaCloud::Rds::Model::RevokeRCSecurityGroupPermissionRequest;

RevokeRCSecurityGroupPermissionRequest::RevokeRCSecurityGroupPermissionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RevokeRCSecurityGroupPermission") {
  setMethod(HttpRequest::Method::Post);
}

RevokeRCSecurityGroupPermissionRequest::~RevokeRCSecurityGroupPermissionRequest() {}

std::vector<RevokeRCSecurityGroupPermissionRequest::std::string> RevokeRCSecurityGroupPermissionRequest::getSecurityGroupRuleIdList() const {
  return securityGroupRuleIdList_;
}

void RevokeRCSecurityGroupPermissionRequest::setSecurityGroupRuleIdList(const std::vector<RevokeRCSecurityGroupPermissionRequest::std::string> &securityGroupRuleIdList) {
  securityGroupRuleIdList_ = securityGroupRuleIdList;
  for(int dep1 = 0; dep1 != securityGroupRuleIdList.size(); dep1++) {
    setParameter(std::string("SecurityGroupRuleIdList") + "." + std::to_string(dep1 + 1), securityGroupRuleIdList[dep1]);
  }
}

std::string RevokeRCSecurityGroupPermissionRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void RevokeRCSecurityGroupPermissionRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string RevokeRCSecurityGroupPermissionRequest::getRegionId() const {
  return regionId_;
}

void RevokeRCSecurityGroupPermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RevokeRCSecurityGroupPermissionRequest::getDirection() const {
  return direction_;
}

void RevokeRCSecurityGroupPermissionRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

