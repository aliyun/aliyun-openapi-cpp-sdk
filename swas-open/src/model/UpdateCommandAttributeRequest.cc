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

#include <alibabacloud/swas-open/model/UpdateCommandAttributeRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::UpdateCommandAttributeRequest;

UpdateCommandAttributeRequest::UpdateCommandAttributeRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "UpdateCommandAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCommandAttributeRequest::~UpdateCommandAttributeRequest() {}

std::string UpdateCommandAttributeRequest::getWorkingDir() const {
  return workingDir_;
}

void UpdateCommandAttributeRequest::setWorkingDir(const std::string &workingDir) {
  workingDir_ = workingDir;
  setParameter(std::string("WorkingDir"), workingDir);
}

std::string UpdateCommandAttributeRequest::getDescription() const {
  return description_;
}

void UpdateCommandAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateCommandAttributeRequest::getCommandId() const {
  return commandId_;
}

void UpdateCommandAttributeRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

long UpdateCommandAttributeRequest::getTimeout() const {
  return timeout_;
}

void UpdateCommandAttributeRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string UpdateCommandAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateCommandAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateCommandAttributeRequest::getName() const {
  return name_;
}

void UpdateCommandAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

