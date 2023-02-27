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

#include <alibabacloud/ice/model/CreatePipelineRequest.h>

using AlibabaCloud::ICE::Model::CreatePipelineRequest;

CreatePipelineRequest::CreatePipelineRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreatePipeline") {
  setMethod(HttpRequest::Method::Post);
}

CreatePipelineRequest::~CreatePipelineRequest() {}

std::string CreatePipelineRequest::getSpeed() const {
  return speed_;
}

void CreatePipelineRequest::setSpeed(const std::string &speed) {
  speed_ = speed;
  setParameter(std::string("Speed"), speed);
}

std::string CreatePipelineRequest::getExtendConfig() const {
  return extendConfig_;
}

void CreatePipelineRequest::setExtendConfig(const std::string &extendConfig) {
  extendConfig_ = extendConfig;
  setParameter(std::string("ExtendConfig"), extendConfig);
}

int CreatePipelineRequest::getPriority() const {
  return priority_;
}

void CreatePipelineRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreatePipelineRequest::getAppId() const {
  return appId_;
}

void CreatePipelineRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreatePipelineRequest::getName() const {
  return name_;
}

void CreatePipelineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

