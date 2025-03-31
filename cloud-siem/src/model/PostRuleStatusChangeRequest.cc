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

#include <alibabacloud/cloud-siem/model/PostRuleStatusChangeRequest.h>

using AlibabaCloud::Cloud_siem::Model::PostRuleStatusChangeRequest;

PostRuleStatusChangeRequest::PostRuleStatusChangeRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "PostRuleStatusChange") {
  setMethod(HttpRequest::Method::Post);
}

PostRuleStatusChangeRequest::~PostRuleStatusChangeRequest() {}

long PostRuleStatusChangeRequest::getRoleFor() const {
  return roleFor_;
}

void PostRuleStatusChangeRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string PostRuleStatusChangeRequest::getRegionId() const {
  return regionId_;
}

void PostRuleStatusChangeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int PostRuleStatusChangeRequest::getRoleType() const {
  return roleType_;
}

void PostRuleStatusChangeRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string PostRuleStatusChangeRequest::getRuleType() const {
  return ruleType_;
}

void PostRuleStatusChangeRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setBodyParameter(std::string("RuleType"), ruleType);
}

std::string PostRuleStatusChangeRequest::getIds() const {
  return ids_;
}

void PostRuleStatusChangeRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setBodyParameter(std::string("Ids"), ids);
}

bool PostRuleStatusChangeRequest::getInUse() const {
  return inUse_;
}

void PostRuleStatusChangeRequest::setInUse(bool inUse) {
  inUse_ = inUse;
  setBodyParameter(std::string("InUse"), inUse ? "true" : "false");
}

