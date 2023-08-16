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

#include <alibabacloud/csas/model/CreateUserGroupRequest.h>

using AlibabaCloud::Csas::Model::CreateUserGroupRequest;

CreateUserGroupRequest::CreateUserGroupRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateUserGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateUserGroupRequest::~CreateUserGroupRequest() {}

std::string CreateUserGroupRequest::getDescription() const {
  return description_;
}

void CreateUserGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateUserGroupRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateUserGroupRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateUserGroupRequest::getName() const {
  return name_;
}

void CreateUserGroupRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::vector<CreateUserGroupRequest::Attributes> CreateUserGroupRequest::getAttributes() const {
  return attributes_;
}

void CreateUserGroupRequest::setAttributes(const std::vector<CreateUserGroupRequest::Attributes> &attributes) {
  attributes_ = attributes;
  for(int dep1 = 0; dep1 != attributes.size(); dep1++) {
    setBodyParameter(std::string("Attributes") + "." + std::to_string(dep1 + 1) + ".UserGroupType", attributes[dep1].userGroupType);
    setBodyParameter(std::string("Attributes") + "." + std::to_string(dep1 + 1) + ".IdpId", std::to_string(attributes[dep1].idpId));
    setBodyParameter(std::string("Attributes") + "." + std::to_string(dep1 + 1) + ".Value", attributes[dep1].value);
    setBodyParameter(std::string("Attributes") + "." + std::to_string(dep1 + 1) + ".Relation", attributes[dep1].relation);
  }
}

