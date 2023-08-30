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

#include <alibabacloud/swas-open/model/InvokeCommandRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::InvokeCommandRequest;

InvokeCommandRequest::InvokeCommandRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "InvokeCommand") {
  setMethod(HttpRequest::Method::Post);
}

InvokeCommandRequest::~InvokeCommandRequest() {}

std::string InvokeCommandRequest::getCommandId() const {
  return commandId_;
}

void InvokeCommandRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

std::string InvokeCommandRequest::getRegionId() const {
  return regionId_;
}

void InvokeCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InvokeCommandRequest::getInstanceIds() const {
  return instanceIds_;
}

void InvokeCommandRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::map<std::string, std::string> InvokeCommandRequest::getParameters() const {
  return parameters_;
}

void InvokeCommandRequest::setParameters(const std::map<std::string, std::string> &parameters) {
  parameters_ = parameters;
  for(auto const &iter1 : parameters) {
    setParameter(std::string("Parameters") + "." + iter1.first, iter1.second);
  }
}

std::string InvokeCommandRequest::getUsername() const {
  return username_;
}

void InvokeCommandRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

