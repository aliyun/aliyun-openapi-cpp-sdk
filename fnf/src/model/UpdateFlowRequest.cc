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

#include <alibabacloud/fnf/model/UpdateFlowRequest.h>

using AlibabaCloud::Fnf::Model::UpdateFlowRequest;

UpdateFlowRequest::UpdateFlowRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "UpdateFlow") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFlowRequest::~UpdateFlowRequest() {}

std::string UpdateFlowRequest::getDescription() const {
  return description_;
}

void UpdateFlowRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateFlowRequest::getType() const {
  return type_;
}

void UpdateFlowRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string UpdateFlowRequest::getRoleArn() const {
  return roleArn_;
}

void UpdateFlowRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setBodyParameter(std::string("RoleArn"), roleArn);
}

std::string UpdateFlowRequest::getName() const {
  return name_;
}

void UpdateFlowRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateFlowRequest::getDefinition() const {
  return definition_;
}

void UpdateFlowRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setBodyParameter(std::string("Definition"), definition);
}

std::string UpdateFlowRequest::getExternalStorageLocation() const {
  return externalStorageLocation_;
}

void UpdateFlowRequest::setExternalStorageLocation(const std::string &externalStorageLocation) {
  externalStorageLocation_ = externalStorageLocation;
  setBodyParameter(std::string("ExternalStorageLocation"), externalStorageLocation);
}

