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

#include <alibabacloud/oos/model/TriggerExecutionRequest.h>

using AlibabaCloud::Oos::Model::TriggerExecutionRequest;

TriggerExecutionRequest::TriggerExecutionRequest()
    : RpcServiceRequest("oos", "2019-06-01", "TriggerExecution") {
  setMethod(HttpRequest::Method::Post);
}

TriggerExecutionRequest::~TriggerExecutionRequest() {}

std::string TriggerExecutionRequest::getClientToken() const {
  return clientToken_;
}

void TriggerExecutionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string TriggerExecutionRequest::getType() const {
  return type_;
}

void TriggerExecutionRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string TriggerExecutionRequest::getContent() const {
  return content_;
}

void TriggerExecutionRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string TriggerExecutionRequest::getExecutionId() const {
  return executionId_;
}

void TriggerExecutionRequest::setExecutionId(const std::string &executionId) {
  executionId_ = executionId;
  setParameter(std::string("ExecutionId"), executionId);
}

std::string TriggerExecutionRequest::getRegionId() const {
  return regionId_;
}

void TriggerExecutionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

