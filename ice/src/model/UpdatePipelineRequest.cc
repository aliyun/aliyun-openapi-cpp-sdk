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

#include <alibabacloud/ice/model/UpdatePipelineRequest.h>

using AlibabaCloud::ICE::Model::UpdatePipelineRequest;

UpdatePipelineRequest::UpdatePipelineRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UpdatePipeline") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePipelineRequest::~UpdatePipelineRequest() {}

std::string UpdatePipelineRequest::getExtendConfig() const {
  return extendConfig_;
}

void UpdatePipelineRequest::setExtendConfig(const std::string &extendConfig) {
  extendConfig_ = extendConfig;
  setParameter(std::string("ExtendConfig"), extendConfig);
}

int UpdatePipelineRequest::getPriority() const {
  return priority_;
}

void UpdatePipelineRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdatePipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void UpdatePipelineRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string UpdatePipelineRequest::getName() const {
  return name_;
}

void UpdatePipelineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdatePipelineRequest::getStatus() const {
  return status_;
}

void UpdatePipelineRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

