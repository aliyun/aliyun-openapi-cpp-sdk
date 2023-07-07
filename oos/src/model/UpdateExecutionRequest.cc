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

#include <alibabacloud/oos/model/UpdateExecutionRequest.h>

using AlibabaCloud::Oos::Model::UpdateExecutionRequest;

UpdateExecutionRequest::UpdateExecutionRequest()
    : RpcServiceRequest("oos", "2019-06-01", "UpdateExecution") {
  setMethod(HttpRequest::Method::Post);
}

UpdateExecutionRequest::~UpdateExecutionRequest() {}

std::string UpdateExecutionRequest::getClientToken() const {
  return clientToken_;
}

void UpdateExecutionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateExecutionRequest::getDescription() const {
  return description_;
}

void UpdateExecutionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateExecutionRequest::getExecutionId() const {
  return executionId_;
}

void UpdateExecutionRequest::setExecutionId(const std::string &executionId) {
  executionId_ = executionId;
  setParameter(std::string("ExecutionId"), executionId);
}

std::string UpdateExecutionRequest::getRegionId() const {
  return regionId_;
}

void UpdateExecutionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateExecutionRequest::getParameters() const {
  return parameters_;
}

void UpdateExecutionRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

