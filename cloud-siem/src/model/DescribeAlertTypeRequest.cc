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

#include <alibabacloud/cloud-siem/model/DescribeAlertTypeRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeAlertTypeRequest;

DescribeAlertTypeRequest::DescribeAlertTypeRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeAlertType") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertTypeRequest::~DescribeAlertTypeRequest() {}

long DescribeAlertTypeRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeAlertTypeRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeAlertTypeRequest::getRegionId() const {
  return regionId_;
}

void DescribeAlertTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeAlertTypeRequest::getRoleType() const {
  return roleType_;
}

void DescribeAlertTypeRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeAlertTypeRequest::getRuleType() const {
  return ruleType_;
}

void DescribeAlertTypeRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setBodyParameter(std::string("RuleType"), ruleType);
}

