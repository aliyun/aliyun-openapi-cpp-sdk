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

#include <alibabacloud/fnf/model/CreateFlowRequest.h>

using AlibabaCloud::Fnf::Model::CreateFlowRequest;

CreateFlowRequest::CreateFlowRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "CreateFlow") {
  setMethod(HttpRequest::Method::Post);
}

CreateFlowRequest::~CreateFlowRequest() {}

std::string CreateFlowRequest::getDescription() const {
  return description_;
}

void CreateFlowRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateFlowRequest::getType() const {
  return type_;
}

void CreateFlowRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string CreateFlowRequest::getRoleArn() const {
  return roleArn_;
}

void CreateFlowRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setBodyParameter(std::string("RoleArn"), roleArn);
}

std::string CreateFlowRequest::getName() const {
  return name_;
}

void CreateFlowRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateFlowRequest::getDefinition() const {
  return definition_;
}

void CreateFlowRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setBodyParameter(std::string("Definition"), definition);
}

std::string CreateFlowRequest::getExternalStorageLocation() const {
  return externalStorageLocation_;
}

void CreateFlowRequest::setExternalStorageLocation(const std::string &externalStorageLocation) {
  externalStorageLocation_ = externalStorageLocation;
  setBodyParameter(std::string("ExternalStorageLocation"), externalStorageLocation);
}

std::string CreateFlowRequest::getExecutionMode() const {
  return executionMode_;
}

void CreateFlowRequest::setExecutionMode(const std::string &executionMode) {
  executionMode_ = executionMode;
  setBodyParameter(std::string("ExecutionMode"), executionMode);
}

