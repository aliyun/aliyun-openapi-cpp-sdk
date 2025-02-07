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

#include <alibabacloud/wss/model/ModifyInstancePropertiesRequest.h>

using AlibabaCloud::Wss::Model::ModifyInstancePropertiesRequest;

ModifyInstancePropertiesRequest::ModifyInstancePropertiesRequest()
    : RpcServiceRequest("wss", "2021-12-21", "ModifyInstanceProperties") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstancePropertiesRequest::~ModifyInstancePropertiesRequest() {}

std::string ModifyInstancePropertiesRequest::getResourceType() const {
  return resourceType_;
}

void ModifyInstancePropertiesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ModifyInstancePropertiesRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstancePropertiesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<std::string> ModifyInstancePropertiesRequest::getInstanceIds() const {
  return instanceIds_;
}

void ModifyInstancePropertiesRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

std::string ModifyInstancePropertiesRequest::getValue() const {
  return value_;
}

void ModifyInstancePropertiesRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string ModifyInstancePropertiesRequest::getKey() const {
  return key_;
}

void ModifyInstancePropertiesRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

