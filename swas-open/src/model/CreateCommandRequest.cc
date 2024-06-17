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

#include <alibabacloud/swas-open/model/CreateCommandRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::CreateCommandRequest;

CreateCommandRequest::CreateCommandRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "CreateCommand") {
  setMethod(HttpRequest::Method::Post);
}

CreateCommandRequest::~CreateCommandRequest() {}

std::string CreateCommandRequest::getWorkingDir() const {
  return workingDir_;
}

void CreateCommandRequest::setWorkingDir(const std::string &workingDir) {
  workingDir_ = workingDir;
  setParameter(std::string("WorkingDir"), workingDir);
}

std::string CreateCommandRequest::getDescription() const {
  return description_;
}

void CreateCommandRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateCommandRequest::getType() const {
  return type_;
}

void CreateCommandRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateCommandRequest::getCommandContent() const {
  return commandContent_;
}

void CreateCommandRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

long CreateCommandRequest::getTimeout() const {
  return timeout_;
}

void CreateCommandRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string CreateCommandRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCommandRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateCommandRequest::getRegionId() const {
  return regionId_;
}

void CreateCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateCommandRequest::Tag> CreateCommandRequest::getTag() const {
  return tag_;
}

void CreateCommandRequest::setTag(const std::vector<CreateCommandRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateCommandRequest::getName() const {
  return name_;
}

void CreateCommandRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool CreateCommandRequest::getEnableParameter() const {
  return enableParameter_;
}

void CreateCommandRequest::setEnableParameter(bool enableParameter) {
  enableParameter_ = enableParameter;
  setParameter(std::string("EnableParameter"), enableParameter ? "true" : "false");
}

