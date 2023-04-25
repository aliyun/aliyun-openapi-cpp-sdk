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

#include <alibabacloud/ccc/model/CreateContactFlowRequest.h>

using AlibabaCloud::CCC::Model::CreateContactFlowRequest;

CreateContactFlowRequest::CreateContactFlowRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "CreateContactFlow") {
  setMethod(HttpRequest::Method::Post);
}

CreateContactFlowRequest::~CreateContactFlowRequest() {}

std::string CreateContactFlowRequest::getDescription() const {
  return description_;
}

void CreateContactFlowRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateContactFlowRequest::getType() const {
  return type_;
}

void CreateContactFlowRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateContactFlowRequest::getInstanceId() const {
  return instanceId_;
}

void CreateContactFlowRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateContactFlowRequest::getName() const {
  return name_;
}

void CreateContactFlowRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateContactFlowRequest::getDefinition() const {
  return definition_;
}

void CreateContactFlowRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setParameter(std::string("Definition"), definition);
}

