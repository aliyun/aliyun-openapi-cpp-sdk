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

#include <alibabacloud/cloud-siem/model/PostCustomizeRuleTestRequest.h>

using AlibabaCloud::Cloud_siem::Model::PostCustomizeRuleTestRequest;

PostCustomizeRuleTestRequest::PostCustomizeRuleTestRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "PostCustomizeRuleTest") {
  setMethod(HttpRequest::Method::Post);
}

PostCustomizeRuleTestRequest::~PostCustomizeRuleTestRequest() {}

long PostCustomizeRuleTestRequest::getRoleFor() const {
  return roleFor_;
}

void PostCustomizeRuleTestRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string PostCustomizeRuleTestRequest::getRegionId() const {
  return regionId_;
}

void PostCustomizeRuleTestRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int PostCustomizeRuleTestRequest::getRoleType() const {
  return roleType_;
}

void PostCustomizeRuleTestRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long PostCustomizeRuleTestRequest::getId() const {
  return id_;
}

void PostCustomizeRuleTestRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string PostCustomizeRuleTestRequest::getSimulatedData() const {
  return simulatedData_;
}

void PostCustomizeRuleTestRequest::setSimulatedData(const std::string &simulatedData) {
  simulatedData_ = simulatedData;
  setBodyParameter(std::string("SimulatedData"), simulatedData);
}

std::string PostCustomizeRuleTestRequest::getTestType() const {
  return testType_;
}

void PostCustomizeRuleTestRequest::setTestType(const std::string &testType) {
  testType_ = testType;
  setBodyParameter(std::string("TestType"), testType);
}

