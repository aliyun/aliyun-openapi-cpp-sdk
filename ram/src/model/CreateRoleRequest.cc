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

#include <alibabacloud/ram/model/CreateRoleRequest.h>

using AlibabaCloud::Ram::Model::CreateRoleRequest;

CreateRoleRequest::CreateRoleRequest()
    : RpcServiceRequest("ram", "2015-05-01", "CreateRole") {
  setMethod(HttpRequest::Method::Post);
}

CreateRoleRequest::~CreateRoleRequest() {}

std::string CreateRoleRequest::getDescription() const {
  return description_;
}

void CreateRoleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRoleRequest::getAssumeRolePolicyDocument() const {
  return assumeRolePolicyDocument_;
}

void CreateRoleRequest::setAssumeRolePolicyDocument(const std::string &assumeRolePolicyDocument) {
  assumeRolePolicyDocument_ = assumeRolePolicyDocument;
  setParameter(std::string("AssumeRolePolicyDocument"), assumeRolePolicyDocument);
}

std::vector<CreateRoleRequest::Tag> CreateRoleRequest::getTag() const {
  return tag_;
}

void CreateRoleRequest::setTag(const std::vector<CreateRoleRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

long CreateRoleRequest::getMaxSessionDuration() const {
  return maxSessionDuration_;
}

void CreateRoleRequest::setMaxSessionDuration(long maxSessionDuration) {
  maxSessionDuration_ = maxSessionDuration;
  setParameter(std::string("MaxSessionDuration"), std::to_string(maxSessionDuration));
}

std::string CreateRoleRequest::getRoleName() const {
  return roleName_;
}

void CreateRoleRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setParameter(std::string("RoleName"), roleName);
}

