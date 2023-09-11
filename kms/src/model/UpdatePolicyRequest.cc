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

#include <alibabacloud/kms/model/UpdatePolicyRequest.h>

using AlibabaCloud::Kms::Model::UpdatePolicyRequest;

UpdatePolicyRequest::UpdatePolicyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "UpdatePolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePolicyRequest::~UpdatePolicyRequest() {}

std::string UpdatePolicyRequest::getAccessControlRules() const {
  return accessControlRules_;
}

void UpdatePolicyRequest::setAccessControlRules(const std::string &accessControlRules) {
  accessControlRules_ = accessControlRules;
  setParameter(std::string("AccessControlRules"), accessControlRules);
}

std::string UpdatePolicyRequest::getResources() const {
  return resources_;
}

void UpdatePolicyRequest::setResources(const std::string &resources) {
  resources_ = resources;
  setParameter(std::string("Resources"), resources);
}

std::string UpdatePolicyRequest::getDescription() const {
  return description_;
}

void UpdatePolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdatePolicyRequest::getPermissions() const {
  return permissions_;
}

void UpdatePolicyRequest::setPermissions(const std::string &permissions) {
  permissions_ = permissions;
  setParameter(std::string("Permissions"), permissions);
}

std::string UpdatePolicyRequest::getName() const {
  return name_;
}

void UpdatePolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

